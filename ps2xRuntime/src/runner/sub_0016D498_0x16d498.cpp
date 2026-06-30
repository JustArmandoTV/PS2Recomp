#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016D498
// Address: 0x16d498 - 0x16d628
void sub_0016D498_0x16d498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D498_0x16d498");
#endif

    switch (ctx->pc) {
        case 0x16d4e0u: goto label_16d4e0;
        case 0x16d4f0u: goto label_16d4f0;
        case 0x16d500u: goto label_16d500;
        case 0x16d5a0u: goto label_16d5a0;
        case 0x16d5b4u: goto label_16d5b4;
        case 0x16d5c4u: goto label_16d5c4;
        case 0x16d5ccu: goto label_16d5cc;
        case 0x16d5d4u: goto label_16d5d4;
        case 0x16d5dcu: goto label_16d5dc;
        case 0x16d5ecu: goto label_16d5ec;
        case 0x16d600u: goto label_16d600;
        default: break;
    }

    ctx->pc = 0x16d498u;

    // 0x16d498: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16d498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16d49c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16d4a0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x16d4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x16d4a4: 0x3c12005e  lui         $s2, 0x5E
    ctx->pc = 0x16d4a4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)94 << 16));
    // 0x16d4a8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x16d4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x16d4ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16d4acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d4b0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x16d4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x16d4b4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16d4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16d4b8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x16d4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x16d4bc: 0x2442aa30  addiu       $v0, $v0, -0x55D0
    ctx->pc = 0x16d4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945328));
    // 0x16d4c0: 0x8e45aa34  lw          $a1, -0x55CC($s2)
    ctx->pc = 0x16d4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945332)));
    // 0x16d4c4: 0x2463aa8c  addiu       $v1, $v1, -0x5574
    ctx->pc = 0x16d4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945420));
    // 0x16d4c8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x16d4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d4cc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x16d4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x16d4d0: 0x54a0004c  bnel        $a1, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x16D4D0u;
    {
        const bool branch_taken_0x16d4d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d4d0) {
            ctx->pc = 0x16D4D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16D4D0u;
            // 0x16d4d4: 0x2643aa34  addiu       $v1, $s2, -0x55CC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945332));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16D604u;
            goto label_16d604;
        }
    }
    ctx->pc = 0x16D4D8u;
    // 0x16d4d8: 0xc062274  jal         func_1889D0
    ctx->pc = 0x16D4D8u;
    SET_GPR_U32(ctx, 31, 0x16D4E0u);
    ctx->pc = 0x1889D0u;
    if (runtime->hasFunction(0x1889D0u)) {
        auto targetFn = runtime->lookupFunction(0x1889D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D4E0u; }
        if (ctx->pc != 0x16D4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001889D0_0x1889d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D4E0u; }
        if (ctx->pc != 0x16D4E0u) { return; }
    }
    ctx->pc = 0x16D4E0u;
label_16d4e0:
    // 0x16d4e0: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x16d4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x16d4e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16d4e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d4e8: 0xc0621ac  jal         func_1886B0
    ctx->pc = 0x16D4E8u;
    SET_GPR_U32(ctx, 31, 0x16D4F0u);
    ctx->pc = 0x16D4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D4E8u;
            // 0x16d4ec: 0x2484c7c8  addiu       $a0, $a0, -0x3838 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1886B0u;
    if (runtime->hasFunction(0x1886B0u)) {
        auto targetFn = runtime->lookupFunction(0x1886B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D4F0u; }
        if (ctx->pc != 0x16D4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001886B0_0x1886b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D4F0u; }
        if (ctx->pc != 0x16D4F0u) { return; }
    }
    ctx->pc = 0x16D4F0u;
label_16d4f0:
    // 0x16d4f0: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x16d4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x16d4f4: 0x2484c850  addiu       $a0, $a0, -0x37B0
    ctx->pc = 0x16d4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953040));
    // 0x16d4f8: 0xc0621b2  jal         func_1886C8
    ctx->pc = 0x16D4F8u;
    SET_GPR_U32(ctx, 31, 0x16D500u);
    ctx->pc = 0x16D4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D4F8u;
            // 0x16d4fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1886C8u;
    if (runtime->hasFunction(0x1886C8u)) {
        auto targetFn = runtime->lookupFunction(0x1886C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D500u; }
        if (ctx->pc != 0x16D500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001886C8_0x1886c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D500u; }
        if (ctx->pc != 0x16D500u) { return; }
    }
    ctx->pc = 0x16D500u;
