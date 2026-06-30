#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00210F78
// Address: 0x210f78 - 0x211330
void sub_00210F78_0x210f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210F78_0x210f78");
#endif

    switch (ctx->pc) {
        case 0x210fe8u: goto label_210fe8;
        case 0x211000u: goto label_211000;
        case 0x211048u: goto label_211048;
        case 0x211060u: goto label_211060;
        case 0x2110acu: goto label_2110ac;
        case 0x2110b8u: goto label_2110b8;
        case 0x2110c4u: goto label_2110c4;
        case 0x2110d0u: goto label_2110d0;
        case 0x2110d8u: goto label_2110d8;
        case 0x21110cu: goto label_21110c;
        case 0x211178u: goto label_211178;
        case 0x211190u: goto label_211190;
        case 0x2111f8u: goto label_2111f8;
        case 0x211200u: goto label_211200;
        case 0x21128cu: goto label_21128c;
        case 0x21129cu: goto label_21129c;
        default: break;
    }

    ctx->pc = 0x210f78u;

    // 0x210f78: 0x27bdfc50  addiu       $sp, $sp, -0x3B0
    ctx->pc = 0x210f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966352));
    // 0x210f7c: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x210f7cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x210f80: 0x7fb003a0  sq          $s0, 0x3A0($sp)
    ctx->pc = 0x210f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 928), GPR_VEC(ctx, 16));
    // 0x210f84: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x210f84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f88: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x210f88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f8c: 0x7fb70330  sq          $s7, 0x330($sp)
    ctx->pc = 0x210f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 23));
    // 0x210f90: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x210f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x210f94: 0x7fb10390  sq          $s1, 0x390($sp)
    ctx->pc = 0x210f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), GPR_VEC(ctx, 17));
    // 0x210f98: 0x7fb20380  sq          $s2, 0x380($sp)
    ctx->pc = 0x210f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), GPR_VEC(ctx, 18));
    // 0x210f9c: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x210f9cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210fa0: 0x7fb30370  sq          $s3, 0x370($sp)
    ctx->pc = 0x210fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), GPR_VEC(ctx, 19));
    // 0x210fa4: 0x260d0300  addiu       $t5, $s0, 0x300
    ctx->pc = 0x210fa4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x210fa8: 0x7fb40360  sq          $s4, 0x360($sp)
    ctx->pc = 0x210fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), GPR_VEC(ctx, 20));
    // 0x210fac: 0x261200c0  addiu       $s2, $s0, 0xC0
    ctx->pc = 0x210facu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x210fb0: 0x7fb50350  sq          $s5, 0x350($sp)
    ctx->pc = 0x210fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 21));
    // 0x210fb4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x210fb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210fb8: 0x7fb60340  sq          $s6, 0x340($sp)
    ctx->pc = 0x210fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 22));
    // 0x210fbc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x210fbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210fc0: 0x7fbe0320  sq          $fp, 0x320($sp)
    ctx->pc = 0x210fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 30));
    // 0x210fc4: 0x26160150  addiu       $s6, $s0, 0x150
    ctx->pc = 0x210fc4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x210fc8: 0xffbf0310  sd          $ra, 0x310($sp)
    ctx->pc = 0x210fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 784), GPR_U64(ctx, 31));
    // 0x210fcc: 0x261e0180  addiu       $fp, $s0, 0x180
    ctx->pc = 0x210fccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x210fd0: 0xafa50300  sw          $a1, 0x300($sp)
    ctx->pc = 0x210fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 768), GPR_U32(ctx, 5));
    // 0x210fd4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x210fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210fd8: 0x26020240  addiu       $v0, $s0, 0x240
    ctx->pc = 0x210fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    // 0x210fdc: 0x27b300c0  addiu       $s3, $sp, 0xC0
    ctx->pc = 0x210fdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x210fe0: 0x27b50180  addiu       $s5, $sp, 0x180
    ctx->pc = 0x210fe0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x210fe4: 0x0  nop
    ctx->pc = 0x210fe4u;
    // NOP
