#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00178EF0
// Address: 0x178ef0 - 0x178fb8
void sub_00178EF0_0x178ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178EF0_0x178ef0");
#endif

    switch (ctx->pc) {
        case 0x178ef0u: goto label_178ef0;
        case 0x178ef4u: goto label_178ef4;
        case 0x178ef8u: goto label_178ef8;
        case 0x178efcu: goto label_178efc;
        case 0x178f00u: goto label_178f00;
        case 0x178f04u: goto label_178f04;
        case 0x178f08u: goto label_178f08;
        case 0x178f0cu: goto label_178f0c;
        case 0x178f10u: goto label_178f10;
        case 0x178f14u: goto label_178f14;
        case 0x178f18u: goto label_178f18;
        case 0x178f1cu: goto label_178f1c;
        case 0x178f20u: goto label_178f20;
        case 0x178f24u: goto label_178f24;
        case 0x178f28u: goto label_178f28;
        case 0x178f2cu: goto label_178f2c;
        case 0x178f30u: goto label_178f30;
        case 0x178f34u: goto label_178f34;
        case 0x178f38u: goto label_178f38;
        case 0x178f3cu: goto label_178f3c;
        case 0x178f40u: goto label_178f40;
        case 0x178f44u: goto label_178f44;
        case 0x178f48u: goto label_178f48;
        case 0x178f4cu: goto label_178f4c;
        case 0x178f50u: goto label_178f50;
        case 0x178f54u: goto label_178f54;
        case 0x178f58u: goto label_178f58;
        case 0x178f5cu: goto label_178f5c;
        case 0x178f60u: goto label_178f60;
        case 0x178f64u: goto label_178f64;
        case 0x178f68u: goto label_178f68;
        case 0x178f6cu: goto label_178f6c;
        case 0x178f70u: goto label_178f70;
        case 0x178f74u: goto label_178f74;
        case 0x178f78u: goto label_178f78;
        case 0x178f7cu: goto label_178f7c;
        case 0x178f80u: goto label_178f80;
        case 0x178f84u: goto label_178f84;
        case 0x178f88u: goto label_178f88;
        case 0x178f8cu: goto label_178f8c;
        case 0x178f90u: goto label_178f90;
        case 0x178f94u: goto label_178f94;
        case 0x178f98u: goto label_178f98;
        case 0x178f9cu: goto label_178f9c;
        case 0x178fa0u: goto label_178fa0;
        case 0x178fa4u: goto label_178fa4;
        case 0x178fa8u: goto label_178fa8;
        case 0x178facu: goto label_178fac;
        case 0x178fb0u: goto label_178fb0;
        case 0x178fb4u: goto label_178fb4;
        default: break;
    }

    ctx->pc = 0x178ef0u;

label_178ef0:
    // 0x178ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_178ef4:
    // 0x178ef4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x178ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_178ef8:
    // 0x178ef8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x178ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_178efc:
    // 0x178efc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_178f00:
    // 0x178f00: 0x2450d3d8  addiu       $s0, $v0, -0x2C28
    ctx->pc = 0x178f00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955992));
label_178f04:
    // 0x178f04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x178f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_178f08:
    // 0x178f08: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x178f08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_178f0c:
    // 0x178f0c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x178f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_178f10:
    // 0x178f10: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_178f14:
    if (ctx->pc == 0x178F14u) {
        ctx->pc = 0x178F14u;
            // 0x178f14: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x178F18u;
        goto label_178f18;
    }
    ctx->pc = 0x178F10u;
    {
        const bool branch_taken_0x178f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178F10u;
            // 0x178f14: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178f10) {
            ctx->pc = 0x178F2Cu;
            goto label_178f2c;
        }
    }
    ctx->pc = 0x178F18u;
label_178f18:
    // 0x178f18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x178f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_178f1c:
    // 0x178f1c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_178f20:
    if (ctx->pc == 0x178F20u) {
        ctx->pc = 0x178F20u;
            // 0x178f20: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x178F24u;
        goto label_178f24;
    }
    ctx->pc = 0x178F1Cu;
    {
        const bool branch_taken_0x178f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x178f1c) {
            ctx->pc = 0x178F20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178F1Cu;
            // 0x178f20: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178F30u;
            goto label_178f30;
        }
    }
    ctx->pc = 0x178F24u;
label_178f24:
    // 0x178f24: 0x40f809  jalr        $v0
