#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0045C460
// Address: 0x45c460 - 0x45c630
void sub_0045C460_0x45c460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045C460_0x45c460");
#endif

    switch (ctx->pc) {
        case 0x45c4a8u: goto label_45c4a8;
        case 0x45c4b4u: goto label_45c4b4;
        case 0x45c4e4u: goto label_45c4e4;
        case 0x45c4fcu: goto label_45c4fc;
        case 0x45c514u: goto label_45c514;
        case 0x45c52cu: goto label_45c52c;
        case 0x45c54cu: goto label_45c54c;
        case 0x45c570u: goto label_45c570;
        case 0x45c584u: goto label_45c584;
        case 0x45c5a4u: goto label_45c5a4;
        case 0x45c5b8u: goto label_45c5b8;
        case 0x45c5d0u: goto label_45c5d0;
        case 0x45c5e4u: goto label_45c5e4;
        case 0x45c5f8u: goto label_45c5f8;
        default: break;
    }

    ctx->pc = 0x45c460u;

    // 0x45c460: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x45c460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x45c464: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x45c464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x45c468: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x45c468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x45c46c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x45c46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x45c470: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x45c470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x45c474: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x45c474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x45c478: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x45c478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x45c47c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x45c47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x45c480: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x45c480u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c484: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x45c484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x45c488: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x45c488u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c48c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x45c48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x45c490: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45c490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x45c494: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45c494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45c498: 0x8c50a140  lw          $s0, -0x5EC0($v0)
    ctx->pc = 0x45c498u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943040)));
    // 0x45c49c: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x45c49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x45c4a0: 0xc0c9a58  jal         func_326960
    ctx->pc = 0x45C4A0u;
    SET_GPR_U32(ctx, 31, 0x45C4A8u);
    ctx->pc = 0x45C4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C4A0u;
            // 0x45c4a4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C4A8u; }
        if (ctx->pc != 0x45C4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C4A8u; }
        if (ctx->pc != 0x45C4A8u) { return; }
    }
    ctx->pc = 0x45C4A8u;
label_45c4a8:
    // 0x45c4a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x45c4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c4ac: 0xc073e80  jal         func_1CFA00
    ctx->pc = 0x45C4ACu;
    SET_GPR_U32(ctx, 31, 0x45C4B4u);
    ctx->pc = 0x45C4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C4ACu;
            // 0x45c4b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA00u;
    if (runtime->hasFunction(0x1CFA00u)) {
        auto targetFn = runtime->lookupFunction(0x1CFA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C4B4u; }
        if (ctx->pc != 0x45C4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CFA00_0x1cfa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C4B4u; }
        if (ctx->pc != 0x45C4B4u) { return; }
    }
    ctx->pc = 0x45C4B4u;
label_45c4b4:
    // 0x45c4b4: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x45c4b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x45c4b8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x45c4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x45c4bc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x45c4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x45c4c0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45c4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45c4c4: 0xc4410480  lwc1        $f1, 0x480($v0)
    ctx->pc = 0x45c4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45c4c8: 0x24a5e2d0  addiu       $a1, $a1, -0x1D30
    ctx->pc = 0x45c4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959824));
    // 0x45c4cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x45c4ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c4d0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x45c4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x45c4d4: 0xc4400484  lwc1        $f0, 0x484($v0)
    ctx->pc = 0x45c4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45c4d8: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x45c4d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x45c4dc: 0xc123944  jal         func_48E510
    ctx->pc = 0x45C4DCu;
    SET_GPR_U32(ctx, 31, 0x45C4E4u);
    ctx->pc = 0x45C4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C4DCu;
            // 0x45c4e0: 0xe7a000ac  swc1        $f0, 0xAC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C4E4u; }
        if (ctx->pc != 0x45C4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C4E4u; }
        if (ctx->pc != 0x45C4E4u) { return; }
    }
    ctx->pc = 0x45C4E4u;