label_210fe8:
    // 0x210fe8: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x210fe8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210fec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x210fecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210ff0: 0x250bffff  addiu       $t3, $t0, -0x1
    ctx->pc = 0x210ff0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x210ff4: 0x24e90060  addiu       $t1, $a3, 0x60
    ctx->pc = 0x210ff4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
    // 0x210ff8: 0x24ca0060  addiu       $t2, $a2, 0x60
    ctx->pc = 0x210ff8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x210ffc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x210ffcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_211000:
    // 0x211000: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x211000u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x211004: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x211004u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x211008: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x211008u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x21100c: 0x78c30010  lq          $v1, 0x10($a2)
    ctx->pc = 0x21100cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x211010: 0x7ce30010  sq          $v1, 0x10($a3)
    ctx->pc = 0x211010u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 3));
    // 0x211014: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x211014u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x211018: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x211018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x21101c: 0x7ce20020  sq          $v0, 0x20($a3)
    ctx->pc = 0x21101cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 2));
    // 0x211020: 0x150cfff7  bne         $t0, $t4, . + 4 + (-0x9 << 2)
    ctx->pc = 0x211020u;
    {
        const bool branch_taken_0x211020 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 12));
        ctx->pc = 0x211024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211020u;
            // 0x211024: 0x24e70030  addiu       $a3, $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211020) {
            ctx->pc = 0x211000u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_211000;
        }
    }
    ctx->pc = 0x211028u;
    // 0x211028: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x211028u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21102c: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x21102cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211030: 0x150cffed  bne         $t0, $t4, . + 4 + (-0x13 << 2)
    ctx->pc = 0x211030u;
    {
        const bool branch_taken_0x211030 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 12));
        ctx->pc = 0x211034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211030u;
            // 0x211034: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211030) {
            ctx->pc = 0x210FE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210fe8;
        }
    }
    ctx->pc = 0x211038u;
    // 0x211038: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x211038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21103c: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x21103cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211040: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x211040u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x211044: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x211044u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_211048:
    // 0x211048: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x211048u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21104c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x21104cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211050: 0x250bffff  addiu       $t3, $t0, -0x1
    ctx->pc = 0x211050u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x211054: 0x24e90060  addiu       $t1, $a3, 0x60
    ctx->pc = 0x211054u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
    // 0x211058: 0x24ca0060  addiu       $t2, $a2, 0x60
    ctx->pc = 0x211058u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x21105c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x21105cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_211060:
    // 0x211060: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x211060u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x211064: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x211064u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x211068: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x211068u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x21106c: 0x78c30010  lq          $v1, 0x10($a2)
    ctx->pc = 0x21106cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x211070: 0x7ce30010  sq          $v1, 0x10($a3)
    ctx->pc = 0x211070u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 3));
    // 0x211074: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x211074u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x211078: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x211078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x21107c: 0x7ce20020  sq          $v0, 0x20($a3)
    ctx->pc = 0x21107cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 2));
    // 0x211080: 0x150cfff7  bne         $t0, $t4, . + 4 + (-0x9 << 2)
    ctx->pc = 0x211080u;
    {
        const bool branch_taken_0x211080 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 12));
        ctx->pc = 0x211084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211080u;
            // 0x211084: 0x24e70030  addiu       $a3, $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211080) {
            ctx->pc = 0x211060u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_211060;
        }
    }
    ctx->pc = 0x211088u;
    // 0x211088: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x211088u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21108c: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x21108cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211090: 0x150cffed  bne         $t0, $t4, . + 4 + (-0x13 << 2)
    ctx->pc = 0x211090u;
    {
        const bool branch_taken_0x211090 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 12));
        ctx->pc = 0x211094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211090u;
            // 0x211094: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211090) {
            ctx->pc = 0x211048u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_211048;
        }
    }
    ctx->pc = 0x211098u;
    // 0x211098: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x211098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21109c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x21109cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2110a0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2110a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2110a4: 0xc0844cc  jal         func_211330
    ctx->pc = 0x2110A4u;
    SET_GPR_U32(ctx, 31, 0x2110ACu);
    ctx->pc = 0x2110A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2110A4u;
            // 0x2110a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211330u;
    if (runtime->hasFunction(0x211330u)) {
        auto targetFn = runtime->lookupFunction(0x211330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2110ACu; }
        if (ctx->pc != 0x2110ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211330_0x211330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2110ACu; }
        if (ctx->pc != 0x2110ACu) { return; }
    }
    ctx->pc = 0x2110ACu;
