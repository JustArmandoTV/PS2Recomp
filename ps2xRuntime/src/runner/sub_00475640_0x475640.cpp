#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00475640
// Address: 0x475640 - 0x475750
void sub_00475640_0x475640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00475640_0x475640");
#endif

    switch (ctx->pc) {
        case 0x475670u: goto label_475670;
        case 0x475674u: goto label_475674;
        case 0x4756b8u: goto label_4756b8;
        case 0x4756e4u: goto label_4756e4;
        case 0x4756ecu: goto label_4756ec;
        case 0x4756f8u: goto label_4756f8;
        case 0x475714u: goto label_475714;
        case 0x475720u: goto label_475720;
        default: break;
    }

    ctx->pc = 0x475640u;

    // 0x475640: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x475640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x475644: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x475644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x475648: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x475648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x47564c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47564cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x475650: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x475650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x475654: 0x8c920004  lw          $s2, 0x4($a0)
    ctx->pc = 0x475654u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x475658: 0x12400037  beqz        $s2, . + 4 + (0x37 << 2)
    ctx->pc = 0x475658u;
    {
        const bool branch_taken_0x475658 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x47565Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x475658u;
            // 0x47565c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475658) {
            ctx->pc = 0x475738u;
            goto label_475738;
        }
    }
    ctx->pc = 0x475660u;
    // 0x475660: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x475660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x475664: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x475664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x475668: 0xc04a508  jal         func_129420
    ctx->pc = 0x475668u;
    SET_GPR_U32(ctx, 31, 0x475670u);
    ctx->pc = 0x47566Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475668u;
            // 0x47566c: 0x123080  sll         $a2, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475670u; }
        if (ctx->pc != 0x475670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475670u; }
        if (ctx->pc != 0x475670u) { return; }
    }
    ctx->pc = 0x475670u;
label_475670:
    // 0x475670: 0x8e11001c  lw          $s1, 0x1C($s0)
    ctx->pc = 0x475670u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_475674:
    // 0x475674: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x475674u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x475678: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x475678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x47567c: 0x8e0401c0  lw          $a0, 0x1C0($s0)
    ctx->pc = 0x47567cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x475680: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x475680u;
    {
        const bool branch_taken_0x475680 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x475680) {
            ctx->pc = 0x4756D8u;
            goto label_4756d8;
        }
    }
    ctx->pc = 0x475688u;
    // 0x475688: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x475688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47568c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x47568Cu;
    {
        const bool branch_taken_0x47568c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x47568c) {
            ctx->pc = 0x4756B0u;
            goto label_4756b0;
        }
    }
    ctx->pc = 0x475694u;
    // 0x475694: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x475694u;
    {
        const bool branch_taken_0x475694 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x475694) {
            ctx->pc = 0x4756A8u;
            goto label_4756a8;
        }
    }
    ctx->pc = 0x47569Cu;
    // 0x47569c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x47569Cu;
    {
        const bool branch_taken_0x47569c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47569c) {
            ctx->pc = 0x475728u;
            goto label_475728;
        }
    }
    ctx->pc = 0x4756A4u;
    // 0x4756a4: 0x0  nop
    ctx->pc = 0x4756a4u;
    // NOP
label_4756a8:
    // 0x4756a8: 0xae0301c0  sw          $v1, 0x1C0($s0)
    ctx->pc = 0x4756a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 3));
    // 0x4756ac: 0x0  nop
    ctx->pc = 0x4756acu;
    // NOP
label_4756b0:
    // 0x4756b0: 0xc11d5d8  jal         func_475760
    ctx->pc = 0x4756B0u;
    SET_GPR_U32(ctx, 31, 0x4756B8u);
    ctx->pc = 0x4756B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4756B0u;
            // 0x4756b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x475760u;
    if (runtime->hasFunction(0x475760u)) {
        auto targetFn = runtime->lookupFunction(0x475760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4756B8u; }
        if (ctx->pc != 0x4756B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00475760_0x475760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4756B8u; }
        if (ctx->pc != 0x4756B8u) { return; }
    }
    ctx->pc = 0x4756B8u;
