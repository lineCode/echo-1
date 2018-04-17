#include <QtGui>
#include "Window.h"
#include <QDateTime>

namespace Game
{
	// 构造函数
	Window::Window(QWidget* parent/* = NULL*/)
		: QWidget(parent)
		//, m_mouseMenu(NULL)
		//, m_timer(NULL)
		//, m_inputController(NULL)
		//, m_defaultInputController(NULL)
		//, m_isLeftButtonDown(false)
	{
		//setAttribute(Qt::WA_NativeWindow);
		//setUpdatesEnabled(false);
		//setMouseTracking(true);
	}

	// 析构函数
	Window::~Window()
	{
		//delete m_timer; m_timer = NULL;

		//EchoEngine::Instance()->Release();
		//delete m_defaultInputController;
	}

	// 开始渲染
	void Window::BeginRender()
	{
		//EchoEngine::Instance()->Initialize((HWND)this->winId());

		//if (!m_defaultInputController)
		//	m_defaultInputController = new DefaultInputController; 

		// 时间事件
		//m_timer = new QTimer(this);
		//connect(m_timer, SIGNAL(timeout()), this, SLOT(Render()));
		//m_timer->start(10);
	}

	// 渲染更新
	void  Window::Render()
	{
		// 鼠标是否位于窗口中
		//ResizeWindow();

		//static DWORD lastTime = QDateTime::currentMSecsSinceEpoch();

		//// 计算delta Time
		//DWORD curTime = QDateTime::currentMSecsSinceEpoch();
		//DWORD elapsedTime = curTime - lastTime;

		//auto controller = m_inputController ? m_inputController : m_defaultInputController;
		//auto pos = controller->mousePosition();
		//auto button = controller->pressedMouseButton();
		//auto elapsed = elapsedTime * 0.001f;

		//// Call the main render function
		////EchoEngine::Instance()->Render(elapsedTime, this->isVisible());

		//lastTime = curTime;
	}

	// 窗口大小改变
	void Window::ResizeWindow()
	{
		
		//int width = static_cast<int>(this->width());
		//int height = static_cast<int>(this->height());

		//if (m_dx9Size.width() != width || m_dx9Size.height() != height)
		//{
		//	EchoEngine::Instance()->Resize(width, height);
		//	m_dx9Size.setWidth(width);
		//	m_dx9Size.setHeight(height);
		//}
	}

	void Window::SetAspectRatio(const QSize& size)
	{
		m_ratio = size;
	}

	// 重置设备
	void  Window::ResetDevice()
	{
	}

	// 鼠标滚轮事件
	void Window::wheelEvent(QWheelEvent * e)
	{
		//auto controller = m_inputController ? m_inputController : m_defaultInputController;
		//controller->wheelEvent(e);
	}

	// 鼠标移动事件
	void Window::mouseMoveEvent(QMouseEvent* e)
	{
		// UI事件
		//if ( m_isLeftButtonDown)
		//{
			// 初始上次位置
		//	static QPointF lastPos = e->localPos();

			// 计算位移
		//	QPointF changedPos = e->localPos() - lastPos;

		//	lastPos = e->localPos();
		//}

		//auto controller = m_inputController ? m_inputController : m_defaultInputController;
		//controller->mouseMoveEvent(e);
	}

	// 鼠标按下事件
	void Window::mousePressEvent(QMouseEvent* e)
	{
		//if (!hasFocus())
		//{
		//	setFocus();
		//}

		// UI事件
		//if ( e->button()==Qt::LeftButton)
		//{
		//	m_isLeftButtonDown = true;
		//}

		// 注册控制器事件
		//auto controller = m_inputController ? m_inputController : m_defaultInputController;
		//controller->mousePressEvent(e);
	}

	void Window::mouseDoubleClickEvent(QMouseEvent* e)
	{
		//const auto& controller = m_inputController ? m_inputController : m_defaultInputController; 
		//controller->mouseDoubleClickEvent(e); 
	}

	// 鼠标释放事件
	void Window::mouseReleaseEvent(QMouseEvent* e)
	{
		// UI事件
		//if (e->button() == Qt::LeftButton)
		//{
		//	m_isLeftButtonDown = false;
		//}

		//auto controller = m_inputController ? m_inputController : m_defaultInputController;
		//controller->mouseReleaseEvent(e);
	}

	// 鼠标按下事件
	void Window::keyPressEvent(QKeyEvent* e)
	{
		//auto controller = m_inputController ? m_inputController : m_defaultInputController;
		//controller->keyPressEvent(e);
	}

	// 鼠标抬起事件
	void Window::keyReleaseEvent(QKeyEvent* e)
	{
		//auto controller = m_inputController ? m_inputController : m_defaultInputController;
		//controller->keyReleaseEvent(e);
	}
}