label_16d500:
    // 0x16d500: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x16d500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x16d504: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x16d504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x16d508: 0x2442d168  addiu       $v0, $v0, -0x2E98
    ctx->pc = 0x16d508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955368));
    // 0x16d50c: 0x2463d170  addiu       $v1, $v1, -0x2E90
    ctx->pc = 0x16d50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955376));
    // 0x16d510: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x16d510u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x16d514: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x16d514u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x16d518: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x16d518u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x16d51c: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16D51Cu;
    {
        const bool branch_taken_0x16d51c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D51Cu;
            // 0x16d520: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d51c) {
            ctx->pc = 0x16D560u;
            goto label_16d560;
        }
    }
    ctx->pc = 0x16D524u;
    // 0x16d524: 0x3c11005e  lui         $s1, 0x5E
    ctx->pc = 0x16d524u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)94 << 16));
    // 0x16d528: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x16d528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x16d52c: 0x2624aa40  addiu       $a0, $s1, -0x55C0
    ctx->pc = 0x16d52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945344));
    // 0x16d530: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x16d530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x16d534: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x16d534u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x16d538: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16d538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d53c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x16d53cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x16d540: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x16d540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x16d544: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x16d544u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x16d548: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x16d548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x16d54c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x16d54cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x16d550: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x16d550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x16d554: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x16d554u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x16d558: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x16D558u;
    {
        const bool branch_taken_0x16d558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D558u;
            // 0x16d55c: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d558) {
            ctx->pc = 0x16D598u;
            goto label_16d598;
        }
    }
    ctx->pc = 0x16D560u;
label_16d560:
    // 0x16d560: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x16d560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16d564: 0x3c11005e  lui         $s1, 0x5E
    ctx->pc = 0x16d564u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)94 << 16));
    // 0x16d568: 0x2624aa40  addiu       $a0, $s1, -0x55C0
    ctx->pc = 0x16d568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945344));
    // 0x16d56c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x16d56cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x16d570: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16d570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16d574: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x16d574u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x16d578: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x16d578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16d57c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x16d57cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x16d580: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x16d580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16d584: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x16d584u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x16d588: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x16d588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16d58c: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x16d58cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x16d590: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x16d590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x16d594: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x16d594u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
label_16d598:
    // 0x16d598: 0xc043094  jal         func_10C250
    ctx->pc = 0x16D598u;
    SET_GPR_U32(ctx, 31, 0x16D5A0u);
    ctx->pc = 0x16D59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D598u;
            // 0x16d59c: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C250u;
    if (runtime->hasFunction(0x10C250u)) {
        auto targetFn = runtime->lookupFunction(0x10C250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D5A0u; }
        if (ctx->pc != 0x16D5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C250_0x10c250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D5A0u; }
        if (ctx->pc != 0x16D5A0u) { return; }
    }
    ctx->pc = 0x16D5A0u;
label_16d5a0:
    // 0x16d5a0: 0x2610aad8  addiu       $s0, $s0, -0x5528
    ctx->pc = 0x16d5a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945496));
    // 0x16d5a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x16d5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d5a8: 0x0  nop
    ctx->pc = 0x16d5a8u;
    // NOP
    // 0x16d5ac: 0xc043098  jal         func_10C260
    ctx->pc = 0x16D5ACu;
    SET_GPR_U32(ctx, 31, 0x16D5B4u);
    ctx->pc = 0x16D5B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D5ACu;
            // 0x16d5b0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C260u;
    if (runtime->hasFunction(0x10C260u)) {
        auto targetFn = runtime->lookupFunction(0x10C260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D5B4u; }
        if (ctx->pc != 0x16D5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C260_0x10c260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D5B4u; }
        if (ctx->pc != 0x16D5B4u) { return; }
    }
    ctx->pc = 0x16D5B4u;
label_16d5b4:
    // 0x16d5b4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16d5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16d5b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x16d5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16d5bc: 0xc05b422  jal         func_16D088
    ctx->pc = 0x16D5BCu;
    SET_GPR_U32(ctx, 31, 0x16D5C4u);
    ctx->pc = 0x16D088u;
    if (runtime->hasFunction(0x16D088u)) {
        auto targetFn = runtime->lookupFunction(0x16D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D5C4u; }
        if (ctx->pc != 0x16D5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D088_0x16d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D5C4u; }
        if (ctx->pc != 0x16D5C4u) { return; }
    }
    ctx->pc = 0x16D5C4u;
