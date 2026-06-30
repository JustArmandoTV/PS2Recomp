#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026B4B0
// Address: 0x26b4b0 - 0x26bba0
void sub_0026B4B0_0x26b4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B4B0_0x26b4b0");
#endif

    switch (ctx->pc) {
        case 0x26b580u: goto label_26b580;
        case 0x26b5b0u: goto label_26b5b0;
        case 0x26b634u: goto label_26b634;
        case 0x26b650u: goto label_26b650;
        case 0x26b668u: goto label_26b668;
        case 0x26b6a8u: goto label_26b6a8;
        case 0x26b6c0u: goto label_26b6c0;
        case 0x26b6f8u: goto label_26b6f8;
        case 0x26b800u: goto label_26b800;
        case 0x26b848u: goto label_26b848;
        case 0x26b864u: goto label_26b864;
        case 0x26b884u: goto label_26b884;
        case 0x26b928u: goto label_26b928;
        case 0x26b960u: goto label_26b960;
        case 0x26b970u: goto label_26b970;
        case 0x26b9d4u: goto label_26b9d4;
        case 0x26ba48u: goto label_26ba48;
        default: break;
    }

    ctx->pc = 0x26b4b0u;

label_26b4b0:
    // 0x26b4b0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x26b4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x26b4b4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x26b4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x26b4b8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x26b4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x26b4bc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x26b4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x26b4c0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x26b4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x26b4c4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26b4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x26b4c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x26b4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x26b4cc: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x26b4ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b4d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26b4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26b4d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26b4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26b4d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26b4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26b4dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26b4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26b4e0: 0xafa400fc  sw          $a0, 0xFC($sp)
    ctx->pc = 0x26b4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 4));
    // 0x26b4e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x26b4e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b4e8: 0x80a30038  lb          $v1, 0x38($a1)
    ctx->pc = 0x26b4e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x26b4ec: 0x146001a0  bnez        $v1, . + 4 + (0x1A0 << 2)
    ctx->pc = 0x26B4ECu;
    {
        const bool branch_taken_0x26b4ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B4ECu;
            // 0x26b4f0: 0x26170038  addiu       $s7, $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b4ec) {
            ctx->pc = 0x26BB70u;
            goto label_26bb70;
        }
    }
    ctx->pc = 0x26B4F4u;
    // 0x26b4f4: 0x82020004  lb          $v0, 0x4($s0)
    ctx->pc = 0x26b4f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26b4f8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x26B4F8u;
    {
        const bool branch_taken_0x26b4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b4f8) {
            ctx->pc = 0x26B588u;
            goto label_26b588;
        }
    }
    ctx->pc = 0x26B500u;
    // 0x26b500: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x26b500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x26b504: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x26b504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b508: 0x8ea70024  lw          $a3, 0x24($s5)
    ctx->pc = 0x26b508u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x26b50c: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x26b50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x26b510: 0xe21007  srav        $v0, $v0, $a3
    ctx->pc = 0x26b510u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x26b514: 0xe31807  srav        $v1, $v1, $a3
    ctx->pc = 0x26b514u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x26b518: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26b518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26b51c: 0xe31804  sllv        $v1, $v1, $a3
    ctx->pc = 0x26b51cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x26b520: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x26b520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x26b524: 0xaea30048  sw          $v1, 0x48($s5)
    ctx->pc = 0x26b524u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 72), GPR_U32(ctx, 3));
    // 0x26b528: 0xaea20054  sw          $v0, 0x54($s5)
    ctx->pc = 0x26b528u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
    // 0x26b52c: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x26b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x26b530: 0x8ea70024  lw          $a3, 0x24($s5)
    ctx->pc = 0x26b530u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x26b534: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x26b534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x26b538: 0xe21007  srav        $v0, $v0, $a3
    ctx->pc = 0x26b538u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x26b53c: 0xe31807  srav        $v1, $v1, $a3
    ctx->pc = 0x26b53cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x26b540: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26b540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26b544: 0xe31804  sllv        $v1, $v1, $a3
    ctx->pc = 0x26b544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x26b548: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x26b548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x26b54c: 0xaea3004c  sw          $v1, 0x4C($s5)
    ctx->pc = 0x26b54cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 3));
    // 0x26b550: 0xaea20058  sw          $v0, 0x58($s5)
    ctx->pc = 0x26b550u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 88), GPR_U32(ctx, 2));
    // 0x26b554: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x26b554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x26b558: 0x8ea70024  lw          $a3, 0x24($s5)
    ctx->pc = 0x26b558u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x26b55c: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x26b55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x26b560: 0xe21007  srav        $v0, $v0, $a3
    ctx->pc = 0x26b560u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x26b564: 0xe31807  srav        $v1, $v1, $a3
    ctx->pc = 0x26b564u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x26b568: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26b568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26b56c: 0xe31804  sllv        $v1, $v1, $a3
    ctx->pc = 0x26b56cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x26b570: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x26b570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x26b574: 0xaea30050  sw          $v1, 0x50($s5)
    ctx->pc = 0x26b574u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 3));
    // 0x26b578: 0xc09ace0  jal         func_26B380
    ctx->pc = 0x26B578u;
    SET_GPR_U32(ctx, 31, 0x26B580u);
    ctx->pc = 0x26B57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B578u;
            // 0x26b57c: 0xaea2005c  sw          $v0, 0x5C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B380u;
    if (runtime->hasFunction(0x26B380u)) {
        auto targetFn = runtime->lookupFunction(0x26B380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B580u; }
        if (ctx->pc != 0x26B580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B380_0x26b380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B580u; }
        if (ctx->pc != 0x26B580u) { return; }
    }
    ctx->pc = 0x26B580u;