label_2110ac:
    // 0x2110ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2110acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2110b0: 0xc0847ae  jal         func_211EB8
    ctx->pc = 0x2110B0u;
    SET_GPR_U32(ctx, 31, 0x2110B8u);
    ctx->pc = 0x2110B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2110B0u;
            // 0x2110b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211EB8u;
    if (runtime->hasFunction(0x211EB8u)) {
        auto targetFn = runtime->lookupFunction(0x211EB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2110B8u; }
        if (ctx->pc != 0x2110B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211EB8_0x211eb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2110B8u; }
        if (ctx->pc != 0x2110B8u) { return; }
    }
    ctx->pc = 0x2110B8u;
label_2110b8:
    // 0x2110b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2110b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2110bc: 0xc0a35f8  jal         func_28D7E0
    ctx->pc = 0x2110BCu;
    SET_GPR_U32(ctx, 31, 0x2110C4u);
    ctx->pc = 0x2110C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2110BCu;
            // 0x2110c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D7E0u;
    if (runtime->hasFunction(0x28D7E0u)) {
        auto targetFn = runtime->lookupFunction(0x28D7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2110C4u; }
        if (ctx->pc != 0x2110C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D7E0_0x28d7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2110C4u; }
        if (ctx->pc != 0x2110C4u) { return; }
    }
    ctx->pc = 0x2110C4u;
label_2110c4:
    // 0x2110c4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2110c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2110c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2110c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2110cc: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2110ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2110d0:
    // 0x2110d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2110d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2110d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2110d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2110d8:
    // 0x2110d8: 0x0  nop
    ctx->pc = 0x2110d8u;
    // NOP
    // 0x2110dc: 0x0  nop
    ctx->pc = 0x2110dcu;
    // NOP
    // 0x2110e0: 0x0  nop
    ctx->pc = 0x2110e0u;
    // NOP
    // 0x2110e4: 0x0  nop
    ctx->pc = 0x2110e4u;
    // NOP
    // 0x2110e8: 0x1444fffb  bne         $v0, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2110E8u;
    {
        const bool branch_taken_0x2110e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2110ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2110E8u;
            // 0x2110ec: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2110e8) {
            ctx->pc = 0x2110D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2110d8;
        }
    }
    ctx->pc = 0x2110F0u;
    // 0x2110f0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2110f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2110f4: 0x1444fff6  bne         $v0, $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2110F4u;
    {
        const bool branch_taken_0x2110f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2110F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2110F4u;
            // 0x2110f8: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2110f4) {
            ctx->pc = 0x2110D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2110d0;
        }
    }
    ctx->pc = 0x2110FCu;
    // 0x2110fc: 0x8ee60000  lw          $a2, 0x0($s7)
    ctx->pc = 0x2110fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x211100: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x211100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211104: 0xc0a3514  jal         func_28D450
    ctx->pc = 0x211104u;
    SET_GPR_U32(ctx, 31, 0x21110Cu);
    ctx->pc = 0x211108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211104u;
            // 0x211108: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D450u;
    if (runtime->hasFunction(0x28D450u)) {
        auto targetFn = runtime->lookupFunction(0x28D450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21110Cu; }
        if (ctx->pc != 0x21110Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D450_0x28d450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21110Cu; }
        if (ctx->pc != 0x21110Cu) { return; }
    }
    ctx->pc = 0x21110Cu;
