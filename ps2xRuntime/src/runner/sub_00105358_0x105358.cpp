#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00105358
// Address: 0x105358 - 0x105598
void sub_00105358_0x105358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105358_0x105358");
#endif

    switch (ctx->pc) {
        case 0x1053b0u: goto label_1053b0;
        case 0x1053b4u: goto label_1053b4;
        case 0x1053bcu: goto label_1053bc;
        case 0x1053d8u: goto label_1053d8;
        case 0x1053e0u: goto label_1053e0;
        case 0x105428u: goto label_105428;
        case 0x10544cu: goto label_10544c;
        case 0x1054c0u: goto label_1054c0;
        case 0x1054f0u: goto label_1054f0;
        case 0x105520u: goto label_105520;
        case 0x105554u: goto label_105554;
        case 0x10556cu: goto label_10556c;
        default: break;
    }

    ctx->pc = 0x105358u;

    // 0x105358: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x105358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x10535c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10535cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x105360: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x105360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x105364: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x105364u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105368: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x105368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10536c: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x10536cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x105370: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x105370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x105374: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x105374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105378: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x105378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x10537c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x10537cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x105380: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x105380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x105384: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x105384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x105388: 0xae200820  sw          $zero, 0x820($s1)
    ctx->pc = 0x105388u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2080), GPR_U32(ctx, 0));
    // 0x10538c: 0x8e220140  lw          $v0, 0x140($s1)
    ctx->pc = 0x10538cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x105390: 0x8e24013c  lw          $a0, 0x13C($s1)
    ctx->pc = 0x105390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x105394: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x105394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x105398: 0x828018  mult        $s0, $a0, $v0
    ctx->pc = 0x105398u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x10539c: 0xae200824  sw          $zero, 0x824($s1)
    ctx->pc = 0x10539cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2084), GPR_U32(ctx, 0));
    // 0x1053a0: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x1053a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x1053a4: 0x101043  sra         $v0, $s0, 1
    ctx->pc = 0x1053a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 1));
    // 0x1053a8: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x1053a8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x1053ac: 0x0  nop
    ctx->pc = 0x1053acu;
    // NOP
label_1053b0:
    // 0x1053b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1053b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1053b4:
    // 0x1053b4: 0xc041566  jal         func_105598
    ctx->pc = 0x1053B4u;
    SET_GPR_U32(ctx, 31, 0x1053BCu);
    ctx->pc = 0x1053B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1053B4u;
            // 0x1053b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105598u;
    if (runtime->hasFunction(0x105598u)) {
        auto targetFn = runtime->lookupFunction(0x105598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1053BCu; }
        if (ctx->pc != 0x1053BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00105598_0x105598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1053BCu; }
        if (ctx->pc != 0x1053BCu) { return; }
    }
    ctx->pc = 0x1053BCu;
label_1053bc:
    // 0x1053bc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1053bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1053c0: 0x12b3fffc  beq         $s5, $s3, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1053C0u;
    {
        const bool branch_taken_0x1053c0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 19));
        ctx->pc = 0x1053C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1053C0u;
            // 0x1053c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1053c0) {
            ctx->pc = 0x1053B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1053b4;
        }
    }
    ctx->pc = 0x1053C8u;
    // 0x1053c8: 0x12b2fff9  beq         $s5, $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1053C8u;
    {
        const bool branch_taken_0x1053c8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 18));
        if (branch_taken_0x1053c8) {
            ctx->pc = 0x1053B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1053b0;
        }
    }
    ctx->pc = 0x1053D0u;
    // 0x1053d0: 0xc041a96  jal         func_106A58
    ctx->pc = 0x1053D0u;
    SET_GPR_U32(ctx, 31, 0x1053D8u);
    ctx->pc = 0x1053D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1053D0u;
            // 0x1053d4: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106A58u;
    if (runtime->hasFunction(0x106A58u)) {
        auto targetFn = runtime->lookupFunction(0x106A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1053D8u; }
        if (ctx->pc != 0x1053D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106A58_0x106a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1053D8u; }
        if (ctx->pc != 0x1053D8u) { return; }
    }
    ctx->pc = 0x1053D8u;