label_16d5c4:
    // 0x16d5c4: 0xc05b47a  jal         func_16D1E8
    ctx->pc = 0x16D5C4u;
    SET_GPR_U32(ctx, 31, 0x16D5CCu);
    ctx->pc = 0x16D1E8u;
    if (runtime->hasFunction(0x16D1E8u)) {
        auto targetFn = runtime->lookupFunction(0x16D1E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D5CCu; }
        if (ctx->pc != 0x16D5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D1E8_0x16d1e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D5CCu; }
        if (ctx->pc != 0x16D5CCu) { return; }
    }
    ctx->pc = 0x16D5CCu;
label_16d5cc:
    // 0x16d5cc: 0xc05b49c  jal         func_16D270
    ctx->pc = 0x16D5CCu;
    SET_GPR_U32(ctx, 31, 0x16D5D4u);
    ctx->pc = 0x16D270u;
    if (runtime->hasFunction(0x16D270u)) {
        auto targetFn = runtime->lookupFunction(0x16D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D5D4u; }
        if (ctx->pc != 0x16D5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D270_0x16d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D5D4u; }
        if (ctx->pc != 0x16D5D4u) { return; }
    }
    ctx->pc = 0x16D5D4u;
label_16d5d4:
    // 0x16d5d4: 0xc05b4be  jal         func_16D2F8
    ctx->pc = 0x16D5D4u;
    SET_GPR_U32(ctx, 31, 0x16D5DCu);
    ctx->pc = 0x16D2F8u;
    if (runtime->hasFunction(0x16D2F8u)) {
        auto targetFn = runtime->lookupFunction(0x16D2F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D5DCu; }
        if (ctx->pc != 0x16D5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D2F8_0x16d2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D5DCu; }
        if (ctx->pc != 0x16D5DCu) { return; }
    }
    ctx->pc = 0x16D5DCu;
label_16d5dc:
    // 0x16d5dc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16d5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16d5e0: 0x2622aa40  addiu       $v0, $s1, -0x55C0
    ctx->pc = 0x16d5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945344));
    // 0x16d5e4: 0xc04307c  jal         func_10C1F0
    ctx->pc = 0x16D5E4u;
    SET_GPR_U32(ctx, 31, 0x16D5ECu);
    ctx->pc = 0x16D5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D5E4u;
            // 0x16d5e8: 0x8c450014  lw          $a1, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C1F0u;
    if (runtime->hasFunction(0x10C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x10C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D5ECu; }
        if (ctx->pc != 0x16D5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C1F0_0x10c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D5ECu; }
        if (ctx->pc != 0x16D5ECu) { return; }
    }
    ctx->pc = 0x16D5ECu;
label_16d5ec:
    // 0x16d5ec: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x16d5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x16d5f0: 0x24a5c9a8  addiu       $a1, $a1, -0x3658
    ctx->pc = 0x16d5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953384));
    // 0x16d5f4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x16d5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16d5f8: 0xc062176  jal         func_1885D8
    ctx->pc = 0x16D5F8u;
    SET_GPR_U32(ctx, 31, 0x16D600u);
    ctx->pc = 0x16D5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D5F8u;
            // 0x16d5fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1885D8u;
    if (runtime->hasFunction(0x1885D8u)) {
        auto targetFn = runtime->lookupFunction(0x1885D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D600u; }
        if (ctx->pc != 0x16D600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001885D8_0x1885d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D600u; }
        if (ctx->pc != 0x16D600u) { return; }
    }
    ctx->pc = 0x16D600u;
label_16d600:
    // 0x16d600: 0x2643aa34  addiu       $v1, $s2, -0x55CC
    ctx->pc = 0x16d600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945332));
label_16d604:
    // 0x16d604: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x16d604u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16d608: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16d608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d60c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x16d60cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d610: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x16d610u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16d614: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16d614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16d618: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x16d618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x16d61c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x16d61cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x16d620: 0x3e00008  jr          $ra
    ctx->pc = 0x16D620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D620u;
            // 0x16d624: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16D628u;
}