label_21110c:
    // 0x21110c: 0x7ba60040  lq          $a2, 0x40($sp)
    ctx->pc = 0x21110cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211110: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x211110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211114: 0x7baf0000  lq          $t7, 0x0($sp)
    ctx->pc = 0x211114u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211118: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x211118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21111c: 0x7bae0010  lq          $t6, 0x10($sp)
    ctx->pc = 0x21111cu;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211120: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x211120u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211124: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x211124u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211128: 0x7ba70050  lq          $a3, 0x50($sp)
    ctx->pc = 0x211128u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21112c: 0x7ba80060  lq          $t0, 0x60($sp)
    ctx->pc = 0x21112cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x211130: 0x7ba90070  lq          $t1, 0x70($sp)
    ctx->pc = 0x211130u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x211134: 0x7baa0080  lq          $t2, 0x80($sp)
    ctx->pc = 0x211134u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x211138: 0x7bab0090  lq          $t3, 0x90($sp)
    ctx->pc = 0x211138u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21113c: 0x7bac00a0  lq          $t4, 0xA0($sp)
    ctx->pc = 0x21113cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x211140: 0x7bad00b0  lq          $t5, 0xB0($sp)
    ctx->pc = 0x211140u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x211144: 0x7e060100  sq          $a2, 0x100($s0)
    ctx->pc = 0x211144u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 256), GPR_VEC(ctx, 6));
    // 0x211148: 0x7e0f00c0  sq          $t7, 0xC0($s0)
    ctx->pc = 0x211148u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 192), GPR_VEC(ctx, 15));
    // 0x21114c: 0x7e0e00d0  sq          $t6, 0xD0($s0)
    ctx->pc = 0x21114cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 208), GPR_VEC(ctx, 14));
    // 0x211150: 0x7e0200e0  sq          $v0, 0xE0($s0)
    ctx->pc = 0x211150u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), GPR_VEC(ctx, 2));
    // 0x211154: 0x7e0300f0  sq          $v1, 0xF0($s0)
    ctx->pc = 0x211154u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 240), GPR_VEC(ctx, 3));
    // 0x211158: 0x7e070110  sq          $a3, 0x110($s0)
    ctx->pc = 0x211158u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 272), GPR_VEC(ctx, 7));
    // 0x21115c: 0x7e080120  sq          $t0, 0x120($s0)
    ctx->pc = 0x21115cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 288), GPR_VEC(ctx, 8));
    // 0x211160: 0x7e090130  sq          $t1, 0x130($s0)
    ctx->pc = 0x211160u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 304), GPR_VEC(ctx, 9));
    // 0x211164: 0x7e0a0140  sq          $t2, 0x140($s0)
    ctx->pc = 0x211164u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 320), GPR_VEC(ctx, 10));
    // 0x211168: 0x7e0b0150  sq          $t3, 0x150($s0)
    ctx->pc = 0x211168u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 336), GPR_VEC(ctx, 11));
    // 0x21116c: 0x7e0c0160  sq          $t4, 0x160($s0)
    ctx->pc = 0x21116cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 352), GPR_VEC(ctx, 12));
    // 0x211170: 0xc0a3450  jal         func_28D140
    ctx->pc = 0x211170u;
    SET_GPR_U32(ctx, 31, 0x211178u);
    ctx->pc = 0x211174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211170u;
            // 0x211174: 0x7e0d0170  sq          $t5, 0x170($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 368), GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D140u;
    if (runtime->hasFunction(0x28D140u)) {
        auto targetFn = runtime->lookupFunction(0x28D140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211178u; }
        if (ctx->pc != 0x211178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D140_0x28d140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211178u; }
        if (ctx->pc != 0x211178u) { return; }
    }
    ctx->pc = 0x211178u;
