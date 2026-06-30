#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CB450
// Address: 0x2cb450 - 0x2cb610
void sub_002CB450_0x2cb450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB450_0x2cb450");
#endif

    switch (ctx->pc) {
        case 0x2cb478u: goto label_2cb478;
        case 0x2cb490u: goto label_2cb490;
        case 0x2cb4b0u: goto label_2cb4b0;
        case 0x2cb540u: goto label_2cb540;
        case 0x2cb5a0u: goto label_2cb5a0;
        case 0x2cb5acu: goto label_2cb5ac;
        case 0x2cb5b8u: goto label_2cb5b8;
        case 0x2cb5c4u: goto label_2cb5c4;
        case 0x2cb5d0u: goto label_2cb5d0;
        case 0x2cb5dcu: goto label_2cb5dc;
        case 0x2cb5f4u: goto label_2cb5f4;
        default: break;
    }

    ctx->pc = 0x2cb450u;

    // 0x2cb450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cb450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cb454: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cb454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cb458: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cb458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cb45c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cb45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cb460: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2cb460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb464: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2cb464u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2cb468: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cb468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb46c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2cb46cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2cb470: 0xc0b4adc  jal         func_2D2B70
    ctx->pc = 0x2CB470u;
    SET_GPR_U32(ctx, 31, 0x2CB478u);
    ctx->pc = 0x2CB474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB470u;
            // 0x2cb474: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2B70u;
    if (runtime->hasFunction(0x2D2B70u)) {
        auto targetFn = runtime->lookupFunction(0x2D2B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB478u; }
        if (ctx->pc != 0x2CB478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2B70_0x2d2b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB478u; }
        if (ctx->pc != 0x2CB478u) { return; }
    }
    ctx->pc = 0x2CB478u;
label_2cb478:
    // 0x2cb478: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2cb478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb47c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2cb47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2cb480: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x2cb480u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2cb484: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x2cb484u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x2cb488: 0xc0b2e54  jal         func_2CB950
    ctx->pc = 0x2CB488u;
    SET_GPR_U32(ctx, 31, 0x2CB490u);
    ctx->pc = 0x2CB48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB488u;
            // 0x2cb48c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CB950u;
    if (runtime->hasFunction(0x2CB950u)) {
        auto targetFn = runtime->lookupFunction(0x2CB950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB490u; }
        if (ctx->pc != 0x2CB490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CB950_0x2cb950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB490u; }
        if (ctx->pc != 0x2CB490u) { return; }
    }
    ctx->pc = 0x2CB490u;
label_2cb490:
    // 0x2cb490: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cb490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cb494: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cb494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2cb498: 0x246301b0  addiu       $v1, $v1, 0x1B0
    ctx->pc = 0x2cb498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 432));
    // 0x2cb49c: 0x244201e8  addiu       $v0, $v0, 0x1E8
    ctx->pc = 0x2cb49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 488));
    // 0x2cb4a0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2cb4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2cb4a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cb4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb4a8: 0xc0b2e50  jal         func_2CB940
    ctx->pc = 0x2CB4A8u;
    SET_GPR_U32(ctx, 31, 0x2CB4B0u);
    ctx->pc = 0x2CB4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB4A8u;
            // 0x2cb4ac: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CB940u;
    if (runtime->hasFunction(0x2CB940u)) {
        auto targetFn = runtime->lookupFunction(0x2CB940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB4B0u; }
        if (ctx->pc != 0x2CB4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CB940_0x2cb940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB4B0u; }
        if (ctx->pc != 0x2CB4B0u) { return; }
    }
    ctx->pc = 0x2CB4B0u;
