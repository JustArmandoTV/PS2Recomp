#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CE730
// Address: 0x2ce730 - 0x2ce8a0
void sub_002CE730_0x2ce730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE730_0x2ce730");
#endif

    switch (ctx->pc) {
        case 0x2ce780u: goto label_2ce780;
        case 0x2ce7a0u: goto label_2ce7a0;
        case 0x2ce7bcu: goto label_2ce7bc;
        default: break;
    }

    ctx->pc = 0x2ce730u;

    // 0x2ce730: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2ce730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2ce734: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2ce734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ce738: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2ce738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2ce73c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2ce73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ce740: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ce740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2ce744: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2ce744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2ce748: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ce748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ce74c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x2ce74cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2ce750: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ce750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ce754: 0x2463f2d0  addiu       $v1, $v1, -0xD30
    ctx->pc = 0x2ce754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963920));
    // 0x2ce758: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ce758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ce75c: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x2ce75cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ce760: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ce760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ce764: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2ce764u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce768: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ce768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ce76c: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x2ce76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x2ce770: 0x8cd50020  lw          $s5, 0x20($a2)
    ctx->pc = 0x2ce770u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2ce774: 0x8cd1001c  lw          $s1, 0x1C($a2)
    ctx->pc = 0x2ce774u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2ce778: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x2ce778u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2ce77c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2ce77cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ce780:
    // 0x2ce780: 0x9663004e  lhu         $v1, 0x4E($s3)
    ctx->pc = 0x2ce780u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 78)));
    // 0x2ce784: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ce784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce788: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2ce788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2ce78c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2ce78cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2ce790: 0x2638021  addu        $s0, $s3, $v1
    ctx->pc = 0x2ce790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2ce794: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x2ce794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2ce798: 0xc074f30  jal         func_1D3CC0
    ctx->pc = 0x2CE798u;
    SET_GPR_U32(ctx, 31, 0x2CE7A0u);
    ctx->pc = 0x2CE79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE798u;
            // 0x2ce79c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE7A0u; }
        if (ctx->pc != 0x2CE7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE7A0u; }
        if (ctx->pc != 0x2CE7A0u) { return; }
    }
    ctx->pc = 0x2CE7A0u;
label_2ce7a0:
    // 0x2ce7a0: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x2ce7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2ce7a4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CE7A4u;
    {
        const bool branch_taken_0x2ce7a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce7a4) {
            ctx->pc = 0x2CE7C0u;
            goto label_2ce7c0;
        }
    }
    ctx->pc = 0x2CE7ACu;
    // 0x2ce7ac: 0x2233021  addu        $a2, $s1, $v1
    ctx->pc = 0x2ce7acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2ce7b0: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2ce7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ce7b4: 0xc0751b8  jal         func_1D46E0
    ctx->pc = 0x2CE7B4u;
    SET_GPR_U32(ctx, 31, 0x2CE7BCu);
    ctx->pc = 0x2CE7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE7B4u;
            // 0x2ce7b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE7BCu; }
        if (ctx->pc != 0x2CE7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE7BCu; }
        if (ctx->pc != 0x2CE7BCu) { return; }
    }
    ctx->pc = 0x2CE7BCu;
label_2ce7bc:
    // 0x2ce7bc: 0x0  nop
    ctx->pc = 0x2ce7bcu;
    // NOP
label_2ce7c0:
    // 0x2ce7c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ce7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ce7c4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2ce7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2ce7c8: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x2ce7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
    // 0x2ce7cc: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x2ce7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2ce7d0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x2ce7d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2ce7d4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CE7D4u;
    {
        const bool branch_taken_0x2ce7d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce7d4) {
            ctx->pc = 0x2CE7E8u;
            goto label_2ce7e8;
        }
    }
    ctx->pc = 0x2CE7DCu;
    // 0x2ce7dc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2ce7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2ce7e0: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x2ce7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
    // 0x2ce7e4: 0x0  nop
    ctx->pc = 0x2ce7e4u;
    // NOP
label_2ce7e8:
    // 0x2ce7e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ce7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ce7ec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2ce7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2ce7f0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x2ce7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x2ce7f4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x2ce7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2ce7f8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x2ce7f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2ce7fc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CE7FCu;
    {
        const bool branch_taken_0x2ce7fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce7fc) {
            ctx->pc = 0x2CE810u;
            goto label_2ce810;
        }
    }
    ctx->pc = 0x2CE804u;
    // 0x2ce804: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2ce804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2ce808: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x2ce808u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x2ce80c: 0x0  nop
    ctx->pc = 0x2ce80cu;
    // NOP
label_2ce810:
    // 0x2ce810: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ce810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ce814: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2ce814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2ce818: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x2ce818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x2ce81c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x2ce81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2ce820: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x2ce820u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2ce824: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CE824u;
    {
        const bool branch_taken_0x2ce824 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce824) {
            ctx->pc = 0x2CE838u;
            goto label_2ce838;
        }
    }
    ctx->pc = 0x2CE82Cu;
    // 0x2ce82c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2ce82cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2ce830: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x2ce830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x2ce834: 0x0  nop
    ctx->pc = 0x2ce834u;
    // NOP
label_2ce838:
    // 0x2ce838: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ce838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ce83c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2ce83cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2ce840: 0x8c63e3a0  lw          $v1, -0x1C60($v1)
    ctx->pc = 0x2ce840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960032)));
    // 0x2ce844: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x2ce844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2ce848: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x2ce848u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2ce84c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CE84Cu;
    {
        const bool branch_taken_0x2ce84c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce84c) {
            ctx->pc = 0x2CE860u;
            goto label_2ce860;
        }
    }
    ctx->pc = 0x2CE854u;
    // 0x2ce854: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2ce854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2ce858: 0xac64e3a0  sw          $a0, -0x1C60($v1)
    ctx->pc = 0x2ce858u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960032), GPR_U32(ctx, 4));
    // 0x2ce85c: 0x0  nop
    ctx->pc = 0x2ce85cu;
    // NOP
label_2ce860:
    // 0x2ce860: 0x9664004e  lhu         $a0, 0x4E($s3)
    ctx->pc = 0x2ce860u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 78)));
    // 0x2ce864: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2ce864u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2ce868: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x2ce868u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x2ce86c: 0x292182b  sltu        $v1, $s4, $s2
    ctx->pc = 0x2ce86cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2ce870: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2ce870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ce874: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
    ctx->pc = 0x2CE874u;
    {
        const bool branch_taken_0x2ce874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE874u;
            // 0x2ce878: 0xa664004e  sh          $a0, 0x4E($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 78), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce874) {
            ctx->pc = 0x2CE780u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ce780;
        }
    }
    ctx->pc = 0x2CE87Cu;
    // 0x2ce87c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2ce87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ce880: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ce880u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ce884: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ce884u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ce888: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ce888u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ce88c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ce88cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ce890: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ce890u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce894: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ce894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce898: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE898u;
            // 0x2ce89c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE8A0u;
}
