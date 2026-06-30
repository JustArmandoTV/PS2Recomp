#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C54E0
// Address: 0x3c54e0 - 0x3c5660
void sub_003C54E0_0x3c54e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C54E0_0x3c54e0");
#endif

    switch (ctx->pc) {
        case 0x3c5514u: goto label_3c5514;
        case 0x3c5568u: goto label_3c5568;
        case 0x3c5578u: goto label_3c5578;
        case 0x3c55c4u: goto label_3c55c4;
        case 0x3c55d4u: goto label_3c55d4;
        case 0x3c55dcu: goto label_3c55dc;
        case 0x3c55f0u: goto label_3c55f0;
        case 0x3c5604u: goto label_3c5604;
        case 0x3c5614u: goto label_3c5614;
        case 0x3c561cu: goto label_3c561c;
        case 0x3c5630u: goto label_3c5630;
        case 0x3c5644u: goto label_3c5644;
        default: break;
    }

    ctx->pc = 0x3c54e0u;

    // 0x3c54e0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x3c54e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x3c54e4: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x3c54e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
    // 0x3c54e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c54e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3c54ec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3c54ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3c54f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c54f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3c54f4: 0x24c6f590  addiu       $a2, $a2, -0xA70
    ctx->pc = 0x3c54f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964624));
    // 0x3c54f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c54f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c54fc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3c54fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3c5500: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c5500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c5504: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x3c5504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
    // 0x3c5508: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c5508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c550c: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x3c550cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3c5510: 0x90470029  lbu         $a3, 0x29($v0)
    ctx->pc = 0x3c5510u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_3c5514:
    // 0x3c5514: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3c5514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3c5518: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3c5518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3c551c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x3c551cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3c5520: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3c5520u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3c5524: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3c5524u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3c5528: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x3c5528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x3c552c: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3C552Cu;
    {
        const bool branch_taken_0x3c552c = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x3C5530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C552Cu;
            // 0x3c5530: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c552c) {
            ctx->pc = 0x3C5514u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3c5514;
        }
    }
    ctx->pc = 0x3C5534u;
    // 0x3c5534: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3c5534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x3c5538: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x3c5538u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3c553c: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x3c553cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
    // 0x3c5540: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3c5540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3c5544: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3c5544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3c5548: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3c5548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3c554c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x3c554cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x3c5550: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3c5550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3c5554: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x3c5554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x3c5558: 0x24720040  addiu       $s2, $v1, 0x40
    ctx->pc = 0x3c5558u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x3c555c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3c555cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c5560: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x3C5560u;
    SET_GPR_U32(ctx, 31, 0x3C5568u);
    ctx->pc = 0x3C5564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5560u;
            // 0x3c5564: 0x24510010  addiu       $s1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5568u; }
        if (ctx->pc != 0x3C5568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5568u; }
        if (ctx->pc != 0x3C5568u) { return; }
    }
    ctx->pc = 0x3C5568u;
label_3c5568:
    // 0x3c5568: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x3c5568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x3c556c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c556cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5570: 0xc04cd60  jal         func_133580
    ctx->pc = 0x3C5570u;
    SET_GPR_U32(ctx, 31, 0x3C5578u);
    ctx->pc = 0x3C5574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5570u;
            // 0x3c5574: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5578u; }
        if (ctx->pc != 0x3C5578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5578u; }
        if (ctx->pc != 0x3C5578u) { return; }
    }
    ctx->pc = 0x3C5578u;
label_3c5578:
    // 0x3c5578: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3c5578u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x3c557c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3c557cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5580: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3c5580u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x3c5584: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c5584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5588: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x3c5588u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x3c558c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c558cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5590: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x3c5590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5594: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c5594u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5598: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3c5598u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3c559c: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x3c559cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x3c55a0: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x3c55a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c55a4: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x3c55a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x3c55a8: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x3c55a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
    // 0x3c55ac: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x3c55acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c55b0: 0xe6400048  swc1        $f0, 0x48($s2)
    ctx->pc = 0x3c55b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
    // 0x3c55b4: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x3c55b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c55b8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3c55b8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3c55bc: 0xc051868  jal         func_1461A0
    ctx->pc = 0x3C55BCu;
    SET_GPR_U32(ctx, 31, 0x3C55C4u);
    ctx->pc = 0x3C55C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C55BCu;
            // 0x3c55c0: 0xe640004c  swc1        $f0, 0x4C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1461A0u;
    if (runtime->hasFunction(0x1461A0u)) {
        auto targetFn = runtime->lookupFunction(0x1461A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C55C4u; }
        if (ctx->pc != 0x3C55C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001461A0_0x1461a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C55C4u; }
        if (ctx->pc != 0x3C55C4u) { return; }
    }
    ctx->pc = 0x3C55C4u;
label_3c55c4:
    // 0x3c55c4: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x3c55c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x3c55c8: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x3c55c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x3c55cc: 0xc0506ac  jal         func_141AB0
    ctx->pc = 0x3C55CCu;
    SET_GPR_U32(ctx, 31, 0x3C55D4u);
    ctx->pc = 0x3C55D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C55CCu;
            // 0x3c55d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C55D4u; }
        if (ctx->pc != 0x3C55D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C55D4u; }
        if (ctx->pc != 0x3C55D4u) { return; }
    }
    ctx->pc = 0x3C55D4u;