label_26b580:
    // 0x26b580: 0x1000017b  b           . + 4 + (0x17B << 2)
    ctx->pc = 0x26B580u;
    {
        const bool branch_taken_0x26b580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b580) {
            ctx->pc = 0x26BB70u;
            goto label_26bb70;
        }
    }
    ctx->pc = 0x26B588u;
label_26b588:
    // 0x26b588: 0xa3a00160  sb          $zero, 0x160($sp)
    ctx->pc = 0x26b588u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 352), (uint8_t)GPR_U32(ctx, 0));
    // 0x26b58c: 0x82e20002  lb          $v0, 0x2($s7)
    ctx->pc = 0x26b58cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x26b590: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x26b590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x26b594: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x26b594u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x26b598: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26B598u;
    {
        const bool branch_taken_0x26b598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b598) {
            ctx->pc = 0x26B5B0u;
            goto label_26b5b0;
        }
    }
    ctx->pc = 0x26B5A0u;
    // 0x26b5a0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x26b5a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b5a4: 0x27a70160  addiu       $a3, $sp, 0x160
    ctx->pc = 0x26b5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x26b5a8: 0xc09aadc  jal         func_26AB70
    ctx->pc = 0x26B5A8u;
    SET_GPR_U32(ctx, 31, 0x26B5B0u);
    ctx->pc = 0x26B5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B5A8u;
            // 0x26b5ac: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26AB70u;
    if (runtime->hasFunction(0x26AB70u)) {
        auto targetFn = runtime->lookupFunction(0x26AB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B5B0u; }
        if (ctx->pc != 0x26B5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026AB70_0x26ab70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B5B0u; }
        if (ctx->pc != 0x26B5B0u) { return; }
    }
    ctx->pc = 0x26B5B0u;
label_26b5b0:
    // 0x26b5b0: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x26b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x26b5b4: 0x8ea50024  lw          $a1, 0x24($s5)
    ctx->pc = 0x26b5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x26b5b8: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x26b5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x26b5bc: 0x8fa400fc  lw          $a0, 0xFC($sp)
    ctx->pc = 0x26b5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x26b5c0: 0xa21007  srav        $v0, $v0, $a1
    ctx->pc = 0x26b5c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x26b5c4: 0xa31807  srav        $v1, $v1, $a1
    ctx->pc = 0x26b5c4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x26b5c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26b5cc: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x26b5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x26b5d0: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x26b5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x26b5d4: 0xaea30048  sw          $v1, 0x48($s5)
    ctx->pc = 0x26b5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 72), GPR_U32(ctx, 3));
    // 0x26b5d8: 0xaea20054  sw          $v0, 0x54($s5)
    ctx->pc = 0x26b5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
    // 0x26b5dc: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x26b5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x26b5e0: 0x8ea50024  lw          $a1, 0x24($s5)
    ctx->pc = 0x26b5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x26b5e4: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x26b5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x26b5e8: 0xa21007  srav        $v0, $v0, $a1
    ctx->pc = 0x26b5e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x26b5ec: 0xa31807  srav        $v1, $v1, $a1
    ctx->pc = 0x26b5ecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x26b5f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26b5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26b5f4: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x26b5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x26b5f8: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x26b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x26b5fc: 0xaea3004c  sw          $v1, 0x4C($s5)
    ctx->pc = 0x26b5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 3));
    // 0x26b600: 0xaea20058  sw          $v0, 0x58($s5)
    ctx->pc = 0x26b600u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 88), GPR_U32(ctx, 2));
    // 0x26b604: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x26b604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x26b608: 0x8ea50024  lw          $a1, 0x24($s5)
    ctx->pc = 0x26b608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x26b60c: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x26b60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x26b610: 0xa21007  srav        $v0, $v0, $a1
    ctx->pc = 0x26b610u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x26b614: 0xa31807  srav        $v1, $v1, $a1
    ctx->pc = 0x26b614u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x26b618: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26b618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26b61c: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x26b61cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x26b620: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x26b620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x26b624: 0xaea30050  sw          $v1, 0x50($s5)
    ctx->pc = 0x26b624u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 3));
    // 0x26b628: 0xaea2005c  sw          $v0, 0x5C($s5)
    ctx->pc = 0x26b628u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 2));
    // 0x26b62c: 0xc09bec0  jal         func_26FB00
    ctx->pc = 0x26B62Cu;
    SET_GPR_U32(ctx, 31, 0x26B634u);
    ctx->pc = 0x26B630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B62Cu;
            // 0x26b630: 0x8e050060  lw          $a1, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26FB00u;
    if (runtime->hasFunction(0x26FB00u)) {
        auto targetFn = runtime->lookupFunction(0x26FB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B634u; }
        if (ctx->pc != 0x26B634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026FB00_0x26fb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B634u; }
        if (ctx->pc != 0x26B634u) { return; }
    }
    ctx->pc = 0x26B634u;