label_1053d8:
    // 0x1053d8: 0xc041a96  jal         func_106A58
    ctx->pc = 0x1053D8u;
    SET_GPR_U32(ctx, 31, 0x1053E0u);
    ctx->pc = 0x1053DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1053D8u;
            // 0x1053dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106A58u;
    if (runtime->hasFunction(0x106A58u)) {
        auto targetFn = runtime->lookupFunction(0x106A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1053E0u; }
        if (ctx->pc != 0x1053E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106A58_0x106a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1053E0u; }
        if (ctx->pc != 0x1053E0u) { return; }
    }
    ctx->pc = 0x1053E0u;
label_1053e0:
    // 0x1053e0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1053e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1053e4: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x1053e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x1053e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1053e8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x1053ec: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1053ECu;
    {
        const bool branch_taken_0x1053ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1053F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1053ECu;
            // 0x1053f0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1053ec) {
            ctx->pc = 0x105474u;
            goto label_105474;
        }
    }
    ctx->pc = 0x1053F4u;
    // 0x1053f4: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x1053f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x1053f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1053f8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x1053fc: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x1053fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x105400: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x105400u;
    {
        const bool branch_taken_0x105400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x105404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105400u;
            // 0x105404: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105400) {
            ctx->pc = 0x105478u;
            goto label_105478;
        }
    }
    ctx->pc = 0x105408u;
    // 0x105408: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x105408u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x10540c: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x10540cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x105410: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x105410u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x105414: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x105414u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x105418: 0x3694b420  ori         $s4, $s4, 0xB420
    ctx->pc = 0x105418u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)46112);
    // 0x10541c: 0x3673b400  ori         $s3, $s3, 0xB400
    ctx->pc = 0x10541cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)46080);
    // 0x105420: 0x3652b020  ori         $s2, $s2, 0xB020
    ctx->pc = 0x105420u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)45088);
    // 0x105424: 0x36102010  ori         $s0, $s0, 0x2010
    ctx->pc = 0x105424u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8208);
label_105428:
    // 0x105428: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x105428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x10542c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x10542Cu;
    {
        const bool branch_taken_0x10542c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10542c) {
            ctx->pc = 0x105430u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10542Cu;
            // 0x105430: 0x8e220878  lw          $v0, 0x878($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x105450u;
            goto label_105450;
        }
    }
    ctx->pc = 0x105434u;
    // 0x105434: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x105434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x105438: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x105438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x10543c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10543Cu;
    {
        const bool branch_taken_0x10543c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10543c) {
            ctx->pc = 0x105440u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10543Cu;
            // 0x105440: 0x8e220878  lw          $v0, 0x878($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x105450u;
            goto label_105450;
        }
    }
    ctx->pc = 0x105444u;
    // 0x105444: 0xc0427de  jal         func_109F78
    ctx->pc = 0x105444u;
    SET_GPR_U32(ctx, 31, 0x10544Cu);
    ctx->pc = 0x105448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105444u;
            // 0x105448: 0x8e240868  lw          $a0, 0x868($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109F78u;
    if (runtime->hasFunction(0x109F78u)) {
        auto targetFn = runtime->lookupFunction(0x109F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10544Cu; }
        if (ctx->pc != 0x10544Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109F78_0x109f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10544Cu; }
        if (ctx->pc != 0x10544Cu) { return; }
    }
    ctx->pc = 0x10544Cu;
label_10544c:
    // 0x10544c: 0x8e220878  lw          $v0, 0x878($s1)
    ctx->pc = 0x10544cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