label_3c55d4:
    // 0x3c55d4: 0xc0508b0  jal         func_1422C0
    ctx->pc = 0x3C55D4u;
    SET_GPR_U32(ctx, 31, 0x3C55DCu);
    ctx->pc = 0x3C55D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C55D4u;
            // 0x3c55d8: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422C0u;
    if (runtime->hasFunction(0x1422C0u)) {
        auto targetFn = runtime->lookupFunction(0x1422C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C55DCu; }
        if (ctx->pc != 0x3C55DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422C0_0x1422c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C55DCu; }
        if (ctx->pc != 0x3C55DCu) { return; }
    }
    ctx->pc = 0x3C55DCu;
label_3c55dc:
    // 0x3c55dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3c55dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c55e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c55e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c55e4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3c55e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c55e8: 0xc0506b8  jal         func_141AE0
    ctx->pc = 0x3C55E8u;
    SET_GPR_U32(ctx, 31, 0x3C55F0u);
    ctx->pc = 0x3C55ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C55E8u;
            // 0x3c55ec: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AE0u;
    if (runtime->hasFunction(0x141AE0u)) {
        auto targetFn = runtime->lookupFunction(0x141AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C55F0u; }
        if (ctx->pc != 0x3C55F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AE0_0x141ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C55F0u; }
        if (ctx->pc != 0x3C55F0u) { return; }
    }
    ctx->pc = 0x3C55F0u;
label_3c55f0:
    // 0x3c55f0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3c55f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3c55f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c55f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c55f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3c55f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c55fc: 0xc0508b4  jal         func_1422D0
    ctx->pc = 0x3C55FCu;
    SET_GPR_U32(ctx, 31, 0x3C5604u);
    ctx->pc = 0x3C5600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C55FCu;
            // 0x3c5600: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422D0u;
    if (runtime->hasFunction(0x1422D0u)) {
        auto targetFn = runtime->lookupFunction(0x1422D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5604u; }
        if (ctx->pc != 0x3C5604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422D0_0x1422d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5604u; }
        if (ctx->pc != 0x3C5604u) { return; }
    }
    ctx->pc = 0x3C5604u;
label_3c5604:
    // 0x3c5604: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c5604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5608: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3c5608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c560c: 0xc050a08  jal         func_142820
    ctx->pc = 0x3C560Cu;
    SET_GPR_U32(ctx, 31, 0x3C5614u);
    ctx->pc = 0x3C5610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C560Cu;
            // 0x3c5610: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142820u;
    if (runtime->hasFunction(0x142820u)) {
        auto targetFn = runtime->lookupFunction(0x142820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5614u; }
        if (ctx->pc != 0x3C5614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142820_0x142820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5614u; }
        if (ctx->pc != 0x3C5614u) { return; }
    }
    ctx->pc = 0x3C5614u;
label_3c5614:
    // 0x3c5614: 0xc050a88  jal         func_142A20
    ctx->pc = 0x3C5614u;
    SET_GPR_U32(ctx, 31, 0x3C561Cu);
    ctx->pc = 0x142A20u;
    if (runtime->hasFunction(0x142A20u)) {
        auto targetFn = runtime->lookupFunction(0x142A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C561Cu; }
        if (ctx->pc != 0x3C561Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142A20_0x142a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C561Cu; }
        if (ctx->pc != 0x3C561Cu) { return; }
    }
    ctx->pc = 0x3C561Cu;
label_3c561c:
    // 0x3c561c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3c561cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c5620: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3c5620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5624: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c5624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5628: 0xc0506b8  jal         func_141AE0
    ctx->pc = 0x3C5628u;
    SET_GPR_U32(ctx, 31, 0x3C5630u);
    ctx->pc = 0x3C562Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5628u;
            // 0x3c562c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AE0u;
    if (runtime->hasFunction(0x141AE0u)) {
        auto targetFn = runtime->lookupFunction(0x141AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5630u; }
        if (ctx->pc != 0x3C5630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AE0_0x141ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5630u; }
        if (ctx->pc != 0x3C5630u) { return; }
    }
    ctx->pc = 0x3C5630u;
label_3c5630:
    // 0x3c5630: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3c5630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c5634: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3c5634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3c5638: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3c5638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c563c: 0xc051868  jal         func_1461A0
    ctx->pc = 0x3C563Cu;
    SET_GPR_U32(ctx, 31, 0x3C5644u);
    ctx->pc = 0x3C5640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C563Cu;
            // 0x3c5640: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1461A0u;
    if (runtime->hasFunction(0x1461A0u)) {
        auto targetFn = runtime->lookupFunction(0x1461A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5644u; }
        if (ctx->pc != 0x3C5644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001461A0_0x1461a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5644u; }
        if (ctx->pc != 0x3C5644u) { return; }
    }
    ctx->pc = 0x3C5644u;
label_3c5644:
    // 0x3c5644: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c5644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c5648: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c5648u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c564c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c564cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c5650: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c5650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c5654: 0x3e00008  jr          $ra
    ctx->pc = 0x3C5654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5654u;
            // 0x3c5658: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C565Cu;
    // 0x3c565c: 0x0  nop
    ctx->pc = 0x3c565cu;
    // NOP
}