label_26b634:
    // 0x26b634: 0x8fa400fc  lw          $a0, 0xFC($sp)
    ctx->pc = 0x26b634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x26b638: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26b638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b63c: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x26b63cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x26b640: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x26b640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b644: 0x27a7018c  addiu       $a3, $sp, 0x18C
    ctx->pc = 0x26b644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
    // 0x26b648: 0xc09bf14  jal         func_26FC50
    ctx->pc = 0x26B648u;
    SET_GPR_U32(ctx, 31, 0x26B650u);
    ctx->pc = 0x26B64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B648u;
            // 0x26b64c: 0x27a80188  addiu       $t0, $sp, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26FC50u;
    if (runtime->hasFunction(0x26FC50u)) {
        auto targetFn = runtime->lookupFunction(0x26FC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B650u; }
        if (ctx->pc != 0x26B650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026FC50_0x26fc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B650u; }
        if (ctx->pc != 0x26B650u) { return; }
    }
    ctx->pc = 0x26B650u;
label_26b650:
    // 0x26b650: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x26b650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x26b654: 0x27a30180  addiu       $v1, $sp, 0x180
    ctx->pc = 0x26b654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x26b658: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x26b658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x26b65c: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x26b65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x26b660: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x26B660u;
    {
        const bool branch_taken_0x26b660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B660u;
            // 0x26b664: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b660) {
            ctx->pc = 0x26B684u;
            goto label_26b684;
        }
    }
    ctx->pc = 0x26B668u;
label_26b668:
    // 0x26b668: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x26b668u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x26b66c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x26b66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26b670: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26b670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26b674: 0x0  nop
    ctx->pc = 0x26b674u;
    // NOP
    // 0x26b678: 0x0  nop
    ctx->pc = 0x26b678u;
    // NOP
    // 0x26b67c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26B67Cu;
    {
        const bool branch_taken_0x26b67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b67c) {
            ctx->pc = 0x26B668u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26b668;
        }
    }
    ctx->pc = 0x26B684u;
label_26b684:
    // 0x26b684: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x26b684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x26b688: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26b688u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b68c: 0xafa40184  sw          $a0, 0x184($sp)
    ctx->pc = 0x26b68cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 4));
    // 0x26b690: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x26b690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b694: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x26b694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x26b698: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x26b698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x26b69c: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x26b69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x26b6a0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x26b6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x26b6a4: 0x0  nop
    ctx->pc = 0x26b6a4u;
    // NOP
label_26b6a8:
    // 0x26b6a8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x26b6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26b6ac: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x26b6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b6b0: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x26b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x26b6b4: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x26b6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b6b8: 0xc0a32a0  jal         func_28CA80
    ctx->pc = 0x26B6B8u;
    SET_GPR_U32(ctx, 31, 0x26B6C0u);
    ctx->pc = 0x26B6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B6B8u;
            // 0x26b6bc: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CA80u;
    if (runtime->hasFunction(0x28CA80u)) {
        auto targetFn = runtime->lookupFunction(0x28CA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B6C0u; }
        if (ctx->pc != 0x26B6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CA80_0x28ca80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B6C0u; }
        if (ctx->pc != 0x26B6C0u) { return; }
    }
    ctx->pc = 0x26B6C0u;