label_2cb4b0:
    // 0x2cb4b0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2cb4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2cb4b4: 0x3c090066  lui         $t1, 0x66
    ctx->pc = 0x2cb4b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)102 << 16));
    // 0x2cb4b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cb4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2cb4bc: 0x3c08006a  lui         $t0, 0x6A
    ctx->pc = 0x2cb4bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)106 << 16));
    // 0x2cb4c0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x2cb4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2cb4c4: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x2cb4c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x2cb4c8: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x2cb4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x2cb4cc: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x2cb4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x2cb4d0: 0x2529c4f0  addiu       $t1, $t1, -0x3B10
    ctx->pc = 0x2cb4d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294952176));
    // 0x2cb4d4: 0x25085cc0  addiu       $t0, $t0, 0x5CC0
    ctx->pc = 0x2cb4d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 23744));
    // 0x2cb4d8: 0x8c4a0968  lw          $t2, 0x968($v0)
    ctx->pc = 0x2cb4d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
    // 0x2cb4dc: 0x24e75cc8  addiu       $a3, $a3, 0x5CC8
    ctx->pc = 0x2cb4dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23752));
    // 0x2cb4e0: 0x24c65d00  addiu       $a2, $a2, 0x5D00
    ctx->pc = 0x2cb4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23808));
    // 0x2cb4e4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2cb4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2cb4e8: 0x24a53620  addiu       $a1, $a1, 0x3620
    ctx->pc = 0x2cb4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13856));
    // 0x2cb4ec: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2cb4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2cb4f0: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x2cb4f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x2cb4f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cb4f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb4f8: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x2cb4f8u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2cb4fc: 0xa209009c  sb          $t1, 0x9C($s0)
    ctx->pc = 0x2cb4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 156), (uint8_t)GPR_U32(ctx, 9));
    // 0x2cb500: 0xae0800a0  sw          $t0, 0xA0($s0)
    ctx->pc = 0x2cb500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 8));
    // 0x2cb504: 0xae07000c  sw          $a3, 0xC($s0)
    ctx->pc = 0x2cb504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 7));
    // 0x2cb508: 0xae060070  sw          $a2, 0x70($s0)
    ctx->pc = 0x2cb508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 6));
    // 0x2cb50c: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x2cb50cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x2cb510: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x2cb510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x2cb514: 0x8c840e80  lw          $a0, 0xE80($a0)
    ctx->pc = 0x2cb514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3712)));
    // 0x2cb518: 0x8c840968  lw          $a0, 0x968($a0)
    ctx->pc = 0x2cb518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2408)));
    // 0x2cb51c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2cb51cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2cb520: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2cb520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2cb524: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2cb524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb528: 0xe4603fe0  swc1        $f0, 0x3FE0($v1)
    ctx->pc = 0x2cb528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16352), bits); }
    // 0x2cb52c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cb52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb530: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cb530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb534: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cb534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb538: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB538u;
            // 0x2cb53c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CB540u;
label_2cb540:
    // 0x2cb540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cb540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cb544: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cb544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cb548: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cb548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cb54c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cb54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cb550: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cb550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb554: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2CB554u;
    {
        const bool branch_taken_0x2cb554 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB554u;
            // 0x2cb558: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb554) {
            ctx->pc = 0x2CB5F4u;
            goto label_2cb5f4;
        }
    }
    ctx->pc = 0x2CB55Cu;
    // 0x2cb55c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cb55cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cb560: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cb560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2cb564: 0x246301b0  addiu       $v1, $v1, 0x1B0
    ctx->pc = 0x2cb564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 432));
    // 0x2cb568: 0x244201e8  addiu       $v0, $v0, 0x1E8
    ctx->pc = 0x2cb568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 488));
    // 0x2cb56c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2cb56cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2cb570: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2CB570u;
    {
        const bool branch_taken_0x2cb570 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB570u;
            // 0x2cb574: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb570) {
            ctx->pc = 0x2CB5DCu;
            goto label_2cb5dc;
        }
    }
    ctx->pc = 0x2CB578u;
    // 0x2cb578: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cb578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cb57c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cb57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2cb580: 0x24630160  addiu       $v1, $v1, 0x160
    ctx->pc = 0x2cb580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 352));
    // 0x2cb584: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2cb584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x2cb588: 0x24420198  addiu       $v0, $v0, 0x198
    ctx->pc = 0x2cb588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 408));
    // 0x2cb58c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2cb58cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2cb590: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2cb590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2cb594: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2cb594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2cb598: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2CB598u;
    SET_GPR_U32(ctx, 31, 0x2CB5A0u);
    ctx->pc = 0x2CB59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB598u;
            // 0x2cb59c: 0x24a5b6e0  addiu       $a1, $a1, -0x4920 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB5A0u; }
        if (ctx->pc != 0x2CB5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB5A0u; }
        if (ctx->pc != 0x2CB5A0u) { return; }
    }
    ctx->pc = 0x2CB5A0u;
