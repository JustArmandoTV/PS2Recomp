#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0040C560
// Address: 0x40c560 - 0x40c600
void sub_0040C560_0x40c560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040C560_0x40c560");
#endif

    switch (ctx->pc) {
        case 0x40c594u: goto label_40c594;
        case 0x40c5ccu: goto label_40c5cc;
        case 0x40c5e4u: goto label_40c5e4;
        default: break;
    }

    ctx->pc = 0x40c560u;

    // 0x40c560: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x40c560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x40c564: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x40c564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x40c568: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x40c568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x40c56c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x40c56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x40c570: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40c570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x40c574: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x40c574u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c578: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40c578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x40c57c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x40c57cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c580: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x40c580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x40c584: 0x18600017  blez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x40C584u;
    {
        const bool branch_taken_0x40c584 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x40C588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C584u;
            // 0x40c588: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c584) {
            ctx->pc = 0x40C5E4u;
            goto label_40c5e4;
        }
    }
    ctx->pc = 0x40C58Cu;
    // 0x40c58c: 0xc04e738  jal         func_139CE0
    ctx->pc = 0x40C58Cu;
    SET_GPR_U32(ctx, 31, 0x40C594u);
    ctx->pc = 0x40C590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C58Cu;
            // 0x40c590: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C594u; }
        if (ctx->pc != 0x40C594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C594u; }
        if (ctx->pc != 0x40C594u) { return; }
    }
    ctx->pc = 0x40C594u;
label_40c594:
    // 0x40c594: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40c594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x40c598: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x40c598u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
    // 0x40c59c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40c59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x40c5a0: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x40c5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
    // 0x40c5a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x40c5a8: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x40c5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
    // 0x40c5ac: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x40c5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x40c5b0: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x40c5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x40c5b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x40C5B4u;
    {
        const bool branch_taken_0x40c5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40C5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C5B4u;
            // 0x40c5b8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c5b4) {
            ctx->pc = 0x40C5D4u;
            goto label_40c5d4;
        }
    }
    ctx->pc = 0x40C5BCu;
    // 0x40c5bc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x40c5bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c5c0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x40c5c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c5c4: 0xc055ea8  jal         func_157AA0
    ctx->pc = 0x40C5C4u;
    SET_GPR_U32(ctx, 31, 0x40C5CCu);
    ctx->pc = 0x40C5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C5C4u;
            // 0x40c5c8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C5CCu; }
        if (ctx->pc != 0x40C5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C5CCu; }
        if (ctx->pc != 0x40C5CCu) { return; }
    }
    ctx->pc = 0x40C5CCu;
label_40c5cc:
    // 0x40c5cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x40C5CCu;
    {
        const bool branch_taken_0x40c5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40C5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C5CCu;
            // 0x40c5d0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c5cc) {
            ctx->pc = 0x40C5E8u;
            goto label_40c5e8;
        }
    }
    ctx->pc = 0x40C5D4u;
label_40c5d4:
    // 0x40c5d4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x40c5d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c5d8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x40c5d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c5dc: 0xc055d28  jal         func_1574A0
    ctx->pc = 0x40C5DCu;
    SET_GPR_U32(ctx, 31, 0x40C5E4u);
    ctx->pc = 0x40C5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40C5DCu;
            // 0x40c5e0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C5E4u; }
        if (ctx->pc != 0x40C5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40C5E4u; }
        if (ctx->pc != 0x40C5E4u) { return; }
    }
    ctx->pc = 0x40C5E4u;
label_40c5e4:
    // 0x40c5e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x40c5e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_40c5e8:
    // 0x40c5e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x40c5e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40c5ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40c5ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40c5f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40c5f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40c5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x40C5F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40C5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C5F4u;
            // 0x40c5f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40C5FCu;
    // 0x40c5fc: 0x0  nop
    ctx->pc = 0x40c5fcu;
    // NOP
}