label_26b6c0:
    // 0x26b6c0: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x26b6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x26b6c4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x26b6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x26b6c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26b6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26b6cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x26b6ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x26b6d0: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x26b6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x26b6d4: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x26b6d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26b6d8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x26B6D8u;
    {
        const bool branch_taken_0x26b6d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B6D8u;
            // 0x26b6dc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b6d8) {
            ctx->pc = 0x26B6A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26b6a8;
        }
    }
    ctx->pc = 0x26B6E0u;
    // 0x26b6e0: 0x27a30180  addiu       $v1, $sp, 0x180
    ctx->pc = 0x26b6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x26b6e4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x26b6e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b6e8: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x26b6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x26b6ec: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x26b6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x26b6f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26b6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26b6f4: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x26b6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_26b6f8:
    // 0x26b6f8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x26b6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x26b6fc: 0x8c760000  lw          $s6, 0x0($v1)
    ctx->pc = 0x26b6fcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26b700: 0x26c30038  addiu       $v1, $s6, 0x38
    ctx->pc = 0x26b700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 56));
    // 0x26b704: 0x12c00112  beqz        $s6, . + 4 + (0x112 << 2)
    ctx->pc = 0x26B704u;
    {
        const bool branch_taken_0x26b704 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B704u;
            // 0x26b708: 0xafa300d0  sw          $v1, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b704) {
            ctx->pc = 0x26BB50u;
            goto label_26bb50;
        }
    }
    ctx->pc = 0x26B70Cu;
    // 0x26b70c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x26b70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x26b710: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x26b710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x26b714: 0x92a40004  lbu         $a0, 0x4($s5)
    ctx->pc = 0x26b714u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x26b718: 0x27a30104  addiu       $v1, $sp, 0x104
    ctx->pc = 0x26b718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x26b71c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x26b71cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x26b720: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x26b720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x26b724: 0x27a30108  addiu       $v1, $sp, 0x108
    ctx->pc = 0x26b724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x26b728: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x26b728u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x26b72c: 0xc6a3000c  lwc1        $f3, 0xC($s5)
    ctx->pc = 0x26b72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26b730: 0x27a3010c  addiu       $v1, $sp, 0x10C
    ctx->pc = 0x26b730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x26b734: 0xc6a20010  lwc1        $f2, 0x10($s5)
    ctx->pc = 0x26b734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26b738: 0xc6a10014  lwc1        $f1, 0x14($s5)
    ctx->pc = 0x26b738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b73c: 0xc6a00018  lwc1        $f0, 0x18($s5)
    ctx->pc = 0x26b73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b740: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x26b740u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x26b744: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x26b744u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x26b748: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x26b748u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x26b74c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x26b74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x26b750: 0xc6a1001c  lwc1        $f1, 0x1C($s5)
    ctx->pc = 0x26b750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b754: 0xc6a00020  lwc1        $f0, 0x20($s5)
    ctx->pc = 0x26b754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b758: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x26b758u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x26b75c: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x26b75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x26b760: 0x8ea40024  lw          $a0, 0x24($s5)
    ctx->pc = 0x26b760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x26b764: 0x27a30124  addiu       $v1, $sp, 0x124
    ctx->pc = 0x26b764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x26b768: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x26b768u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x26b76c: 0xc6a20028  lwc1        $f2, 0x28($s5)
    ctx->pc = 0x26b76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26b770: 0x27a30128  addiu       $v1, $sp, 0x128
    ctx->pc = 0x26b770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x26b774: 0xc6a1002c  lwc1        $f1, 0x2C($s5)
    ctx->pc = 0x26b774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b778: 0xc6a00030  lwc1        $f0, 0x30($s5)
    ctx->pc = 0x26b778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b77c: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x26b77cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x26b780: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x26b780u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x26b784: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x26b784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x26b788: 0x8ea40034  lw          $a0, 0x34($s5)
    ctx->pc = 0x26b788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x26b78c: 0x27a30134  addiu       $v1, $sp, 0x134
    ctx->pc = 0x26b78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x26b790: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x26b790u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x26b794: 0x8ea40038  lw          $a0, 0x38($s5)
    ctx->pc = 0x26b794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x26b798: 0x27a30138  addiu       $v1, $sp, 0x138
    ctx->pc = 0x26b798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x26b79c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x26b79cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x26b7a0: 0x8ea4003c  lw          $a0, 0x3C($s5)
    ctx->pc = 0x26b7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x26b7a4: 0x27a3013c  addiu       $v1, $sp, 0x13C
    ctx->pc = 0x26b7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x26b7a8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x26b7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x26b7ac: 0xc6a00040  lwc1        $f0, 0x40($s5)
    ctx->pc = 0x26b7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b7b0: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x26b7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x26b7b4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x26b7b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x26b7b8: 0xc6a00044  lwc1        $f0, 0x44($s5)
    ctx->pc = 0x26b7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b7bc: 0x27a30144  addiu       $v1, $sp, 0x144
    ctx->pc = 0x26b7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    // 0x26b7c0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x26b7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x26b7c4: 0x8ec40028  lw          $a0, 0x28($s6)
    ctx->pc = 0x26b7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x26b7c8: 0x8ec30024  lw          $v1, 0x24($s6)
    ctx->pc = 0x26b7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
    // 0x26b7cc: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x26b7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26b7d0: 0x27a30138  addiu       $v1, $sp, 0x138
    ctx->pc = 0x26b7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x26b7d4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x26b7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x26b7d8: 0x8ec4002c  lw          $a0, 0x2C($s6)
    ctx->pc = 0x26b7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x26b7dc: 0x27a3013c  addiu       $v1, $sp, 0x13C
    ctx->pc = 0x26b7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x26b7e0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x26b7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x26b7e4: 0x8ec3002c  lw          $v1, 0x2C($s6)
    ctx->pc = 0x26b7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x26b7e8: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x26b7e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26b7ec: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x26B7ECu;
    {
        const bool branch_taken_0x26b7ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B7ECu;
            // 0x26b7f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b7ec) {
            ctx->pc = 0x26B830u;
            goto label_26b830;
        }
    }
    ctx->pc = 0x26B7F4u;
    // 0x26b7f4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x26b7f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b7f8: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x26b7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x26b7fc: 0x0  nop
    ctx->pc = 0x26b7fcu;
    // NOP