label_2cb5a0:
    // 0x2cb5a0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2cb5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2cb5a4: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x2CB5A4u;
    SET_GPR_U32(ctx, 31, 0x2CB5ACu);
    ctx->pc = 0x2CB5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB5A4u;
            // 0x2cb5a8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB5ACu; }
        if (ctx->pc != 0x2CB5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB5ACu; }
        if (ctx->pc != 0x2CB5ACu) { return; }
    }
    ctx->pc = 0x2CB5ACu;
label_2cb5ac:
    // 0x2cb5ac: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2cb5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2cb5b0: 0xc0b2d9c  jal         func_2CB670
    ctx->pc = 0x2CB5B0u;
    SET_GPR_U32(ctx, 31, 0x2CB5B8u);
    ctx->pc = 0x2CB5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB5B0u;
            // 0x2cb5b4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CB670u;
    if (runtime->hasFunction(0x2CB670u)) {
        auto targetFn = runtime->lookupFunction(0x2CB670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB5B8u; }
        if (ctx->pc != 0x2CB5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CB670_0x2cb670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB5B8u; }
        if (ctx->pc != 0x2CB5B8u) { return; }
    }
    ctx->pc = 0x2CB5B8u;
label_2cb5b8:
    // 0x2cb5b8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2cb5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2cb5bc: 0xc0b2d9c  jal         func_2CB670
    ctx->pc = 0x2CB5BCu;
    SET_GPR_U32(ctx, 31, 0x2CB5C4u);
    ctx->pc = 0x2CB5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB5BCu;
            // 0x2cb5c0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CB670u;
    if (runtime->hasFunction(0x2CB670u)) {
        auto targetFn = runtime->lookupFunction(0x2CB670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB5C4u; }
        if (ctx->pc != 0x2CB5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CB670_0x2cb670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB5C4u; }
        if (ctx->pc != 0x2CB5C4u) { return; }
    }
    ctx->pc = 0x2CB5C4u;
label_2cb5c4:
    // 0x2cb5c4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2cb5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2cb5c8: 0xc0b2d84  jal         func_2CB610
    ctx->pc = 0x2CB5C8u;
    SET_GPR_U32(ctx, 31, 0x2CB5D0u);
    ctx->pc = 0x2CB5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB5C8u;
            // 0x2cb5cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CB610u;
    if (runtime->hasFunction(0x2CB610u)) {
        auto targetFn = runtime->lookupFunction(0x2CB610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB5D0u; }
        if (ctx->pc != 0x2CB5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CB610_0x2cb610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB5D0u; }
        if (ctx->pc != 0x2CB5D0u) { return; }
    }
    ctx->pc = 0x2CB5D0u;
label_2cb5d0:
    // 0x2cb5d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cb5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb5d4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2CB5D4u;
    SET_GPR_U32(ctx, 31, 0x2CB5DCu);
    ctx->pc = 0x2CB5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB5D4u;
            // 0x2cb5d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB5DCu; }
        if (ctx->pc != 0x2CB5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB5DCu; }
        if (ctx->pc != 0x2CB5DCu) { return; }
    }
    ctx->pc = 0x2CB5DCu;
label_2cb5dc:
    // 0x2cb5dc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2cb5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2cb5e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cb5e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2cb5e4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB5E4u;
    {
        const bool branch_taken_0x2cb5e4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cb5e4) {
            ctx->pc = 0x2CB5E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB5E4u;
            // 0x2cb5e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CB5F8u;
            goto label_2cb5f8;
        }
    }
    ctx->pc = 0x2CB5ECu;
    // 0x2cb5ec: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2CB5ECu;
    SET_GPR_U32(ctx, 31, 0x2CB5F4u);
    ctx->pc = 0x2CB5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB5ECu;
            // 0x2cb5f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB5F4u; }
        if (ctx->pc != 0x2CB5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB5F4u; }
        if (ctx->pc != 0x2CB5F4u) { return; }
    }
    ctx->pc = 0x2CB5F4u;
label_2cb5f4:
    // 0x2cb5f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cb5f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cb5f8:
    // 0x2cb5f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cb5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb5fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cb5fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb600: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cb600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb604: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB604u;
            // 0x2cb608: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CB60Cu;
    // 0x2cb60c: 0x0  nop
    ctx->pc = 0x2cb60cu;
    // NOP
}
