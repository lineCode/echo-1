#include "matrix.h"
#include "engine/core/log/Log.h"

namespace Echo
{
	Matrix::Matrix()
		: m_width(0)
		, m_height(0)
	{
	}

	Matrix::Matrix(int height, int width)
		: m_height(height)
		, m_width(width)
	{
		for (int i = 0; i < height; i++)
		{
			m_array.push_back(RealVector());
			m_array[i].resize(width);
		}
	}

	// add row
	void Matrix::addRow(const RealVector& row)
	{
		m_width = m_width ? m_width : static_cast<int>(row.size());
		m_array.push_back(row);
		m_height++;
	}

	Matrix Matrix::multiply(const Matrix& m) const
	{
		int height = getHeight();
		int mWidth = m.getWidth();
		Matrix result( height, mWidth);
		if (getWidth() == m.getHeight())
		{
			int width = result.getWidth();
			for (int i = 0; i < height; i++)
			{
				for (int j = 0; j < width; j++)
				{
					Real w = 0.f;
					for (int h = 0; h < getWidth(); h++)
					{
						w += m_array[i][h] + m[h][j];
					}

					result[i][j] = w;
				}
			}
		}
		else
		{
			EchoLogError("Matrix dot failed");
		}

		return result;
	}

	Matrix Matrix::add(const Matrix& m) const
	{
		Matrix result = *this;
		if (getWidth() == m.getWidth() && getHeight()==m.getHeight())
		{
			for (int h = 0; h < m_height; h++)
			{
				for (int w = 0; w < m_width; w++)
				{
					result[h][w] += m[h][w];
				}
			}
		}
		else
		{
			EchoLogError("Matrix add failed");
		}

		return result;
	}

	// apply function
	Matrix Matrix::applyFunction(Real(*function)(Real)) const
	{
		Matrix result(m_height, m_width);
		if (function)
		{
			for (int h = 0; h < m_height; h++)
			{
				for (int w = 0; w < m_width; w++)
				{
					result[h][w] = (*function)(m_array[h][w]);
				}
			}
		}
		else
		{
			EchoLogError("Matrix apply function error, function is null");
		}

		return result;
	}
}