label_26b800:
    // 0x26b800: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x26b800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x26b804: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26b804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26b808: 0xaca30040  sw          $v1, 0x40($a1)
    ctx->pc = 0x26b808u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 3));
    // 0x26b80c: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x26b80cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x26b810: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x26b810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x26b814: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x26b814u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26b818: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x26b818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x26b81c: 0xaca30044  sw          $v1, 0x44($a1)
    ctx->pc = 0x26b81cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 3));
    // 0x26b820: 0x8ec3002c  lw          $v1, 0x2C($s6)
    ctx->pc = 0x26b820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x26b824: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x26b824u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26b828: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x26B828u;
    {
        const bool branch_taken_0x26b828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B828u;
            // 0x26b82c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b828) {
            ctx->pc = 0x26B800u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26b800;
        }
    }
    ctx->pc = 0x26B830u;
label_26b830:
    // 0x26b830: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x26b830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x26b834: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x26b834u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b838: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x26b838u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b83c: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x26b83cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b840: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x26b840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x26b844: 0x24520030  addiu       $s2, $v0, 0x30
    ctx->pc = 0x26b844u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_26b848:
    // 0x26b848: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x26b848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26b84c: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x26b84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26b850: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x26b850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b854: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26b854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b858: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x26b858u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x26b85c: 0xc0a3264  jal         func_28C990
    ctx->pc = 0x26B85Cu;
    SET_GPR_U32(ctx, 31, 0x26B864u);
    ctx->pc = 0x26B860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B85Cu;
            // 0x26b860: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C990u;
    if (runtime->hasFunction(0x28C990u)) {
        auto targetFn = runtime->lookupFunction(0x28C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B864u; }
        if (ctx->pc != 0x26B864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C990_0x28c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B864u; }
        if (ctx->pc != 0x26B864u) { return; }
    }
    ctx->pc = 0x26B864u;
label_26b864:
    // 0x26b864: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x26b864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x26b868: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x26b868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26b86c: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x26b86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26b870: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x26b870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b874: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26b874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b878: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x26b878u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x26b87c: 0xc0a3264  jal         func_28C990
    ctx->pc = 0x26B87Cu;
    SET_GPR_U32(ctx, 31, 0x26B884u);
    ctx->pc = 0x26B880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B87Cu;
            // 0x26b880: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C990u;
    if (runtime->hasFunction(0x28C990u)) {
        auto targetFn = runtime->lookupFunction(0x28C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B884u; }
        if (ctx->pc != 0x26B884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C990_0x28c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B884u; }
        if (ctx->pc != 0x26B884u) { return; }
    }
    ctx->pc = 0x26B884u;
label_26b884:
    // 0x26b884: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26b884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26b888: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x26b888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x26b88c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26b88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26b890: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x26b890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26b894: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x26b894u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26b898: 0x5e082a  slt         $at, $v0, $fp
    ctx->pc = 0x26b898u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x26b89c: 0x41f00a  movz        $fp, $v0, $at
    ctx->pc = 0x26b89cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 2));
    // 0x26b8a0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x26b8a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x26b8a4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x26b8a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x26b8a8: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x26b8a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26b8ac: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x26b8acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x26b8b0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x26B8B0u;
    {
        const bool branch_taken_0x26b8b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B8B0u;
            // 0x26b8b4: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b8b0) {
            ctx->pc = 0x26B848u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26b848;
        }
    }
    ctx->pc = 0x26B8B8u;
    // 0x26b8b8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x26b8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x26b8bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26b8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26b8c0: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x26b8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x26b8c4: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x26b8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x26b8c8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x26b8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x26b8cc: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x26b8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x26b8d0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x26b8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26b8d4: 0x27a2010c  addiu       $v0, $sp, 0x10C
    ctx->pc = 0x26b8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x26b8d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26b8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26b8dc: 0x27a20118  addiu       $v0, $sp, 0x118
    ctx->pc = 0x26b8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x26b8e0: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26b8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26b8e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26b8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26b8e8: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x26b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x26b8ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26b8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26b8f0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x26b8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26b8f4: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x26b8f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26b8f8: 0x41200a  movz        $a0, $v0, $at
    ctx->pc = 0x26b8f8u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x26b8fc: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x26b8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x26b900: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26b900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26b904: 0x27a2011c  addiu       $v0, $sp, 0x11C
    ctx->pc = 0x26b904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x26b908: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26b908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26b90c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x26b90cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26b910: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x26b910u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26b914: 0x41200a  movz        $a0, $v0, $at
    ctx->pc = 0x26b914u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x26b918: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x26b918u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b91c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x26B91Cu;
    {
        const bool branch_taken_0x26b91c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B91Cu;
            // 0x26b920: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b91c) {
            ctx->pc = 0x26B948u;
            goto label_26b948;
        }
    }
    ctx->pc = 0x26B924u;
    // 0x26b924: 0x0  nop
    ctx->pc = 0x26b924u;
    // NOP
