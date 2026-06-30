#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B8500
// Address: 0x2b8500 - 0x2b8700
void sub_002B8500_0x2b8500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8500_0x2b8500");
#endif

    switch (ctx->pc) {
        case 0x2b8528u: goto label_2b8528;
        case 0x2b8548u: goto label_2b8548;
        case 0x2b8578u: goto label_2b8578;
        case 0x2b8594u: goto label_2b8594;
        case 0x2b85acu: goto label_2b85ac;
        case 0x2b8600u: goto label_2b8600;
        case 0x2b860cu: goto label_2b860c;
        case 0x2b8630u: goto label_2b8630;
        case 0x2b8690u: goto label_2b8690;
        case 0x2b869cu: goto label_2b869c;
        case 0x2b86a8u: goto label_2b86a8;
        case 0x2b86b4u: goto label_2b86b4;
        case 0x2b86c0u: goto label_2b86c0;
        case 0x2b86ccu: goto label_2b86cc;
        case 0x2b86e4u: goto label_2b86e4;
        default: break;
    }

    ctx->pc = 0x2b8500u;

    // 0x2b8500: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b8500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b8504: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2b8504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2b8508: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b8508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b850c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x2b850cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x2b8510: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b8510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b8514: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b8514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b8518: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b8518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b851c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b851cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8520: 0xc0ae27c  jal         func_2B89F0
    ctx->pc = 0x2B8520u;
    SET_GPR_U32(ctx, 31, 0x2B8528u);
    ctx->pc = 0x2B8524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8520u;
            // 0x2b8524: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B89F0u;
    if (runtime->hasFunction(0x2B89F0u)) {
        auto targetFn = runtime->lookupFunction(0x2B89F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8528u; }
        if (ctx->pc != 0x2B8528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B89F0_0x2b89f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8528u; }
        if (ctx->pc != 0x2B8528u) { return; }
    }
    ctx->pc = 0x2B8528u;
label_2b8528:
    // 0x2b8528: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b8528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2b852c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b852cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b8530: 0x24632980  addiu       $v1, $v1, 0x2980
    ctx->pc = 0x2b8530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10624));
    // 0x2b8534: 0x244229b8  addiu       $v0, $v0, 0x29B8
    ctx->pc = 0x2b8534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10680));
    // 0x2b8538: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2b8538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2b853c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b853cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8540: 0xc0ae278  jal         func_2B89E0
    ctx->pc = 0x2B8540u;
    SET_GPR_U32(ctx, 31, 0x2B8548u);
    ctx->pc = 0x2B8544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8540u;
            // 0x2b8544: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B89E0u;
    if (runtime->hasFunction(0x2B89E0u)) {
        auto targetFn = runtime->lookupFunction(0x2B89E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8548u; }
        if (ctx->pc != 0x2B8548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B89E0_0x2b89e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8548u; }
        if (ctx->pc != 0x2B8548u) { return; }
    }
    ctx->pc = 0x2B8548u;
label_2b8548:
    // 0x2b8548: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b8548u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b854c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2b854cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b8550: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b8550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b8554: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x2b8554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
    // 0x2b8558: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2b8558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2b855c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b855cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b8560: 0x24422968  addiu       $v0, $v0, 0x2968
    ctx->pc = 0x2b8560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10600));
    // 0x2b8564: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2b8564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x2b8568: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2b8568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2b856c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2b856cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x2b8570: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x2B8570u;
    SET_GPR_U32(ctx, 31, 0x2B8578u);
    ctx->pc = 0x2B8574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8570u;
            // 0x2b8574: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8578u; }
        if (ctx->pc != 0x2B8578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8578u; }
        if (ctx->pc != 0x2B8578u) { return; }
    }
    ctx->pc = 0x2B8578u;
label_2b8578:
    // 0x2b8578: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2b8578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b857c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b857cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8580: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B8580u;
    {
        const bool branch_taken_0x2b8580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8580u;
            // 0x2b8584: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8580) {
            ctx->pc = 0x2B8598u;
            goto label_2b8598;
        }
    }
    ctx->pc = 0x2B8588u;
    // 0x2b8588: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2b8588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2b858c: 0xc0827ac  jal         func_209EB0
    ctx->pc = 0x2B858Cu;
    SET_GPR_U32(ctx, 31, 0x2B8594u);
    ctx->pc = 0x2B8590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B858Cu;
            // 0x2b8590: 0xc44cc8a0  lwc1        $f12, -0x3760($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8594u; }
        if (ctx->pc != 0x2B8594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8594u; }
        if (ctx->pc != 0x2B8594u) { return; }
    }
    ctx->pc = 0x2B8594u;