label_4756b8:
    // 0x4756b8: 0x8e0401c4  lw          $a0, 0x1C4($s0)
    ctx->pc = 0x4756b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
    // 0x4756bc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x4756bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4756c0: 0x14830019  bne         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x4756C0u;
    {
        const bool branch_taken_0x4756c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4756c0) {
            ctx->pc = 0x475728u;
            goto label_475728;
        }
    }
    ctx->pc = 0x4756C8u;
    // 0x4756c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4756c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4756cc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x4756CCu;
    {
        const bool branch_taken_0x4756cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4756D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4756CCu;
            // 0x4756d0: 0xae0301c0  sw          $v1, 0x1C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4756cc) {
            ctx->pc = 0x475728u;
            goto label_475728;
        }
    }
    ctx->pc = 0x4756D4u;
    // 0x4756d4: 0x0  nop
    ctx->pc = 0x4756d4u;
    // NOP
label_4756d8:
    // 0x4756d8: 0x8e0401c8  lw          $a0, 0x1C8($s0)
    ctx->pc = 0x4756d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
    // 0x4756dc: 0xc11d5d4  jal         func_475750
    ctx->pc = 0x4756DCu;
    SET_GPR_U32(ctx, 31, 0x4756E4u);
    ctx->pc = 0x4756E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4756DCu;
            // 0x4756e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x475750u;
    if (runtime->hasFunction(0x475750u)) {
        auto targetFn = runtime->lookupFunction(0x475750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4756E4u; }
        if (ctx->pc != 0x4756E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00475750_0x475750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4756E4u; }
        if (ctx->pc != 0x4756E4u) { return; }
    }
    ctx->pc = 0x4756E4u;
label_4756e4:
    // 0x4756e4: 0xc0d2344  jal         func_348D10
    ctx->pc = 0x4756E4u;
    SET_GPR_U32(ctx, 31, 0x4756ECu);
    ctx->pc = 0x4756E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4756E4u;
            // 0x4756e8: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x348D10u;
    if (runtime->hasFunction(0x348D10u)) {
        auto targetFn = runtime->lookupFunction(0x348D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4756ECu; }
        if (ctx->pc != 0x4756ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00348D10_0x348d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4756ECu; }
        if (ctx->pc != 0x4756ECu) { return; }
    }
    ctx->pc = 0x4756ECu;
label_4756ec:
    // 0x4756ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4756ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4756f0: 0xc04cc04  jal         func_133010
    ctx->pc = 0x4756F0u;
    SET_GPR_U32(ctx, 31, 0x4756F8u);
    ctx->pc = 0x4756F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4756F0u;
            // 0x4756f4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4756F8u; }
        if (ctx->pc != 0x4756F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4756F8u; }
        if (ctx->pc != 0x4756F8u) { return; }
    }
    ctx->pc = 0x4756F8u;
label_4756f8:
    // 0x4756f8: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x4756f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4756fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4756fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x475700: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x475700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x475704: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x475704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x475708: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x475708u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x47570c: 0xc0d2340  jal         func_348D00
    ctx->pc = 0x47570Cu;
    SET_GPR_U32(ctx, 31, 0x475714u);
    ctx->pc = 0x475710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47570Cu;
            // 0x475710: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x348D00u;
    if (runtime->hasFunction(0x348D00u)) {
        auto targetFn = runtime->lookupFunction(0x348D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475714u; }
        if (ctx->pc != 0x475714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00348D00_0x348d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475714u; }
        if (ctx->pc != 0x475714u) { return; }
    }
    ctx->pc = 0x475714u;
label_475714:
    // 0x475714: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x475714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x475718: 0xc04c720  jal         func_131C80
    ctx->pc = 0x475718u;
    SET_GPR_U32(ctx, 31, 0x475720u);
    ctx->pc = 0x47571Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475718u;
            // 0x47571c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475720u; }
        if (ctx->pc != 0x475720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475720u; }
        if (ctx->pc != 0x475720u) { return; }
    }
    ctx->pc = 0x475720u;
label_475720:
    // 0x475720: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x475720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x475724: 0xae0301c0  sw          $v1, 0x1C0($s0)
    ctx->pc = 0x475724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 3));
label_475728:
    // 0x475728: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x475728u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x47572c: 0x1640ffd1  bnez        $s2, . + 4 + (-0x2F << 2)
    ctx->pc = 0x47572Cu;
    {
        const bool branch_taken_0x47572c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x475730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47572Cu;
            // 0x475730: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47572c) {
            ctx->pc = 0x475674u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_475674;
        }
    }
    ctx->pc = 0x475734u;
    // 0x475734: 0x0  nop
    ctx->pc = 0x475734u;
    // NOP
label_475738:
    // 0x475738: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x475738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47573c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47573cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x475740: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x475740u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x475744: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x475744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x475748: 0x3e00008  jr          $ra
    ctx->pc = 0x475748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47574Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x475748u;
            // 0x47574c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x475750u;
}