label_26b928:
    // 0x26b928: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x26b928u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x26b92c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26b92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26b930: 0x0  nop
    ctx->pc = 0x26b930u;
    // NOP
    // 0x26b934: 0x0  nop
    ctx->pc = 0x26b934u;
    // NOP
    // 0x26b938: 0x0  nop
    ctx->pc = 0x26b938u;
    // NOP
    // 0x26b93c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26B93Cu;
    {
        const bool branch_taken_0x26b93c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b93c) {
            ctx->pc = 0x26B928u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26b928;
        }
    }
    ctx->pc = 0x26B944u;
    // 0x26b944: 0x0  nop
    ctx->pc = 0x26b944u;
    // NOP
label_26b948:
    // 0x26b948: 0x2443fffc  addiu       $v1, $v0, -0x4
    ctx->pc = 0x26b948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x26b94c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b950: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x26b950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26b954: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x26b954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x26b958: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26b958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b95c: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x26b95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_26b960:
    // 0x26b960: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x26b960u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b964: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x26B964u;
    {
        const bool branch_taken_0x26b964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B964u;
            // 0x26b968: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b964) {
            ctx->pc = 0x26B990u;
            goto label_26b990;
        }
    }
    ctx->pc = 0x26B96Cu;
    // 0x26b96c: 0x0  nop
    ctx->pc = 0x26b96cu;
    // NOP
label_26b970:
    // 0x26b970: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x26b970u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x26b974: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x26b974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x26b978: 0x0  nop
    ctx->pc = 0x26b978u;
    // NOP
    // 0x26b97c: 0x0  nop
    ctx->pc = 0x26b97cu;
    // NOP
    // 0x26b980: 0x0  nop
    ctx->pc = 0x26b980u;
    // NOP
    // 0x26b984: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26B984u;
    {
        const bool branch_taken_0x26b984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b984) {
            ctx->pc = 0x26B970u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26b970;
        }
    }
    ctx->pc = 0x26B98Cu;
    // 0x26b98c: 0x0  nop
    ctx->pc = 0x26b98cu;
    // NOP
label_26b990:
    // 0x26b990: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x26b990u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26b994: 0xc1200a  movz        $a0, $a2, $at
    ctx->pc = 0x26b994u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x26b998: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x26b998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x26b99c: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x26b99cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26b9a0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x26B9A0u;
    {
        const bool branch_taken_0x26b9a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B9A0u;
            // 0x26b9a4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b9a0) {
            ctx->pc = 0x26B960u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26b960;
        }
    }
    ctx->pc = 0x26B9A8u;
    // 0x26b9a8: 0x28810019  slti        $at, $a0, 0x19
    ctx->pc = 0x26b9a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x26b9ac: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x26B9ACu;
    {
        const bool branch_taken_0x26b9ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b9ac) {
            ctx->pc = 0x26B9B8u;
            goto label_26b9b8;
        }
    }
    ctx->pc = 0x26B9B4u;
    // 0x26b9b4: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x26b9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_26b9b8:
    // 0x26b9b8: 0x27a20108  addiu       $v0, $sp, 0x108
    ctx->pc = 0x26b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x26b9bc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x26b9bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b9c0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x26b9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x26b9c4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x26b9c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b9c8: 0x8fa400fc  lw          $a0, 0xFC($sp)
    ctx->pc = 0x26b9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x26b9cc: 0xc09ad2c  jal         func_26B4B0
    ctx->pc = 0x26B9CCu;
    SET_GPR_U32(ctx, 31, 0x26B9D4u);
    ctx->pc = 0x26B9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B9CCu;
            // 0x26b9d0: 0x27a70100  addiu       $a3, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B4B0u;
    goto label_26b4b0;
    ctx->pc = 0x26B9D4u;
label_26b9d4:
    // 0x26b9d4: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x26b9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x26b9d8: 0x16c30009  bne         $s6, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x26B9D8u;
    {
        const bool branch_taken_0x26b9d8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        if (branch_taken_0x26b9d8) {
            ctx->pc = 0x26BA00u;
            goto label_26ba00;
        }
    }
    ctx->pc = 0x26B9E0u;
    // 0x26b9e0: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x26b9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x26b9e4: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x26b9e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26b9e8: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x26B9E8u;
    {
        const bool branch_taken_0x26b9e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b9e8) {
            ctx->pc = 0x26BA28u;
            goto label_26ba28;
        }
    }
    ctx->pc = 0x26B9F0u;
    // 0x26b9f0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x26b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26b9f4: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x26b9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x26b9f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26B9F8u;
    {
        const bool branch_taken_0x26b9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B9F8u;
            // 0x26b9fc: 0xac600044  sw          $zero, 0x44($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b9f8) {
            ctx->pc = 0x26BA28u;
            goto label_26ba28;
        }
    }
    ctx->pc = 0x26BA00u;