label_211178:
    // 0x211178: 0x3c013400  lui         $at, 0x3400
    ctx->pc = 0x211178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13312 << 16));
    // 0x21117c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x21117cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x211180: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x211180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211184: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x211184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211188: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x211188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21118c: 0x0  nop
    ctx->pc = 0x21118cu;
    // NOP
label_211190:
    // 0x211190: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x211190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x211194: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x211194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x211198: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x211198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21119c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x21119cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2111a0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2111a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2111a4: 0x0  nop
    ctx->pc = 0x2111a4u;
    // NOP
    // 0x2111a8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2111A8u;
    {
        const bool branch_taken_0x2111a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2111ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2111A8u;
            // 0x2111ac: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2111a8) {
            ctx->pc = 0x2111B4u;
            goto label_2111b4;
        }
    }
    ctx->pc = 0x2111B0u;
    // 0x2111b0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2111b0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2111b4:
    // 0x2111b4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2111b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2111b8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2111b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2111bc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2111bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2111c0: 0x0  nop
    ctx->pc = 0x2111c0u;
    // NOP
    // 0x2111c4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2111C4u;
    {
        const bool branch_taken_0x2111c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2111C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2111C4u;
            // 0x2111c8: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2111c4) {
            ctx->pc = 0x2111D0u;
            goto label_2111d0;
        }
    }
    ctx->pc = 0x2111CCu;
    // 0x2111cc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2111ccu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2111d0:
    // 0x2111d0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2111d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2111d4: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2111d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2111d8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2111d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2111dc: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x2111dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2111e0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2111E0u;
    {
        const bool branch_taken_0x2111e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2111E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2111E0u;
            // 0x2111e4: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2111e0) {
            ctx->pc = 0x211190u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_211190;
        }
    }
    ctx->pc = 0x2111E8u;
    // 0x2111e8: 0x7a0f00c0  lq          $t7, 0xC0($s0)
    ctx->pc = 0x2111e8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2111ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2111ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2111f0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2111f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2111f4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2111f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2111f8:
    // 0x2111f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2111f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2111fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2111fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_211200:
    // 0x211200: 0x0  nop
    ctx->pc = 0x211200u;
    // NOP
    // 0x211204: 0x0  nop
    ctx->pc = 0x211204u;
    // NOP
    // 0x211208: 0x0  nop
    ctx->pc = 0x211208u;
    // NOP
    // 0x21120c: 0x0  nop
    ctx->pc = 0x21120cu;
    // NOP
    // 0x211210: 0x1444fffb  bne         $v0, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x211210u;
    {
        const bool branch_taken_0x211210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x211214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211210u;
            // 0x211214: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211210) {
            ctx->pc = 0x211200u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_211200;
        }
    }
    ctx->pc = 0x211218u;
    // 0x211218: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x211218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21121c: 0x1444fff6  bne         $v0, $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x21121Cu;
    {
        const bool branch_taken_0x21121c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x211220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21121Cu;
            // 0x211220: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21121c) {
            ctx->pc = 0x2111F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2111f8;
        }
    }
    ctx->pc = 0x211224u;
    // 0x211224: 0x7a0e00d0  lq          $t6, 0xD0($s0)
    ctx->pc = 0x211224u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x211228: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x211228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21122c: 0x7a0d00e0  lq          $t5, 0xE0($s0)
    ctx->pc = 0x21122cu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x211230: 0x7a0200f0  lq          $v0, 0xF0($s0)
    ctx->pc = 0x211230u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x211234: 0x7a030100  lq          $v1, 0x100($s0)
    ctx->pc = 0x211234u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x211238: 0x7a070120  lq          $a3, 0x120($s0)
    ctx->pc = 0x211238u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x21123c: 0x7a080130  lq          $t0, 0x130($s0)
    ctx->pc = 0x21123cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x211240: 0x7a090140  lq          $t1, 0x140($s0)
    ctx->pc = 0x211240u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x211244: 0x7a0a0150  lq          $t2, 0x150($s0)
    ctx->pc = 0x211244u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x211248: 0x7a0b0160  lq          $t3, 0x160($s0)
    ctx->pc = 0x211248u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x21124c: 0x7a0c0170  lq          $t4, 0x170($s0)
    ctx->pc = 0x21124cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 16), 368)));
    // 0x211250: 0x7a060110  lq          $a2, 0x110($s0)
    ctx->pc = 0x211250u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x211254: 0x8fa50300  lw          $a1, 0x300($sp)
    ctx->pc = 0x211254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x211258: 0x7fa20270  sq          $v0, 0x270($sp)
    ctx->pc = 0x211258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 2));
    // 0x21125c: 0x7fa30280  sq          $v1, 0x280($sp)
    ctx->pc = 0x21125cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 3));
    // 0x211260: 0x7fa60290  sq          $a2, 0x290($sp)
    ctx->pc = 0x211260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 6));
    // 0x211264: 0x7faf0240  sq          $t7, 0x240($sp)
    ctx->pc = 0x211264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 15));
    // 0x211268: 0x7fae0250  sq          $t6, 0x250($sp)
    ctx->pc = 0x211268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 14));
    // 0x21126c: 0x7fad0260  sq          $t5, 0x260($sp)
    ctx->pc = 0x21126cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 13));
    // 0x211270: 0x7fa702a0  sq          $a3, 0x2A0($sp)
    ctx->pc = 0x211270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 7));
    // 0x211274: 0x7fa802b0  sq          $t0, 0x2B0($sp)
    ctx->pc = 0x211274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 8));
    // 0x211278: 0x7fa902c0  sq          $t1, 0x2C0($sp)
    ctx->pc = 0x211278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 9));
    // 0x21127c: 0x7faa02d0  sq          $t2, 0x2D0($sp)
    ctx->pc = 0x21127cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 10));
    // 0x211280: 0x7fab02e0  sq          $t3, 0x2E0($sp)
    ctx->pc = 0x211280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 11));
    // 0x211284: 0xc0a3610  jal         func_28D840
    ctx->pc = 0x211284u;
    SET_GPR_U32(ctx, 31, 0x21128Cu);
    ctx->pc = 0x211288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211284u;
            // 0x211288: 0x7fac02f0  sq          $t4, 0x2F0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D840u;
    if (runtime->hasFunction(0x28D840u)) {
        auto targetFn = runtime->lookupFunction(0x28D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21128Cu; }
        if (ctx->pc != 0x21128Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D840_0x28d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21128Cu; }
        if (ctx->pc != 0x21128Cu) { return; }
    }
    ctx->pc = 0x21128Cu;
