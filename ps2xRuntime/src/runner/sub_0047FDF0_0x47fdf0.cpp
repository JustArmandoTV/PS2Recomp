#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047FDF0
// Address: 0x47fdf0 - 0x47fe60
void sub_0047FDF0_0x47fdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047FDF0_0x47fdf0");
#endif

    switch (ctx->pc) {
        case 0x47fdf0u: goto label_47fdf0;
        case 0x47fdf4u: goto label_47fdf4;
        case 0x47fdf8u: goto label_47fdf8;
        case 0x47fdfcu: goto label_47fdfc;
        case 0x47fe00u: goto label_47fe00;
        case 0x47fe04u: goto label_47fe04;
        case 0x47fe08u: goto label_47fe08;
        case 0x47fe0cu: goto label_47fe0c;
        case 0x47fe10u: goto label_47fe10;
        case 0x47fe14u: goto label_47fe14;
        case 0x47fe18u: goto label_47fe18;
        case 0x47fe1cu: goto label_47fe1c;
        case 0x47fe20u: goto label_47fe20;
        case 0x47fe24u: goto label_47fe24;
        case 0x47fe28u: goto label_47fe28;
        case 0x47fe2cu: goto label_47fe2c;
        case 0x47fe30u: goto label_47fe30;
        case 0x47fe34u: goto label_47fe34;
        case 0x47fe38u: goto label_47fe38;
        case 0x47fe3cu: goto label_47fe3c;
        case 0x47fe40u: goto label_47fe40;
        case 0x47fe44u: goto label_47fe44;
        case 0x47fe48u: goto label_47fe48;
        case 0x47fe4cu: goto label_47fe4c;
        case 0x47fe50u: goto label_47fe50;
        case 0x47fe54u: goto label_47fe54;
        case 0x47fe58u: goto label_47fe58;
        case 0x47fe5cu: goto label_47fe5c;
        default: break;
    }

    ctx->pc = 0x47fdf0u;

label_47fdf0:
    // 0x47fdf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47fdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_47fdf4:
    // 0x47fdf4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x47fdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_47fdf8:
    // 0x47fdf8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x47fdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_47fdfc:
    // 0x47fdfc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x47fdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_47fe00:
    // 0x47fe00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47fe00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47fe04:
    // 0x47fe04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47fe04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47fe08:
    // 0x47fe08: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x47fe08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47fe0c:
    // 0x47fe0c: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x47fe0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47fe10:
    // 0x47fe10: 0x24900080  addiu       $s0, $a0, 0x80
    ctx->pc = 0x47fe10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_47fe14:
    // 0x47fe14: 0xe480005c  swc1        $f0, 0x5C($a0)
    ctx->pc = 0x47fe14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
label_47fe18:
    // 0x47fe18: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x47fe18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_47fe1c:
    // 0x47fe1c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x47fe1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47fe20:
    // 0x47fe20: 0xe4800060  swc1        $f0, 0x60($a0)
    ctx->pc = 0x47fe20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
label_47fe24:
    // 0x47fe24: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x47fe24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
label_47fe28:
    // 0x47fe28: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x47fe28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
label_47fe2c:
    // 0x47fe2c: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x47fe2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
label_47fe30:
    // 0x47fe30: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x47fe30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47fe34:
    // 0x47fe34: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x47fe34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_47fe38:
    // 0x47fe38: 0x320f809  jalr        $t9
label_47fe3c:
    if (ctx->pc == 0x47FE3Cu) {
        ctx->pc = 0x47FE3Cu;
            // 0x47fe3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47FE40u;
        goto label_47fe40;
    }
    ctx->pc = 0x47FE38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47FE40u);
        ctx->pc = 0x47FE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47FE38u;
            // 0x47fe3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47FE40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47FE40u; }
            if (ctx->pc != 0x47FE40u) { return; }
        }
        }
    }
    ctx->pc = 0x47FE40u;
label_47fe40:
    // 0x47fe40: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x47fe40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_47fe44:
    // 0x47fe44: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
label_47fe48:
    if (ctx->pc == 0x47FE48u) {
        ctx->pc = 0x47FE48u;
            // 0x47fe48: 0x261000e0  addiu       $s0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->pc = 0x47FE4Cu;
        goto label_47fe4c;
    }
    ctx->pc = 0x47FE44u;
    {
        const bool branch_taken_0x47fe44 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x47FE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47FE44u;
            // 0x47fe48: 0x261000e0  addiu       $s0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47fe44) {
            ctx->pc = 0x47FE30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_47fe30;
        }
    }
    ctx->pc = 0x47FE4Cu;
label_47fe4c:
    // 0x47fe4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x47fe4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_47fe50:
    // 0x47fe50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47fe50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47fe54:
    // 0x47fe54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47fe54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47fe58:
    // 0x47fe58: 0x3e00008  jr          $ra
label_47fe5c:
    if (ctx->pc == 0x47FE5Cu) {
        ctx->pc = 0x47FE5Cu;
            // 0x47fe5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x47FE60u;
        goto label_fallthrough_0x47fe58;
    }
    ctx->pc = 0x47FE58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47FE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47FE58u;
            // 0x47fe5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x47fe58:
    ctx->pc = 0x47FE60u;
}