label_2b8594:
    // 0x2b8594: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b8594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b8598:
    // 0x2b8598: 0xae240060  sw          $a0, 0x60($s1)
    ctx->pc = 0x2b8598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 4));
    // 0x2b859c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b859cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b85a0: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x2b85a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x2b85a4: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2B85A4u;
    SET_GPR_U32(ctx, 31, 0x2B85ACu);
    ctx->pc = 0x2B85A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B85A4u;
            // 0x2b85a8: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B85ACu; }
        if (ctx->pc != 0x2B85ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B85ACu; }
        if (ctx->pc != 0x2B85ACu) { return; }
    }
    ctx->pc = 0x2B85ACu;
label_2b85ac:
    // 0x2b85ac: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x2b85acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x2b85b0: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x2b85b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
    // 0x2b85b4: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x2b85b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2b85b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b85b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b85bc: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x2b85bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2b85c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b85c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b85c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b85c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b85c8: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x2b85c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x2b85cc: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2b85ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b85d0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2b85d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b85d4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2b85d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b85d8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x2b85d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x2b85dc: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x2b85dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x2b85e0: 0x8e22007c  lw          $v0, 0x7C($s1)
    ctx->pc = 0x2b85e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x2b85e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b85e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b85e8: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x2b85e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
    // 0x2b85ec: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x2b85ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2b85f0: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x2b85f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x2b85f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b85f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b85f8: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2B85F8u;
    SET_GPR_U32(ctx, 31, 0x2B8600u);
    ctx->pc = 0x2B85FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B85F8u;
            // 0x2b85fc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8600u; }
        if (ctx->pc != 0x2B8600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8600u; }
        if (ctx->pc != 0x2B8600u) { return; }
    }
    ctx->pc = 0x2B8600u;
label_2b8600:
    // 0x2b8600: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x2b8600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2b8604: 0xc0d879c  jal         func_361E70
    ctx->pc = 0x2B8604u;
    SET_GPR_U32(ctx, 31, 0x2B860Cu);
    ctx->pc = 0x2B8608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8604u;
            // 0x2b8608: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B860Cu; }
        if (ctx->pc != 0x2B860Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B860Cu; }
        if (ctx->pc != 0x2B860Cu) { return; }
    }
    ctx->pc = 0x2B860Cu;
label_2b860c:
    // 0x2b860c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b860cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8610: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b8610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8614: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b8614u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8618: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b8618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b861c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B861Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B861Cu;
            // 0x2b8620: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B8624u;
    // 0x2b8624: 0x0  nop
    ctx->pc = 0x2b8624u;
    // NOP
    // 0x2b8628: 0x0  nop
    ctx->pc = 0x2b8628u;
    // NOP
    // 0x2b862c: 0x0  nop
    ctx->pc = 0x2b862cu;
    // NOP
label_2b8630:
    // 0x2b8630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b8630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b8634: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b8634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b8638: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b8638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b863c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b863cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b8640: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b8640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8644: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2B8644u;
    {
        const bool branch_taken_0x2b8644 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8644u;
            // 0x2b8648: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8644) {
            ctx->pc = 0x2B86E4u;
            goto label_2b86e4;
        }
    }
    ctx->pc = 0x2B864Cu;
    // 0x2b864c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b864cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2b8650: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b8650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b8654: 0x24632980  addiu       $v1, $v1, 0x2980
    ctx->pc = 0x2b8654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10624));
    // 0x2b8658: 0x244229b8  addiu       $v0, $v0, 0x29B8
    ctx->pc = 0x2b8658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10680));
    // 0x2b865c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b865cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2b8660: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B8660u;
    {
        const bool branch_taken_0x2b8660 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8660u;
            // 0x2b8664: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8660) {
            ctx->pc = 0x2B86CCu;
            goto label_2b86cc;
        }
    }
    ctx->pc = 0x2B8668u;
    // 0x2b8668: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b8668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2b866c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b866cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b8670: 0x246328e0  addiu       $v1, $v1, 0x28E0
    ctx->pc = 0x2b8670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10464));
    // 0x2b8674: 0x3c050052  lui         $a1, 0x52
    ctx->pc = 0x2b8674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)82 << 16));
    // 0x2b8678: 0x24422918  addiu       $v0, $v0, 0x2918
    ctx->pc = 0x2b8678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10520));
    // 0x2b867c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b867cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2b8680: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2b8680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2b8684: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2b8684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2b8688: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2B8688u;
    SET_GPR_U32(ctx, 31, 0x2B8690u);
    ctx->pc = 0x2B868Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8688u;
            // 0x2b868c: 0x24a552f0  addiu       $a1, $a1, 0x52F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8690u; }
        if (ctx->pc != 0x2B8690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8690u; }
        if (ctx->pc != 0x2B8690u) { return; }
    }
    ctx->pc = 0x2B8690u;
