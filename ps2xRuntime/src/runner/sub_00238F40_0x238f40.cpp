#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00238F40
// Address: 0x238f40 - 0x239050
void sub_00238F40_0x238f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238F40_0x238f40");
#endif

    switch (ctx->pc) {
        case 0x238f40u: goto label_238f40;
        case 0x238f44u: goto label_238f44;
        case 0x238f48u: goto label_238f48;
        case 0x238f4cu: goto label_238f4c;
        case 0x238f50u: goto label_238f50;
        case 0x238f54u: goto label_238f54;
        case 0x238f58u: goto label_238f58;
        case 0x238f5cu: goto label_238f5c;
        case 0x238f60u: goto label_238f60;
        case 0x238f64u: goto label_238f64;
        case 0x238f68u: goto label_238f68;
        case 0x238f6cu: goto label_238f6c;
        case 0x238f70u: goto label_238f70;
        case 0x238f74u: goto label_238f74;
        case 0x238f78u: goto label_238f78;
        case 0x238f7cu: goto label_238f7c;
        case 0x238f80u: goto label_238f80;
        case 0x238f84u: goto label_238f84;
        case 0x238f88u: goto label_238f88;
        case 0x238f8cu: goto label_238f8c;
        case 0x238f90u: goto label_238f90;
        case 0x238f94u: goto label_238f94;
        case 0x238f98u: goto label_238f98;
        case 0x238f9cu: goto label_238f9c;
        case 0x238fa0u: goto label_238fa0;
        case 0x238fa4u: goto label_238fa4;
        case 0x238fa8u: goto label_238fa8;
        case 0x238facu: goto label_238fac;
        case 0x238fb0u: goto label_238fb0;
        case 0x238fb4u: goto label_238fb4;
        case 0x238fb8u: goto label_238fb8;
        case 0x238fbcu: goto label_238fbc;
        case 0x238fc0u: goto label_238fc0;
        case 0x238fc4u: goto label_238fc4;
        case 0x238fc8u: goto label_238fc8;
        case 0x238fccu: goto label_238fcc;
        case 0x238fd0u: goto label_238fd0;
        case 0x238fd4u: goto label_238fd4;
        case 0x238fd8u: goto label_238fd8;
        case 0x238fdcu: goto label_238fdc;
        case 0x238fe0u: goto label_238fe0;
        case 0x238fe4u: goto label_238fe4;
        case 0x238fe8u: goto label_238fe8;
        case 0x238fecu: goto label_238fec;
        case 0x238ff0u: goto label_238ff0;
        case 0x238ff4u: goto label_238ff4;
        case 0x238ff8u: goto label_238ff8;
        case 0x238ffcu: goto label_238ffc;
        case 0x239000u: goto label_239000;
        case 0x239004u: goto label_239004;
        case 0x239008u: goto label_239008;
        case 0x23900cu: goto label_23900c;
        case 0x239010u: goto label_239010;
        case 0x239014u: goto label_239014;
        case 0x239018u: goto label_239018;
        case 0x23901cu: goto label_23901c;
        case 0x239020u: goto label_239020;
        case 0x239024u: goto label_239024;
        case 0x239028u: goto label_239028;
        case 0x23902cu: goto label_23902c;
        case 0x239030u: goto label_239030;
        case 0x239034u: goto label_239034;
        case 0x239038u: goto label_239038;
        case 0x23903cu: goto label_23903c;
        case 0x239040u: goto label_239040;
        case 0x239044u: goto label_239044;
        case 0x239048u: goto label_239048;
        case 0x23904cu: goto label_23904c;
        default: break;
    }

    ctx->pc = 0x238f40u;

label_238f40:
    // 0x238f40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x238f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_238f44:
    // 0x238f44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x238f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_238f48:
    // 0x238f48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x238f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_238f4c:
    // 0x238f4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x238f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_238f50:
    // 0x238f50: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x238f50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_238f54:
    // 0x238f54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x238f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_238f58:
    // 0x238f58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x238f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_238f5c:
    // 0x238f5c: 0x8c8300fc  lw          $v1, 0xFC($a0)
    ctx->pc = 0x238f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