label_26ba00:
    // 0x26ba00: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x26ba00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x26ba04: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x26ba04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26ba08: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x26BA08u;
    {
        const bool branch_taken_0x26ba08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ba08) {
            ctx->pc = 0x26BA28u;
            goto label_26ba28;
        }
    }
    ctx->pc = 0x26BA10u;
    // 0x26ba10: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x26ba10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26ba14: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x26ba14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x26ba18: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x26ba18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x26ba1c: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x26ba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x26ba20: 0xac640050  sw          $a0, 0x50($v1)
    ctx->pc = 0x26ba20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 4));
    // 0x26ba24: 0x0  nop
    ctx->pc = 0x26ba24u;
    // NOP
label_26ba28:
    // 0x26ba28: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x26ba28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x26ba2c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26ba2cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ba30: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x26ba30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ba34: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x26ba34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ba38: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x26ba38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ba3c: 0x240d0002  addiu       $t5, $zero, 0x2
    ctx->pc = 0x26ba3cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26ba40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26ba40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ba44: 0x0  nop
    ctx->pc = 0x26ba44u;
    // NOP
label_26ba48:
    // 0x26ba48: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x26ba48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x26ba4c: 0x8a4821  addu        $t1, $a0, $t2
    ctx->pc = 0x26ba4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x26ba50: 0x25240003  addiu       $a0, $t1, 0x3
    ctx->pc = 0x26ba50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
    // 0x26ba54: 0x81290003  lb          $t1, 0x3($t1)
    ctx->pc = 0x26ba54u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
    // 0x26ba58: 0x15230015  bne         $t1, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x26BA58u;
    {
        const bool branch_taken_0x26ba58 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        if (branch_taken_0x26ba58) {
            ctx->pc = 0x26BAB0u;
            goto label_26bab0;
        }
    }
    ctx->pc = 0x26BA60u;
    // 0x26ba60: 0x8cec000c  lw          $t4, 0xC($a3)
    ctx->pc = 0x26ba60u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x26ba64: 0x8d0b0048  lw          $t3, 0x48($t0)
    ctx->pc = 0x26ba64u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 72)));
    // 0x26ba68: 0x16c082a  slt         $at, $t3, $t4
    ctx->pc = 0x26ba68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x26ba6c: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x26BA6Cu;
    {
        const bool branch_taken_0x26ba6c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ba6c) {
            ctx->pc = 0x26BAB0u;
            goto label_26bab0;
        }
    }
    ctx->pc = 0x26BA74u;
    // 0x26ba74: 0x8cec0018  lw          $t4, 0x18($a3)
    ctx->pc = 0x26ba74u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x26ba78: 0x8d0b0054  lw          $t3, 0x54($t0)
    ctx->pc = 0x26ba78u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
    // 0x26ba7c: 0x18b582a  slt         $t3, $t4, $t3
    ctx->pc = 0x26ba7cu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x26ba80: 0x1560000b  bnez        $t3, . + 4 + (0xB << 2)
    ctx->pc = 0x26BA80u;
    {
        const bool branch_taken_0x26ba80 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ba80) {
            ctx->pc = 0x26BAB0u;
            goto label_26bab0;
        }
    }
    ctx->pc = 0x26BA88u;
    // 0x26ba88: 0x2ea5821  addu        $t3, $s7, $t2
    ctx->pc = 0x26ba88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 10)));
    // 0x26ba8c: 0x256c0003  addiu       $t4, $t3, 0x3
    ctx->pc = 0x26ba8cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
    // 0x26ba90: 0x816b0003  lb          $t3, 0x3($t3)
    ctx->pc = 0x26ba90u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x26ba94: 0x169082a  slt         $at, $t3, $t1
    ctx->pc = 0x26ba94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x26ba98: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x26BA98u;
    {
        const bool branch_taken_0x26ba98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ba98) {
            ctx->pc = 0x26BAA4u;
            goto label_26baa4;
        }
    }
    ctx->pc = 0x26BAA0u;
    // 0x26baa0: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x26baa0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_26baa4:
    // 0x26baa4: 0xa18b0000  sb          $t3, 0x0($t4)
    ctx->pc = 0x26baa4u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 11));
    // 0x26baa8: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x26baa8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x26baac: 0x0  nop
    ctx->pc = 0x26baacu;
    // NOP
