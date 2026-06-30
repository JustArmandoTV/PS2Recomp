#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EA390
// Address: 0x1ea390 - 0x1ea410
void sub_001EA390_0x1ea390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA390_0x1ea390");
#endif

    switch (ctx->pc) {
        case 0x1ea390u: goto label_1ea390;
        case 0x1ea394u: goto label_1ea394;
        case 0x1ea398u: goto label_1ea398;
        case 0x1ea39cu: goto label_1ea39c;
        case 0x1ea3a0u: goto label_1ea3a0;
        case 0x1ea3a4u: goto label_1ea3a4;
        case 0x1ea3a8u: goto label_1ea3a8;
        case 0x1ea3acu: goto label_1ea3ac;
        case 0x1ea3b0u: goto label_1ea3b0;
        case 0x1ea3b4u: goto label_1ea3b4;
        case 0x1ea3b8u: goto label_1ea3b8;
        case 0x1ea3bcu: goto label_1ea3bc;
        case 0x1ea3c0u: goto label_1ea3c0;
        case 0x1ea3c4u: goto label_1ea3c4;
        case 0x1ea3c8u: goto label_1ea3c8;
        case 0x1ea3ccu: goto label_1ea3cc;
        case 0x1ea3d0u: goto label_1ea3d0;
        case 0x1ea3d4u: goto label_1ea3d4;
        case 0x1ea3d8u: goto label_1ea3d8;
        case 0x1ea3dcu: goto label_1ea3dc;
        case 0x1ea3e0u: goto label_1ea3e0;
        case 0x1ea3e4u: goto label_1ea3e4;
        case 0x1ea3e8u: goto label_1ea3e8;
        case 0x1ea3ecu: goto label_1ea3ec;
        case 0x1ea3f0u: goto label_1ea3f0;
        case 0x1ea3f4u: goto label_1ea3f4;
        case 0x1ea3f8u: goto label_1ea3f8;
        case 0x1ea3fcu: goto label_1ea3fc;
        case 0x1ea400u: goto label_1ea400;
        case 0x1ea404u: goto label_1ea404;
        case 0x1ea408u: goto label_1ea408;
        case 0x1ea40cu: goto label_1ea40c;
        default: break;
    }

    ctx->pc = 0x1ea390u;

label_1ea390:
    // 0x1ea390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ea390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ea394:
    // 0x1ea394: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ea394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ea398:
    // 0x1ea398: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1ea398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ea39c:
    // 0x1ea39c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ea39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ea3a0:
    // 0x1ea3a0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1ea3a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ea3a4:
    // 0x1ea3a4: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x1ea3a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1ea3a8:
    // 0x1ea3a8: 0xc07a07c  jal         func_1E81F0
label_1ea3ac:
    if (ctx->pc == 0x1EA3ACu) {
        ctx->pc = 0x1EA3ACu;
            // 0x1ea3ac: 0x120402d  daddu       $t0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EA3B0u;
        goto label_1ea3b0;
    }
    ctx->pc = 0x1EA3A8u;
    SET_GPR_U32(ctx, 31, 0x1EA3B0u);
    ctx->pc = 0x1EA3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA3A8u;
            // 0x1ea3ac: 0x120402d  daddu       $t0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E81F0u;
    if (runtime->hasFunction(0x1E81F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E81F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA3B0u; }
        if (ctx->pc != 0x1EA3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E81F0_0x1e81f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA3B0u; }
        if (ctx->pc != 0x1EA3B0u) { return; }
    }
    ctx->pc = 0x1EA3B0u;
label_1ea3b0:
    // 0x1ea3b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ea3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ea3b4:
    // 0x1ea3b4: 0x3e00008  jr          $ra
label_1ea3b8:
    if (ctx->pc == 0x1EA3B8u) {
        ctx->pc = 0x1EA3B8u;
            // 0x1ea3b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1EA3BCu;
        goto label_1ea3bc;
    }
    ctx->pc = 0x1EA3B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA3B4u;
            // 0x1ea3b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EA3BCu;
label_1ea3bc:
    // 0x1ea3bc: 0x0  nop
    ctx->pc = 0x1ea3bcu;
    // NOP
label_1ea3c0:
    // 0x1ea3c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ea3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ea3c4:
    // 0x1ea3c4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ea3c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ea3c8:
    // 0x1ea3c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ea3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ea3cc:
    // 0x1ea3cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ea3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ea3d0:
    // 0x1ea3d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ea3d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ea3d4:
    // 0x1ea3d4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1ea3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1ea3d8:
    // 0x1ea3d8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1ea3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ea3dc:
    // 0x1ea3dc: 0xc091680  jal         func_245A00
label_1ea3e0:
    if (ctx->pc == 0x1EA3E0u) {
        ctx->pc = 0x1EA3E0u;
            // 0x1ea3e0: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x1EA3E4u;
        goto label_1ea3e4;
    }
    ctx->pc = 0x1EA3DCu;
    SET_GPR_U32(ctx, 31, 0x1EA3E4u);
    ctx->pc = 0x1EA3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA3DCu;
            // 0x1ea3e0: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245A00u;
    if (runtime->hasFunction(0x245A00u)) {
        auto targetFn = runtime->lookupFunction(0x245A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA3E4u; }
        if (ctx->pc != 0x1EA3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245A00_0x245a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA3E4u; }
        if (ctx->pc != 0x1EA3E4u) { return; }
    }
    ctx->pc = 0x1EA3E4u;
label_1ea3e4:
    // 0x1ea3e4: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_1ea3e8:
    if (ctx->pc == 0x1EA3E8u) {
        ctx->pc = 0x1EA3E8u;
            // 0x1ea3e8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1EA3ECu;
        goto label_1ea3ec;
    }
    ctx->pc = 0x1EA3E4u;
    {
        const bool branch_taken_0x1ea3e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea3e4) {
            ctx->pc = 0x1EA3E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA3E4u;
            // 0x1ea3e8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EA404u;
            goto label_1ea404;
        }
    }
    ctx->pc = 0x1EA3ECu;
label_1ea3ec:
    // 0x1ea3ec: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1ea3ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ea3f0:
    // 0x1ea3f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ea3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ea3f4:
    // 0x1ea3f4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1ea3f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1ea3f8:
    // 0x1ea3f8: 0x320f809  jalr        $t9
label_1ea3fc:
    if (ctx->pc == 0x1EA3FCu) {
        ctx->pc = 0x1EA3FCu;
            // 0x1ea3fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1EA400u;
        goto label_1ea400;
    }
    ctx->pc = 0x1EA3F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EA400u);
        ctx->pc = 0x1EA3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA3F8u;
            // 0x1ea3fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EA400u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EA400u; }
            if (ctx->pc != 0x1EA400u) { return; }
        }
        }
    }
    ctx->pc = 0x1EA400u;
label_1ea400:
    // 0x1ea400: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ea400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ea404:
    // 0x1ea404: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ea404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ea408:
    // 0x1ea408: 0x3e00008  jr          $ra
label_1ea40c:
    if (ctx->pc == 0x1EA40Cu) {
        ctx->pc = 0x1EA40Cu;
            // 0x1ea40c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1EA410u;
        goto label_fallthrough_0x1ea408;
    }
    ctx->pc = 0x1EA408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA408u;
            // 0x1ea40c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1ea408:
    ctx->pc = 0x1EA410u;
}
