#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AC0A0
// Address: 0x2ac0a0 - 0x2ac120
void sub_002AC0A0_0x2ac0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC0A0_0x2ac0a0");
#endif

    switch (ctx->pc) {
        case 0x2ac0b4u: goto label_2ac0b4;
        default: break;
    }

    ctx->pc = 0x2ac0a0u;

    // 0x2ac0a0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ac0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ac0a4: 0x24a80008  addiu       $t0, $a1, 0x8
    ctx->pc = 0x2ac0a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2ac0a8: 0x24870008  addiu       $a3, $a0, 0x8
    ctx->pc = 0x2ac0a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2ac0ac: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2ac0acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2ac0b0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2ac0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_2ac0b4:
    // 0x2ac0b4: 0x81030000  lb          $v1, 0x0($t0)
    ctx->pc = 0x2ac0b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2ac0b8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2ac0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2ac0bc: 0x81020001  lb          $v0, 0x1($t0)
    ctx->pc = 0x2ac0bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x2ac0c0: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x2ac0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ac0c4: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x2ac0c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x2ac0c8: 0xa0e20001  sb          $v0, 0x1($a3)
    ctx->pc = 0x2ac0c8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ac0cc: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2AC0CCu;
    {
        const bool branch_taken_0x2ac0cc = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x2AC0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC0CCu;
            // 0x2ac0d0: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac0cc) {
            ctx->pc = 0x2AC0B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ac0b4;
        }
    }
    ctx->pc = 0x2AC0D4u;
    // 0x2ac0d4: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x2ac0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x2ac0d8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ac0d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac0dc: 0xac830048  sw          $v1, 0x48($a0)
    ctx->pc = 0x2ac0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
    // 0x2ac0e0: 0x8ca3004c  lw          $v1, 0x4C($a1)
    ctx->pc = 0x2ac0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x2ac0e4: 0xac83004c  sw          $v1, 0x4C($a0)
    ctx->pc = 0x2ac0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 3));
    // 0x2ac0e8: 0xc4a00050  lwc1        $f0, 0x50($a1)
    ctx->pc = 0x2ac0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ac0ec: 0xe4800050  swc1        $f0, 0x50($a0)
    ctx->pc = 0x2ac0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x2ac0f0: 0x8ca30054  lw          $v1, 0x54($a1)
    ctx->pc = 0x2ac0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x2ac0f4: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x2ac0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
    // 0x2ac0f8: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x2ac0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x2ac0fc: 0xac830058  sw          $v1, 0x58($a0)
    ctx->pc = 0x2ac0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 3));
    // 0x2ac100: 0x84a3005c  lh          $v1, 0x5C($a1)
    ctx->pc = 0x2ac100u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x2ac104: 0xa483005c  sh          $v1, 0x5C($a0)
    ctx->pc = 0x2ac104u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ac108: 0x84a3005e  lh          $v1, 0x5E($a1)
    ctx->pc = 0x2ac108u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 94)));
    // 0x2ac10c: 0xa483005e  sh          $v1, 0x5E($a0)
    ctx->pc = 0x2ac10cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 94), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ac110: 0x90a30060  lbu         $v1, 0x60($a1)
    ctx->pc = 0x2ac110u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x2ac114: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AC114u;
            // 0x2ac118: 0xa0830060  sb          $v1, 0x60($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 96), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AC11Cu;
    // 0x2ac11c: 0x0  nop
    ctx->pc = 0x2ac11cu;
    // NOP
}