label_45c4e4:
    // 0x45c4e4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45c4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45c4e8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x45c4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x45c4ec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x45c4ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c4f0: 0x24a5e2e8  addiu       $a1, $a1, -0x1D18
    ctx->pc = 0x45c4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959848));
    // 0x45c4f4: 0xc123944  jal         func_48E510
    ctx->pc = 0x45C4F4u;
    SET_GPR_U32(ctx, 31, 0x45C4FCu);
    ctx->pc = 0x45C4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C4F4u;
            // 0x45c4f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C4FCu; }
        if (ctx->pc != 0x45C4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C4FCu; }
        if (ctx->pc != 0x45C4FCu) { return; }
    }
    ctx->pc = 0x45C4FCu;
label_45c4fc:
    // 0x45c4fc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45c4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45c500: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x45c500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x45c504: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x45c504u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c508: 0x24a5e2f0  addiu       $a1, $a1, -0x1D10
    ctx->pc = 0x45c508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959856));
    // 0x45c50c: 0xc123944  jal         func_48E510
    ctx->pc = 0x45C50Cu;
    SET_GPR_U32(ctx, 31, 0x45C514u);
    ctx->pc = 0x45C510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C50Cu;
            // 0x45c510: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C514u; }
        if (ctx->pc != 0x45C514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C514u; }
        if (ctx->pc != 0x45C514u) { return; }
    }
    ctx->pc = 0x45C514u;
label_45c514:
    // 0x45c514: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45c514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45c518: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x45c518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x45c51c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x45c51cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c520: 0x24a5e300  addiu       $a1, $a1, -0x1D00
    ctx->pc = 0x45c520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959872));
    // 0x45c524: 0xc123944  jal         func_48E510
    ctx->pc = 0x45C524u;
    SET_GPR_U32(ctx, 31, 0x45C52Cu);
    ctx->pc = 0x45C528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C524u;
            // 0x45c528: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C52Cu; }
        if (ctx->pc != 0x45C52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C52Cu; }
        if (ctx->pc != 0x45C52Cu) { return; }
    }
    ctx->pc = 0x45C52Cu;
label_45c52c:
    // 0x45c52c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x45c52cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x45c530: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x45c530u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c534: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x45c534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x45c538: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45c538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45c53c: 0x8c5100a8  lw          $s1, 0xA8($v0)
    ctx->pc = 0x45c53cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x45c540: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x45c540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c544: 0xc123944  jal         func_48E510
    ctx->pc = 0x45C544u;
    SET_GPR_U32(ctx, 31, 0x45C54Cu);
    ctx->pc = 0x45C548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C544u;
            // 0x45c548: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C54Cu; }
        if (ctx->pc != 0x45C54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C54Cu; }
        if (ctx->pc != 0x45C54Cu) { return; }
    }
    ctx->pc = 0x45C54Cu;
label_45c54c:
    // 0x45c54c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x45c54cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c550: 0x92a2006c  lbu         $v0, 0x6C($s5)
    ctx->pc = 0x45c550u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 108)));
    // 0x45c554: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x45C554u;
    {
        const bool branch_taken_0x45c554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c554) {
            ctx->pc = 0x45C558u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45C554u;
            // 0x45c558: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45C58Cu;
            goto label_45c58c;
        }
    }
    ctx->pc = 0x45C55Cu;
    // 0x45c55c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45c55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45c560: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x45c560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x45c564: 0x24a5e2f0  addiu       $a1, $a1, -0x1D10
    ctx->pc = 0x45c564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959856));
    // 0x45c568: 0xc123944  jal         func_48E510
    ctx->pc = 0x45C568u;
    SET_GPR_U32(ctx, 31, 0x45C570u);
    ctx->pc = 0x45C56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C568u;
            // 0x45c56c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C570u; }
        if (ctx->pc != 0x45C570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C570u; }
        if (ctx->pc != 0x45C570u) { return; }
    }
    ctx->pc = 0x45C570u;
label_45c570:
    // 0x45c570: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45c570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45c574: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x45c574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c578: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45c578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c57c: 0xc123944  jal         func_48E510
    ctx->pc = 0x45C57Cu;
    SET_GPR_U32(ctx, 31, 0x45C584u);
    ctx->pc = 0x45C580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C57Cu;
            // 0x45c580: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C584u; }
        if (ctx->pc != 0x45C584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C584u; }
        if (ctx->pc != 0x45C584u) { return; }
    }
    ctx->pc = 0x45C584u;