label_238f60:
    // 0x238f60: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x238f60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_238f64:
    // 0x238f64: 0x6400010  bltz        $s2, . + 4 + (0x10 << 2)
label_238f68:
    if (ctx->pc == 0x238F68u) {
        ctx->pc = 0x238F68u;
            // 0x238f68: 0x249000f8  addiu       $s0, $a0, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 248));
        ctx->pc = 0x238F6Cu;
        goto label_238f6c;
    }
    ctx->pc = 0x238F64u;
    {
        const bool branch_taken_0x238f64 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x238F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238F64u;
            // 0x238f68: 0x249000f8  addiu       $s0, $a0, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238f64) {
            ctx->pc = 0x238FA8u;
            goto label_238fa8;
        }
    }
    ctx->pc = 0x238F6Cu;
label_238f6c:
    // 0x238f6c: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x238f6cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_238f70:
    // 0x238f70: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x238f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_238f74:
    // 0x238f74: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x238f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_238f78:
    // 0x238f78: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x238f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_238f7c:
    // 0x238f7c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_238f80:
    if (ctx->pc == 0x238F80u) {
        ctx->pc = 0x238F84u;
        goto label_238f84;
    }
    ctx->pc = 0x238F7Cu;
    {
        const bool branch_taken_0x238f7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x238f7c) {
            ctx->pc = 0x238F98u;
            goto label_238f98;
        }
    }
    ctx->pc = 0x238F84u;
label_238f84:
    // 0x238f84: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x238f84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_238f88:
    // 0x238f88: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x238f88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_238f8c:
    // 0x238f8c: 0x320f809  jalr        $t9
label_238f90:
    if (ctx->pc == 0x238F90u) {
        ctx->pc = 0x238F90u;
            // 0x238f90: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x238F94u;
        goto label_238f94;
    }
    ctx->pc = 0x238F8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x238F94u);
        ctx->pc = 0x238F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238F8Cu;
            // 0x238f90: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x238F94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x238F94u; }
            if (ctx->pc != 0x238F94u) { return; }
        }
        }
    }
    ctx->pc = 0x238F94u;
label_238f94:
    // 0x238f94: 0x0  nop
    ctx->pc = 0x238f94u;
    // NOP
label_238f98:
    // 0x238f98: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x238f98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_238f9c:
    // 0x238f9c: 0x641fff4  bgez        $s2, . + 4 + (-0xC << 2)
label_238fa0:
    if (ctx->pc == 0x238FA0u) {
        ctx->pc = 0x238FA0u;
            // 0x238fa0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->pc = 0x238FA4u;
        goto label_238fa4;
    }
    ctx->pc = 0x238F9Cu;
    {
        const bool branch_taken_0x238f9c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x238FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238F9Cu;
            // 0x238fa0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238f9c) {
            ctx->pc = 0x238F70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_238f70;
        }
    }
    ctx->pc = 0x238FA4u;
label_238fa4:
    // 0x238fa4: 0x0  nop
    ctx->pc = 0x238fa4u;
    // NOP
label_238fa8:
    // 0x238fa8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x238fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_238fac:
    // 0x238fac: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x238facu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_238fb0:
    // 0x238fb0: 0x500001d  bltz        $t0, . + 4 + (0x1D << 2)
label_238fb4:
    if (ctx->pc == 0x238FB4u) {
        ctx->pc = 0x238FB8u;
        goto label_238fb8;
    }
    ctx->pc = 0x238FB0u;
    {
        const bool branch_taken_0x238fb0 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x238fb0) {
            ctx->pc = 0x239028u;
            goto label_239028;
        }
    }
    ctx->pc = 0x238FB8u;