label_178f28:
    if (ctx->pc == 0x178F28u) {
        ctx->pc = 0x178F2Cu;
        goto label_178f2c;
    }
    ctx->pc = 0x178F24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x178F2Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x178F2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x178F2Cu; }
            if (ctx->pc != 0x178F2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x178F2Cu;
label_178f2c:
    // 0x178f2c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x178f2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_178f30:
    // 0x178f30: 0x623fff7  bgezl       $s1, . + 4 + (-0x9 << 2)
label_178f34:
    if (ctx->pc == 0x178F34u) {
        ctx->pc = 0x178F34u;
            // 0x178f34: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x178F38u;
        goto label_178f38;
    }
    ctx->pc = 0x178F30u;
    {
        const bool branch_taken_0x178f30 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x178f30) {
            ctx->pc = 0x178F34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178F30u;
            // 0x178f34: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178F10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_178f10;
        }
    }
    ctx->pc = 0x178F38u;
label_178f38:
    // 0x178f38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178f38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_178f3c:
    // 0x178f3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178f3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_178f40:
    // 0x178f40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x178f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_178f44:
    // 0x178f44: 0x3e00008  jr          $ra
label_178f48:
    if (ctx->pc == 0x178F48u) {
        ctx->pc = 0x178F48u;
            // 0x178f48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x178F4Cu;
        goto label_178f4c;
    }
    ctx->pc = 0x178F44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178F44u;
            // 0x178f48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x178F4Cu;
label_178f4c:
    // 0x178f4c: 0x0  nop
    ctx->pc = 0x178f4cu;
    // NOP
label_178f50:
    // 0x178f50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_178f54:
    // 0x178f54: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x178f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_178f58:
    // 0x178f58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x178f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_178f5c:
    // 0x178f5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_178f60:
    // 0x178f60: 0x2450d3d8  addiu       $s0, $v0, -0x2C28
    ctx->pc = 0x178f60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955992));
label_178f64:
    // 0x178f64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x178f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_178f68:
    // 0x178f68: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x178f68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_178f6c:
    // 0x178f6c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x178f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_178f70:
    // 0x178f70: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_178f74:
    if (ctx->pc == 0x178F74u) {
        ctx->pc = 0x178F74u;
            // 0x178f74: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x178F78u;
        goto label_178f78;
    }
    ctx->pc = 0x178F70u;
    {
        const bool branch_taken_0x178f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178F70u;
            // 0x178f74: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178f70) {
            ctx->pc = 0x178F94u;
            goto label_178f94;
        }
    }
    ctx->pc = 0x178F78u;
label_178f78:
    // 0x178f78: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x178f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_178f7c:
    // 0x178f7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_178f80:
    if (ctx->pc == 0x178F80u) {
        ctx->pc = 0x178F80u;
            // 0x178f80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x178F84u;
        goto label_178f84;
    }
    ctx->pc = 0x178F7Cu;
    {
        const bool branch_taken_0x178f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178F7Cu;
            // 0x178f80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178f7c) {
            ctx->pc = 0x178F94u;
            goto label_178f94;
        }
    }
    ctx->pc = 0x178F84u;
label_178f84:
    // 0x178f84: 0x240501f4  addiu       $a1, $zero, 0x1F4
    ctx->pc = 0x178f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
label_178f88:
    // 0x178f88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x178f88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_178f8c:
    // 0x178f8c: 0x40f809  jalr        $v0
label_178f90:
    if (ctx->pc == 0x178F90u) {
        ctx->pc = 0x178F90u;
            // 0x178f90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x178F94u;
        goto label_178f94;
    }
    ctx->pc = 0x178F8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x178F94u);
        ctx->pc = 0x178F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178F8Cu;
            // 0x178f90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x178F94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x178F94u; }
            if (ctx->pc != 0x178F94u) { return; }
        }
        }
    }
    ctx->pc = 0x178F94u;
label_178f94:
    // 0x178f94: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x178f94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_178f98:
    // 0x178f98: 0x623fff5  bgezl       $s1, . + 4 + (-0xB << 2)
label_178f9c:
    if (ctx->pc == 0x178F9Cu) {
        ctx->pc = 0x178F9Cu;
            // 0x178f9c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x178FA0u;
        goto label_178fa0;
    }
    ctx->pc = 0x178F98u;
    {
        const bool branch_taken_0x178f98 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x178f98) {
            ctx->pc = 0x178F9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178F98u;
            // 0x178f9c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178F70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_178f70;
        }
    }
    ctx->pc = 0x178FA0u;
label_178fa0:
    // 0x178fa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178fa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_178fa4:
    // 0x178fa4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178fa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_178fa8:
    // 0x178fa8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x178fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_178fac:
    // 0x178fac: 0x3e00008  jr          $ra
label_178fb0:
    if (ctx->pc == 0x178FB0u) {
        ctx->pc = 0x178FB0u;
            // 0x178fb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x178FB4u;
        goto label_178fb4;
    }
    ctx->pc = 0x178FACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178FACu;
            // 0x178fb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x178FB4u;
label_178fb4:
    // 0x178fb4: 0x0  nop
    ctx->pc = 0x178fb4u;
    // NOP
}