label_45c584:
    // 0x45c584: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x45C584u;
    {
        const bool branch_taken_0x45c584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45C588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45C584u;
            // 0x45c588: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45c584) {
            ctx->pc = 0x45C5BCu;
            goto label_45c5bc;
        }
    }
    ctx->pc = 0x45C58Cu;
label_45c58c:
    // 0x45c58c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45c58cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45c590: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x45c590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x45c594: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x45c594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c598: 0x8c5100a8  lw          $s1, 0xA8($v0)
    ctx->pc = 0x45c598u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x45c59c: 0xc123944  jal         func_48E510
    ctx->pc = 0x45C59Cu;
    SET_GPR_U32(ctx, 31, 0x45C5A4u);
    ctx->pc = 0x45C5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C59Cu;
            // 0x45c5a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C5A4u; }
        if (ctx->pc != 0x45C5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C5A4u; }
        if (ctx->pc != 0x45C5A4u) { return; }
    }
    ctx->pc = 0x45C5A4u;
label_45c5a4:
    // 0x45c5a4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45c5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45c5a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x45c5a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c5ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45c5acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c5b0: 0xc123944  jal         func_48E510
    ctx->pc = 0x45C5B0u;
    SET_GPR_U32(ctx, 31, 0x45C5B8u);
    ctx->pc = 0x45C5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C5B0u;
            // 0x45c5b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C5B8u; }
        if (ctx->pc != 0x45C5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C5B8u; }
        if (ctx->pc != 0x45C5B8u) { return; }
    }
    ctx->pc = 0x45C5B8u;
label_45c5b8:
    // 0x45c5b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45c5b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45c5bc:
    // 0x45c5bc: 0x8ec50008  lw          $a1, 0x8($s6)
    ctx->pc = 0x45c5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x45c5c0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x45c5c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c5c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x45c5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c5c8: 0xc123654  jal         func_48D950
    ctx->pc = 0x45C5C8u;
    SET_GPR_U32(ctx, 31, 0x45C5D0u);
    ctx->pc = 0x45C5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C5C8u;
            // 0x45c5cc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C5D0u; }
        if (ctx->pc != 0x45C5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C5D0u; }
        if (ctx->pc != 0x45C5D0u) { return; }
    }
    ctx->pc = 0x45C5D0u;
label_45c5d0:
    // 0x45c5d0: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x45c5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x45c5d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x45c5d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c5d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x45c5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c5dc: 0xc123654  jal         func_48D950
    ctx->pc = 0x45C5DCu;
    SET_GPR_U32(ctx, 31, 0x45C5E4u);
    ctx->pc = 0x45C5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C5DCu;
            // 0x45c5e0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C5E4u; }
        if (ctx->pc != 0x45C5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C5E4u; }
        if (ctx->pc != 0x45C5E4u) { return; }
    }
    ctx->pc = 0x45C5E4u;
label_45c5e4:
    // 0x45c5e4: 0x8ee50008  lw          $a1, 0x8($s7)
    ctx->pc = 0x45c5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x45c5e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x45c5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c5ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x45c5ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c5f0: 0xc123654  jal         func_48D950
    ctx->pc = 0x45C5F0u;
    SET_GPR_U32(ctx, 31, 0x45C5F8u);
    ctx->pc = 0x45C5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C5F0u;
            // 0x45c5f4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C5F8u; }
        if (ctx->pc != 0x45C5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C5F8u; }
        if (ctx->pc != 0x45C5F8u) { return; }
    }
    ctx->pc = 0x45C5F8u;
label_45c5f8:
    // 0x45c5f8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x45c5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x45c5fc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x45c5fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x45c600: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x45c600u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x45c604: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x45c604u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x45c608: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x45c608u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45c60c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x45c60cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45c610: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x45c610u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45c614: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x45c614u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45c618: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45c618u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45c61c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45c61cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45c620: 0x3e00008  jr          $ra
    ctx->pc = 0x45C620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45C624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45C620u;
            // 0x45c624: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45C628u;
    // 0x45c628: 0x0  nop
    ctx->pc = 0x45c628u;
    // NOP
    // 0x45c62c: 0x0  nop
    ctx->pc = 0x45c62cu;
    // NOP
}
