#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FC4F0
// Address: 0x2fc4f0 - 0x2fc600
void sub_002FC4F0_0x2fc4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC4F0_0x2fc4f0");
#endif

    switch (ctx->pc) {
        case 0x2fc540u: goto label_2fc540;
        case 0x2fc5a4u: goto label_2fc5a4;
        case 0x2fc5c4u: goto label_2fc5c4;
        default: break;
    }

    ctx->pc = 0x2fc4f0u;

    // 0x2fc4f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fc4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fc4f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fc4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2fc4f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fc4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fc4fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fc4fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fc500: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fc500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fc504: 0x24423950  addiu       $v0, $v0, 0x3950
    ctx->pc = 0x2fc504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14672));
    // 0x2fc508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fc508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fc50c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2fc50cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2fc510: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2fc510u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2fc514: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fc514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc518: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x2fc518u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x2fc51c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2fc51cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2fc520: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2fc520u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x2fc524: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x2fc524u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x2fc528: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2fc528u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2fc52c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2fc52cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2fc530: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2fc530u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2fc534: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x2fc534u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x2fc538: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2FC538u;
    SET_GPR_U32(ctx, 31, 0x2FC540u);
    ctx->pc = 0x2FC53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC538u;
            // 0x2fc53c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC540u; }
        if (ctx->pc != 0x2FC540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC540u; }
        if (ctx->pc != 0x2FC540u) { return; }
    }
    ctx->pc = 0x2FC540u;
label_2fc540:
    // 0x2fc540: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x2fc540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x2fc544: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2fc544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2fc548: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x2fc548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x2fc54c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fc54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2fc550: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2fc550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2fc554: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x2fc554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x2fc558: 0xae04003c  sw          $a0, 0x3C($s0)
    ctx->pc = 0x2fc558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 4));
    // 0x2fc55c: 0x3c06437f  lui         $a2, 0x437F
    ctx->pc = 0x2fc55cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17279 << 16));
    // 0x2fc560: 0xae040040  sw          $a0, 0x40($s0)
    ctx->pc = 0x2fc560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 4));
    // 0x2fc564: 0x24a5aae0  addiu       $a1, $a1, -0x5520
    ctx->pc = 0x2fc564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945504));
    // 0x2fc568: 0xae040044  sw          $a0, 0x44($s0)
    ctx->pc = 0x2fc568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 4));
    // 0x2fc56c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2fc56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fc570: 0xae060048  sw          $a2, 0x48($s0)
    ctx->pc = 0x2fc570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 6));
    // 0x2fc574: 0x2442b380  addiu       $v0, $v0, -0x4C80
    ctx->pc = 0x2fc574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947712));
    // 0x2fc578: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2fc578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x2fc57c: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x2fc57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x2fc580: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2fc580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2fc584: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x2fc584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x2fc588: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2fc588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2fc58c: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x2fc58cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x2fc590: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x2fc590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x2fc594: 0xa2000064  sb          $zero, 0x64($s0)
    ctx->pc = 0x2fc594u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fc598: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2fc598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2fc59c: 0xc040180  jal         func_100600
    ctx->pc = 0x2FC59Cu;
    SET_GPR_U32(ctx, 31, 0x2FC5A4u);
    ctx->pc = 0x2FC5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC59Cu;
            // 0x2fc5a0: 0xae000070  sw          $zero, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC5A4u; }
        if (ctx->pc != 0x2FC5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC5A4u; }
        if (ctx->pc != 0x2FC5A4u) { return; }
    }
    ctx->pc = 0x2FC5A4u;
label_2fc5a4:
    // 0x2fc5a4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2FC5A4u;
    {
        const bool branch_taken_0x2fc5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC5A4u;
            // 0x2fc5a8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc5a4) {
            ctx->pc = 0x2FC5E4u;
            goto label_2fc5e4;
        }
    }
    ctx->pc = 0x2FC5ACu;
    // 0x2fc5ac: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2fc5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2fc5b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fc5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc5b4: 0x34458a92  ori         $a1, $v0, 0x8A92
    ctx->pc = 0x2fc5b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35474);
    // 0x2fc5b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2fc5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fc5bc: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2FC5BCu;
    SET_GPR_U32(ctx, 31, 0x2FC5C4u);
    ctx->pc = 0x2FC5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC5BCu;
            // 0x2fc5c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC5C4u; }
        if (ctx->pc != 0x2FC5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC5C4u; }
        if (ctx->pc != 0x2FC5C4u) { return; }
    }
    ctx->pc = 0x2FC5C4u;
label_2fc5c4:
    // 0x2fc5c4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fc5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2fc5c8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fc5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2fc5cc: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2fc5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2fc5d0: 0x2442b350  addiu       $v0, $v0, -0x4CB0
    ctx->pc = 0x2fc5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947664));
    // 0x2fc5d4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2fc5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2fc5d8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2fc5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2fc5dc: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x2fc5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
    // 0x2fc5e0: 0xa22000a0  sb          $zero, 0xA0($s1)
    ctx->pc = 0x2fc5e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 160), (uint8_t)GPR_U32(ctx, 0));
label_2fc5e4:
    // 0x2fc5e4: 0xae110070  sw          $s1, 0x70($s0)
    ctx->pc = 0x2fc5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 17));
    // 0x2fc5e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2fc5e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc5ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fc5ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fc5f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fc5f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fc5f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fc5f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC5F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC5F8u;
            // 0x2fc5fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FC600u;
}