label_21128c:
    // 0x21128c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21128cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211290: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x211290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211294: 0xc0a3514  jal         func_28D450
    ctx->pc = 0x211294u;
    SET_GPR_U32(ctx, 31, 0x21129Cu);
    ctx->pc = 0x211298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211294u;
            // 0x211298: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D450u;
    if (runtime->hasFunction(0x28D450u)) {
        auto targetFn = runtime->lookupFunction(0x28D450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21129Cu; }
        if (ctx->pc != 0x21129Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D450_0x28d450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21129Cu; }
        if (ctx->pc != 0x21129Cu) { return; }
    }
    ctx->pc = 0x21129Cu;
label_21129c:
    // 0x21129c: 0x7a020300  lq          $v0, 0x300($s0)
    ctx->pc = 0x21129cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 768)));
    // 0x2112a0: 0x7bb20380  lq          $s2, 0x380($sp)
    ctx->pc = 0x2112a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x2112a4: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x2112a4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x2112a8: 0x7bb30370  lq          $s3, 0x370($sp)
    ctx->pc = 0x2112a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x2112ac: 0x7a030310  lq          $v1, 0x310($s0)
    ctx->pc = 0x2112acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x2112b0: 0x7bb40360  lq          $s4, 0x360($sp)
    ctx->pc = 0x2112b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x2112b4: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x2112b4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
    // 0x2112b8: 0x7bb50350  lq          $s5, 0x350($sp)
    ctx->pc = 0x2112b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x2112bc: 0x7a020320  lq          $v0, 0x320($s0)
    ctx->pc = 0x2112bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x2112c0: 0x7bb60340  lq          $s6, 0x340($sp)
    ctx->pc = 0x2112c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x2112c4: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x2112c4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
    // 0x2112c8: 0xdfbf0310  ld          $ra, 0x310($sp)
    ctx->pc = 0x2112c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x2112cc: 0x7a030330  lq          $v1, 0x330($s0)
    ctx->pc = 0x2112ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x2112d0: 0x7e230030  sq          $v1, 0x30($s1)
    ctx->pc = 0x2112d0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 3));
    // 0x2112d4: 0x7a020340  lq          $v0, 0x340($s0)
    ctx->pc = 0x2112d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 832)));
    // 0x2112d8: 0x7e220040  sq          $v0, 0x40($s1)
    ctx->pc = 0x2112d8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
    // 0x2112dc: 0x7a030350  lq          $v1, 0x350($s0)
    ctx->pc = 0x2112dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 848)));
    // 0x2112e0: 0x7e230050  sq          $v1, 0x50($s1)
    ctx->pc = 0x2112e0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 3));
    // 0x2112e4: 0x7a020360  lq          $v0, 0x360($s0)
    ctx->pc = 0x2112e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x2112e8: 0x7e220060  sq          $v0, 0x60($s1)
    ctx->pc = 0x2112e8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), GPR_VEC(ctx, 2));
    // 0x2112ec: 0x7a030370  lq          $v1, 0x370($s0)
    ctx->pc = 0x2112ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 880)));
    // 0x2112f0: 0x7e230070  sq          $v1, 0x70($s1)
    ctx->pc = 0x2112f0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), GPR_VEC(ctx, 3));
    // 0x2112f4: 0x7a020380  lq          $v0, 0x380($s0)
    ctx->pc = 0x2112f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 896)));
    // 0x2112f8: 0x7e220080  sq          $v0, 0x80($s1)
    ctx->pc = 0x2112f8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 128), GPR_VEC(ctx, 2));
    // 0x2112fc: 0x7a030390  lq          $v1, 0x390($s0)
    ctx->pc = 0x2112fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 912)));
    // 0x211300: 0x7e230090  sq          $v1, 0x90($s1)
    ctx->pc = 0x211300u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), GPR_VEC(ctx, 3));
    // 0x211304: 0x7a0203a0  lq          $v0, 0x3A0($s0)
    ctx->pc = 0x211304u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 928)));
    // 0x211308: 0x7e2200a0  sq          $v0, 0xA0($s1)
    ctx->pc = 0x211308u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 160), GPR_VEC(ctx, 2));
    // 0x21130c: 0x7a0303b0  lq          $v1, 0x3B0($s0)
    ctx->pc = 0x21130cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 944)));
    // 0x211310: 0x7bb003a0  lq          $s0, 0x3A0($sp)
    ctx->pc = 0x211310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x211314: 0x7e2300b0  sq          $v1, 0xB0($s1)
    ctx->pc = 0x211314u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 176), GPR_VEC(ctx, 3));
    // 0x211318: 0xaefe0000  sw          $fp, 0x0($s7)
    ctx->pc = 0x211318u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 30));
    // 0x21131c: 0x7bb10390  lq          $s1, 0x390($sp)
    ctx->pc = 0x21131cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x211320: 0x7bb70330  lq          $s7, 0x330($sp)
    ctx->pc = 0x211320u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x211324: 0x7bbe0320  lq          $fp, 0x320($sp)
    ctx->pc = 0x211324u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x211328: 0x3e00008  jr          $ra
    ctx->pc = 0x211328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21132Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211328u;
            // 0x21132c: 0x27bd03b0  addiu       $sp, $sp, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x211330u;
}