label_2b8690:
    // 0x2b8690: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2b8690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2b8694: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x2B8694u;
    SET_GPR_U32(ctx, 31, 0x2B869Cu);
    ctx->pc = 0x2B8698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8694u;
            // 0x2b8698: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B869Cu; }
        if (ctx->pc != 0x2B869Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B869Cu; }
        if (ctx->pc != 0x2B869Cu) { return; }
    }
    ctx->pc = 0x2B869Cu;
label_2b869c:
    // 0x2b869c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2b869cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2b86a0: 0xc0ae204  jal         func_2B8810
    ctx->pc = 0x2B86A0u;
    SET_GPR_U32(ctx, 31, 0x2B86A8u);
    ctx->pc = 0x2B86A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B86A0u;
            // 0x2b86a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8810u;
    if (runtime->hasFunction(0x2B8810u)) {
        auto targetFn = runtime->lookupFunction(0x2B8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B86A8u; }
        if (ctx->pc != 0x2B86A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8810_0x2b8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B86A8u; }
        if (ctx->pc != 0x2B86A8u) { return; }
    }
    ctx->pc = 0x2B86A8u;
label_2b86a8:
    // 0x2b86a8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2b86a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2b86ac: 0xc0ae204  jal         func_2B8810
    ctx->pc = 0x2B86ACu;
    SET_GPR_U32(ctx, 31, 0x2B86B4u);
    ctx->pc = 0x2B86B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B86ACu;
            // 0x2b86b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8810u;
    if (runtime->hasFunction(0x2B8810u)) {
        auto targetFn = runtime->lookupFunction(0x2B8810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B86B4u; }
        if (ctx->pc != 0x2B86B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8810_0x2b8810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B86B4u; }
        if (ctx->pc != 0x2B86B4u) { return; }
    }
    ctx->pc = 0x2B86B4u;
label_2b86b4:
    // 0x2b86b4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2b86b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2b86b8: 0xc0ae1ec  jal         func_2B87B0
    ctx->pc = 0x2B86B8u;
    SET_GPR_U32(ctx, 31, 0x2B86C0u);
    ctx->pc = 0x2B86BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B86B8u;
            // 0x2b86bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B87B0u;
    if (runtime->hasFunction(0x2B87B0u)) {
        auto targetFn = runtime->lookupFunction(0x2B87B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B86C0u; }
        if (ctx->pc != 0x2B86C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B87B0_0x2b87b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B86C0u; }
        if (ctx->pc != 0x2B86C0u) { return; }
    }
    ctx->pc = 0x2B86C0u;
label_2b86c0:
    // 0x2b86c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b86c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b86c4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2B86C4u;
    SET_GPR_U32(ctx, 31, 0x2B86CCu);
    ctx->pc = 0x2B86C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B86C4u;
            // 0x2b86c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B86CCu; }
        if (ctx->pc != 0x2B86CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B86CCu; }
        if (ctx->pc != 0x2B86CCu) { return; }
    }
    ctx->pc = 0x2B86CCu;
label_2b86cc:
    // 0x2b86cc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2b86ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2b86d0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b86d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2b86d4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B86D4u;
    {
        const bool branch_taken_0x2b86d4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b86d4) {
            ctx->pc = 0x2B86D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B86D4u;
            // 0x2b86d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B86E8u;
            goto label_2b86e8;
        }
    }
    ctx->pc = 0x2B86DCu;
    // 0x2b86dc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2B86DCu;
    SET_GPR_U32(ctx, 31, 0x2B86E4u);
    ctx->pc = 0x2B86E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B86DCu;
            // 0x2b86e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B86E4u; }
        if (ctx->pc != 0x2B86E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B86E4u; }
        if (ctx->pc != 0x2B86E4u) { return; }
    }
    ctx->pc = 0x2B86E4u;
label_2b86e4:
    // 0x2b86e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b86e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b86e8:
    // 0x2b86e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b86e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b86ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b86ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b86f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b86f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b86f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B86F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B86F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B86F4u;
            // 0x2b86f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B86FCu;
    // 0x2b86fc: 0x0  nop
    ctx->pc = 0x2b86fcu;
    // NOP
}