label_105450:
    // 0x105450: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x105450u;
    {
        const bool branch_taken_0x105450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105450) {
            ctx->pc = 0x1054B8u;
            goto label_1054b8;
        }
    }
    ctx->pc = 0x105458u;
    // 0x105458: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x105458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10545c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10545Cu;
    {
        const bool branch_taken_0x10545c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10545Cu;
            // 0x105460: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10545c) {
            ctx->pc = 0x105478u;
            goto label_105478;
        }
    }
    ctx->pc = 0x105464u;
    // 0x105464: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x105464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x105468: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x105468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x10546c: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x10546Cu;
    {
        const bool branch_taken_0x10546c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10546c) {
            ctx->pc = 0x105428u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_105428;
        }
    }
    ctx->pc = 0x105474u;
label_105474:
    // 0x105474: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_105478:
    // 0x105478: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x105478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10547c: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x10547cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x105480: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x105480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x105484: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x105484u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x105488: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x105488u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10548c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x10548cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x105490: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x105490u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x105494: 0x481000c  bgez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x105494u;
    {
        const bool branch_taken_0x105494 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x105498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105494u;
            // 0x105498: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105494) {
            ctx->pc = 0x1054C8u;
            goto label_1054c8;
        }
    }
    ctx->pc = 0x10549Cu;
    // 0x10549c: 0x30a3001f  andi        $v1, $a1, 0x1F
    ctx->pc = 0x10549cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x1054a0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1054A0u;
    {
        const bool branch_taken_0x1054a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1054A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1054A0u;
            // 0x1054a4: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054a0) {
            ctx->pc = 0x1054B0u;
            goto label_1054b0;
        }
    }
    ctx->pc = 0x1054A8u;
    // 0x1054a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1054A8u;
    {
        const bool branch_taken_0x1054a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1054ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1054A8u;
            // 0x1054ac: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054a8) {
            ctx->pc = 0x1054CCu;
            goto label_1054cc;
        }
    }
    ctx->pc = 0x1054B0u;
label_1054b0:
    // 0x1054b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1054B0u;
    {
        const bool branch_taken_0x1054b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1054B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1054B0u;
            // 0x1054b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054b0) {
            ctx->pc = 0x1054CCu;
            goto label_1054cc;
        }
    }
    ctx->pc = 0x1054B8u;
label_1054b8:
    // 0x1054b8: 0xc042dbc  jal         func_10B6F0
    ctx->pc = 0x1054B8u;
    SET_GPR_U32(ctx, 31, 0x1054C0u);
    ctx->pc = 0x10B6F0u;
    if (runtime->hasFunction(0x10B6F0u)) {
        auto targetFn = runtime->lookupFunction(0x10B6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1054C0u; }
        if (ctx->pc != 0x1054C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B6F0_0x10b6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1054C0u; }
        if (ctx->pc != 0x1054C0u) { return; }
    }
    ctx->pc = 0x1054C0u;
label_1054c0:
    // 0x1054c0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1054C0u;
    {
        const bool branch_taken_0x1054c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1054C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1054C0u;
            // 0x1054c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054c0) {
            ctx->pc = 0x1054F4u;
            goto label_1054f4;
        }
    }
    ctx->pc = 0x1054C8u;
label_1054c8:
    // 0x1054c8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1054c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1054cc:
    // 0x1054cc: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x1054ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x1054d0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1054d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1054d4: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x1054d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x1054d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1054d8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x1054dc: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x1054dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x1054e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1054E0u;
    {
        const bool branch_taken_0x1054e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1054E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1054E0u;
            // 0x1054e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054e0) {
            ctx->pc = 0x1054F0u;
            goto label_1054f0;
        }
    }
    ctx->pc = 0x1054E8u;
    // 0x1054e8: 0xc042de4  jal         func_10B790
    ctx->pc = 0x1054E8u;
    SET_GPR_U32(ctx, 31, 0x1054F0u);
    ctx->pc = 0x1054ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1054E8u;
            // 0x1054ec: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B790u;
    if (runtime->hasFunction(0x10B790u)) {
        auto targetFn = runtime->lookupFunction(0x10B790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1054F0u; }
        if (ctx->pc != 0x1054F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B790_0x10b790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1054F0u; }
        if (ctx->pc != 0x1054F0u) { return; }
    }
    ctx->pc = 0x1054F0u;
