#pragma once

#include "engine/core/scene/node.h"
#include "engine/core/util/base64.h"
#include "anim_clip.h"

namespace Echo
{
	class Timeline : public Node
	{
		ECHO_CLASS(Timeline, Node)

	public:
		Timeline();
		virtual ~Timeline();

		// play anim
		void setAnim(const StringOption& animName);

		// get animations
		const StringOption& getAnim() { return m_animations; }

		// is anim exist
		bool isAnimExist(const char* animName);

		// get anim data
		const Base64String& getAnimData() const { return m_animData; }

		// set anim data
		void setAnimData(const Base64String& data) { m_animData = data; }

	public:
		// add clip
		void addClip(AnimClip* clip);

	protected:
		// update self
		virtual void update_self() override;

	public:
		// generate unique name
		void generateUniqueAnimName(String& oName);

	private:
		Base64String			m_animData;
		vector<AnimClip*>::type	m_clips;
		StringOption			m_animations;
	};
}