label_238fb8:
    // 0x238fb8: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x238fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_238fbc:
    // 0x238fbc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x238fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_238fc0:
    // 0x238fc0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x238fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_238fc4:
    // 0x238fc4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x238fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_238fc8:
    // 0x238fc8: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_238fcc:
    if (ctx->pc == 0x238FCCu) {
        ctx->pc = 0x238FD0u;
        goto label_238fd0;
    }
    ctx->pc = 0x238FC8u;
    {
        const bool branch_taken_0x238fc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x238fc8) {
            ctx->pc = 0x239018u;
            goto label_239018;
        }
    }
    ctx->pc = 0x238FD0u;
label_238fd0:
    // 0x238fd0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x238fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_238fd4:
    // 0x238fd4: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x238fd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_238fd8:
    // 0x238fd8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x238fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_238fdc:
    // 0x238fdc: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x238fdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_238fe0:
    // 0x238fe0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_238fe4:
    if (ctx->pc == 0x238FE4u) {
        ctx->pc = 0x238FE4u;
            // 0x238fe4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x238FE8u;
        goto label_238fe8;
    }
    ctx->pc = 0x238FE0u;
    {
        const bool branch_taken_0x238fe0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x238FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238FE0u;
            // 0x238fe4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238fe0) {
            ctx->pc = 0x239018u;
            goto label_239018;
        }
    }
    ctx->pc = 0x238FE8u;
label_238fe8:
    // 0x238fe8: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x238fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_238fec:
    // 0x238fec: 0x0  nop
    ctx->pc = 0x238fecu;
    // NOP
label_238ff0:
    // 0x238ff0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x238ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_238ff4:
    // 0x238ff4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x238ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_238ff8:
    // 0x238ff8: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x238ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_238ffc:
    // 0x238ffc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x238ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_239000:
    // 0x239000: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x239000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_239004:
    // 0x239004: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x239004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_239008:
    // 0x239008: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x239008u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23900c:
    // 0x23900c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_239010:
    if (ctx->pc == 0x239010u) {
        ctx->pc = 0x239010u;
            // 0x239010: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x239014u;
        goto label_239014;
    }
    ctx->pc = 0x23900Cu;
    {
        const bool branch_taken_0x23900c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x239010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23900Cu;
            // 0x239010: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23900c) {
            ctx->pc = 0x238FF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_238ff0;
        }
    }
    ctx->pc = 0x239014u;
label_239014:
    // 0x239014: 0x0  nop
    ctx->pc = 0x239014u;
    // NOP
label_239018:
    // 0x239018: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x239018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_23901c:
    // 0x23901c: 0x501ffe7  bgez        $t0, . + 4 + (-0x19 << 2)
label_239020:
    if (ctx->pc == 0x239020u) {
        ctx->pc = 0x239020u;
            // 0x239020: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->pc = 0x239024u;
        goto label_239024;
    }
    ctx->pc = 0x23901Cu;
    {
        const bool branch_taken_0x23901c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x239020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23901Cu;
            // 0x239020: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23901c) {
            ctx->pc = 0x238FBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_238fbc;
        }
    }
    ctx->pc = 0x239024u;
label_239024:
    // 0x239024: 0x0  nop
    ctx->pc = 0x239024u;
    // NOP
label_239028:
    // 0x239028: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x239028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23902c:
    // 0x23902c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23902cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_239030:
    // 0x239030: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x239030u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_239034:
    // 0x239034: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x239034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_239038:
    // 0x239038: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x239038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23903c:
    // 0x23903c: 0x3e00008  jr          $ra
label_239040:
    if (ctx->pc == 0x239040u) {
        ctx->pc = 0x239040u;
            // 0x239040: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x239044u;
        goto label_239044;
    }
    ctx->pc = 0x23903Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23903Cu;
            // 0x239040: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x239044u;
label_239044:
    // 0x239044: 0x0  nop
    ctx->pc = 0x239044u;
    // NOP
label_239048:
    // 0x239048: 0x0  nop
    ctx->pc = 0x239048u;
    // NOP
label_23904c:
    // 0x23904c: 0x0  nop
    ctx->pc = 0x23904cu;
    // NOP
}