label_1054f0:
    // 0x1054f0: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1054f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1054f4:
    // 0x1054f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1054F4u;
    {
        const bool branch_taken_0x1054f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1054F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1054F4u;
            // 0x1054f8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054f4) {
            ctx->pc = 0x105510u;
            goto label_105510;
        }
    }
    ctx->pc = 0x1054FCu;
    // 0x1054fc: 0x8e220878  lw          $v0, 0x878($s1)
    ctx->pc = 0x1054fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
    // 0x105500: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x105500u;
    {
        const bool branch_taken_0x105500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105500u;
            // 0x105504: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105500) {
            ctx->pc = 0x105570u;
            goto label_105570;
        }
    }
    ctx->pc = 0x105508u;
    // 0x105508: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x105508u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10550c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10550cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_105510:
    // 0x105510: 0x26b0ffff  addiu       $s0, $s5, -0x1
    ctx->pc = 0x105510u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x105514: 0x2eb20001  sltiu       $s2, $s5, 0x1
    ctx->pc = 0x105514u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x105518: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x105518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x10551c: 0x0  nop
    ctx->pc = 0x10551cu;
    // NOP
label_105520:
    // 0x105520: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x105520u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x105524: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x105524u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x105528: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x105528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10552c: 0x0  nop
    ctx->pc = 0x10552cu;
    // NOP
    // 0x105530: 0x0  nop
    ctx->pc = 0x105530u;
    // NOP
    // 0x105534: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x105534u;
    {
        const bool branch_taken_0x105534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105534) {
            ctx->pc = 0x105520u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_105520;
        }
    }
    ctx->pc = 0x10553Cu;
    // 0x10553c: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x10553Cu;
    {
        const bool branch_taken_0x10553c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x105540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10553Cu;
            // 0x105540: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10553c) {
            ctx->pc = 0x105558u;
            goto label_105558;
        }
    }
    ctx->pc = 0x105544u;
    // 0x105544: 0x8e250820  lw          $a1, 0x820($s1)
    ctx->pc = 0x105544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2080)));
    // 0x105548: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10554c: 0xc04144e  jal         func_105138
    ctx->pc = 0x10554Cu;
    SET_GPR_U32(ctx, 31, 0x105554u);
    ctx->pc = 0x105550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10554Cu;
            // 0x105550: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (runtime->hasFunction(0x105138u)) {
        auto targetFn = runtime->lookupFunction(0x105138u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105554u; }
        if (ctx->pc != 0x105554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00105138_0x105138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105554u; }
        if (ctx->pc != 0x105554u) { return; }
    }
    ctx->pc = 0x105554u;
label_105554:
    // 0x105554: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x105554u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_105558:
    // 0x105558: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105558u;
    {
        const bool branch_taken_0x105558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10555Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105558u;
            // 0x10555c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105558) {
            ctx->pc = 0x10556Cu;
            goto label_10556c;
        }
    }
    ctx->pc = 0x105560u;
    // 0x105560: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x105560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x105564: 0xc042e16  jal         func_10B858
    ctx->pc = 0x105564u;
    SET_GPR_U32(ctx, 31, 0x10556Cu);
    ctx->pc = 0x105568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105564u;
            // 0x105568: 0x24a5e6d0  addiu       $a1, $a1, -0x1930 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B858u;
    if (runtime->hasFunction(0x10B858u)) {
        auto targetFn = runtime->lookupFunction(0x10B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10556Cu; }
        if (ctx->pc != 0x10556Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B858_0x10b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10556Cu; }
        if (ctx->pc != 0x10556Cu) { return; }
    }
    ctx->pc = 0x10556Cu;
label_10556c:
    // 0x10556c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x10556cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_105570:
    // 0x105570: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x105570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x105574: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x105574u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x105578: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x105578u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10557c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10557cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x105580: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x105580u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x105584: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x105584u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105588: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x105588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10558c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10558cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105590: 0x3e00008  jr          $ra
    ctx->pc = 0x105590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105590u;
            // 0x105594: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x105598u;
}
