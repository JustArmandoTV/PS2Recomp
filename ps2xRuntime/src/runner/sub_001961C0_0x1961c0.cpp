#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001961C0
// Address: 0x1961c0 - 0x196270
void sub_001961C0_0x1961c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001961C0_0x1961c0");
#endif

    ctx->pc = 0x1961c0u;

    // 0x1961c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1961c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1961c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1961c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1961c8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1961c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1961cc: 0xa0850059  sb          $a1, 0x59($a0)
    ctx->pc = 0x1961ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 89), (uint8_t)GPR_U32(ctx, 5));
    // 0x1961d0: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x1961d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x1961d4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1961d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1961d8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1961d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1961dc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1961dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1961e0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1961e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1961e4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1961e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1961e8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1961e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1961ec: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1961ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1961f0: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1961f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1961f4: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1961f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1961f8: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1961f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1961fc: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1961fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x196200: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x196200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x196204: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x196204u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x196208: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x196208u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x19620c: 0xac85003c  sw          $a1, 0x3C($a0)
    ctx->pc = 0x19620cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 5));
    // 0x196210: 0xac850040  sw          $a1, 0x40($a0)
    ctx->pc = 0x196210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 5));
    // 0x196214: 0xac850044  sw          $a1, 0x44($a0)
    ctx->pc = 0x196214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 5));
    // 0x196218: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x196218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x19621c: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x19621cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x196220: 0xa4830050  sh          $v1, 0x50($a0)
    ctx->pc = 0x196220u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 80), (uint16_t)GPR_U32(ctx, 3));
    // 0x196224: 0xa4830052  sh          $v1, 0x52($a0)
    ctx->pc = 0x196224u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 82), (uint16_t)GPR_U32(ctx, 3));
    // 0x196228: 0xa0800054  sb          $zero, 0x54($a0)
    ctx->pc = 0x196228u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x19622c: 0xa0830055  sb          $v1, 0x55($a0)
    ctx->pc = 0x19622cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 85), (uint8_t)GPR_U32(ctx, 3));
    // 0x196230: 0xa0830056  sb          $v1, 0x56($a0)
    ctx->pc = 0x196230u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 86), (uint8_t)GPR_U32(ctx, 3));
    // 0x196234: 0xa0830057  sb          $v1, 0x57($a0)
    ctx->pc = 0x196234u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 87), (uint8_t)GPR_U32(ctx, 3));
    // 0x196238: 0xa0800058  sb          $zero, 0x58($a0)
    ctx->pc = 0x196238u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x19623c: 0xa080005a  sb          $zero, 0x5A($a0)
    ctx->pc = 0x19623cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x196240: 0xa080005b  sb          $zero, 0x5B($a0)
    ctx->pc = 0x196240u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 91), (uint8_t)GPR_U32(ctx, 0));
    // 0x196244: 0xa080005c  sb          $zero, 0x5C($a0)
    ctx->pc = 0x196244u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x196248: 0xa083005d  sb          $v1, 0x5D($a0)
    ctx->pc = 0x196248u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 93), (uint8_t)GPR_U32(ctx, 3));
    // 0x19624c: 0xa083005e  sb          $v1, 0x5E($a0)
    ctx->pc = 0x19624cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 94), (uint8_t)GPR_U32(ctx, 3));
    // 0x196250: 0xa083005f  sb          $v1, 0x5F($a0)
    ctx->pc = 0x196250u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x196254: 0xa0830064  sb          $v1, 0x64($a0)
    ctx->pc = 0x196254u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 100), (uint8_t)GPR_U32(ctx, 3));
    // 0x196258: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x196258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x19625c: 0xa0830060  sb          $v1, 0x60($a0)
    ctx->pc = 0x19625cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x196260: 0xa0800061  sb          $zero, 0x61($a0)
    ctx->pc = 0x196260u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 97), (uint8_t)GPR_U32(ctx, 0));
    // 0x196264: 0xa0830062  sb          $v1, 0x62($a0)
    ctx->pc = 0x196264u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 98), (uint8_t)GPR_U32(ctx, 3));
    // 0x196268: 0x3e00008  jr          $ra
    ctx->pc = 0x196268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19626Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196268u;
            // 0x19626c: 0xa0830063  sb          $v1, 0x63($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 99), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196270u;
}