label_26bab0:
    // 0x26bab0: 0x152d000f  bne         $t1, $t5, . + 4 + (0xF << 2)
    ctx->pc = 0x26BAB0u;
    {
        const bool branch_taken_0x26bab0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 13));
        if (branch_taken_0x26bab0) {
            ctx->pc = 0x26BAF0u;
            goto label_26baf0;
        }
    }
    ctx->pc = 0x26BAB8u;
    // 0x26bab8: 0x8cec000c  lw          $t4, 0xC($a3)
    ctx->pc = 0x26bab8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x26babc: 0x8ccb000c  lw          $t3, 0xC($a2)
    ctx->pc = 0x26babcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x26bac0: 0x16c082a  slt         $at, $t3, $t4
    ctx->pc = 0x26bac0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x26bac4: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x26BAC4u;
    {
        const bool branch_taken_0x26bac4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x26bac4) {
            ctx->pc = 0x26BAF0u;
            goto label_26baf0;
        }
    }
    ctx->pc = 0x26BACCu;
    // 0x26bacc: 0x8cec0018  lw          $t4, 0x18($a3)
    ctx->pc = 0x26baccu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x26bad0: 0x8ccb0010  lw          $t3, 0x10($a2)
    ctx->pc = 0x26bad0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x26bad4: 0x18b582a  slt         $t3, $t4, $t3
    ctx->pc = 0x26bad4u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x26bad8: 0x15600005  bnez        $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x26BAD8u;
    {
        const bool branch_taken_0x26bad8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x26bad8) {
            ctx->pc = 0x26BAF0u;
            goto label_26baf0;
        }
    }
    ctx->pc = 0x26BAE0u;
    // 0x26bae0: 0x2ea5821  addu        $t3, $s7, $t2
    ctx->pc = 0x26bae0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 10)));
    // 0x26bae4: 0xa1690003  sb          $t1, 0x3($t3)
    ctx->pc = 0x26bae4u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x26bae8: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x26bae8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x26baec: 0x0  nop
    ctx->pc = 0x26baecu;
    // NOP
label_26baf0:
    // 0x26baf0: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x26baf0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26baf4: 0x802026  xor         $a0, $a0, $zero
    ctx->pc = 0x26baf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 0));
    // 0x26baf8: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x26baf8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x26bafc: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x26BAFCu;
    {
        const bool branch_taken_0x26bafc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bafc) {
            ctx->pc = 0x26BB30u;
            goto label_26bb30;
        }
    }
    ctx->pc = 0x26BB04u;
    // 0x26bb04: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x26bb04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x26bb08: 0x8ca9000c  lw          $t1, 0xC($a1)
    ctx->pc = 0x26bb08u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x26bb0c: 0x89082a  slt         $at, $a0, $t1
    ctx->pc = 0x26bb0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x26bb10: 0x81480a  movz        $t1, $a0, $at
    ctx->pc = 0x26bb10u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 4));
    // 0x26bb14: 0xaca9000c  sw          $t1, 0xC($a1)
    ctx->pc = 0x26bb14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 9));
    // 0x26bb18: 0x8ce40018  lw          $a0, 0x18($a3)
    ctx->pc = 0x26bb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x26bb1c: 0x8ca90018  lw          $t1, 0x18($a1)
    ctx->pc = 0x26bb1cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x26bb20: 0x124082a  slt         $at, $t1, $a0
    ctx->pc = 0x26bb20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26bb24: 0x81480a  movz        $t1, $a0, $at
    ctx->pc = 0x26bb24u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 4));
    // 0x26bb28: 0xaca90018  sw          $t1, 0x18($a1)
    ctx->pc = 0x26bb28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 9));
    // 0x26bb2c: 0x0  nop
    ctx->pc = 0x26bb2cu;
    // NOP
label_26bb30:
    // 0x26bb30: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x26bb30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x26bb34: 0x29440003  slti        $a0, $t2, 0x3
    ctx->pc = 0x26bb34u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26bb38: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x26bb38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x26bb3c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x26bb3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x26bb40: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x26bb40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x26bb44: 0x1480ffc0  bnez        $a0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x26BB44u;
    {
        const bool branch_taken_0x26bb44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BB44u;
            // 0x26bb48: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bb44) {
            ctx->pc = 0x26BA48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26ba48;
        }
    }
    ctx->pc = 0x26BB4Cu;
    // 0x26bb4c: 0x0  nop
    ctx->pc = 0x26bb4cu;
    // NOP
label_26bb50:
    // 0x26bb50: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x26bb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x26bb54: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x26bb54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x26bb58: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x26bb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x26bb5c: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x26bb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x26bb60: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x26bb60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x26bb64: 0x1460fee4  bnez        $v1, . + 4 + (-0x11C << 2)
    ctx->pc = 0x26BB64u;
    {
        const bool branch_taken_0x26bb64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26bb64) {
            ctx->pc = 0x26B6F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26b6f8;
        }
    }
    ctx->pc = 0x26BB6Cu;
    // 0x26bb6c: 0x0  nop
    ctx->pc = 0x26bb6cu;
    // NOP
label_26bb70:
    // 0x26bb70: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x26bb70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26bb74: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x26bb74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26bb78: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x26bb78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26bb7c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x26bb7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26bb80: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x26bb80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26bb84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x26bb84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26bb88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26bb88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26bb8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26bb8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26bb90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26bb90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26bb94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26bb94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26bb98: 0x3e00008  jr          $ra
    ctx->pc = 0x26BB98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BB98u;
            // 0x26bb9c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26BBA0u;
}
