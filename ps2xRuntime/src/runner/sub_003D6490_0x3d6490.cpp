#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D6490
// Address: 0x3d6490 - 0x3d6630
void sub_003D6490_0x3d6490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D6490_0x3d6490");
#endif

    switch (ctx->pc) {
        case 0x3d64acu: goto label_3d64ac;
        case 0x3d64ccu: goto label_3d64cc;
        case 0x3d6524u: goto label_3d6524;
        case 0x3d6540u: goto label_3d6540;
        case 0x3d6560u: goto label_3d6560;
        case 0x3d65c0u: goto label_3d65c0;
        case 0x3d65ccu: goto label_3d65cc;
        case 0x3d65d8u: goto label_3d65d8;
        case 0x3d65e4u: goto label_3d65e4;
        case 0x3d65f0u: goto label_3d65f0;
        case 0x3d65fcu: goto label_3d65fc;
        case 0x3d6614u: goto label_3d6614;
        default: break;
    }

    ctx->pc = 0x3d6490u;

    // 0x3d6490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d6490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3d6494: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3d6494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3d6498: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d6498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d649c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x3d649cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x3d64a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d64a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d64a4: 0xc0f59c4  jal         func_3D6710
    ctx->pc = 0x3D64A4u;
    SET_GPR_U32(ctx, 31, 0x3D64ACu);
    ctx->pc = 0x3D64A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D64A4u;
            // 0x3d64a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D6710u;
    if (runtime->hasFunction(0x3D6710u)) {
        auto targetFn = runtime->lookupFunction(0x3D6710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D64ACu; }
        if (ctx->pc != 0x3D64ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D6710_0x3d6710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D64ACu; }
        if (ctx->pc != 0x3D64ACu) { return; }
    }
    ctx->pc = 0x3D64ACu;
label_3d64ac:
    // 0x3d64ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d64acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3d64b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d64b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3d64b4: 0x24639560  addiu       $v1, $v1, -0x6AA0
    ctx->pc = 0x3d64b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940000));
    // 0x3d64b8: 0x24429598  addiu       $v0, $v0, -0x6A68
    ctx->pc = 0x3d64b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940056));
    // 0x3d64bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3d64bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3d64c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d64c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d64c4: 0xc0f59c0  jal         func_3D6700
    ctx->pc = 0x3D64C4u;
    SET_GPR_U32(ctx, 31, 0x3D64CCu);
    ctx->pc = 0x3D64C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D64C4u;
            // 0x3d64c8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D6700u;
    if (runtime->hasFunction(0x3D6700u)) {
        auto targetFn = runtime->lookupFunction(0x3D6700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D64CCu; }
        if (ctx->pc != 0x3D64CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D6700_0x3d6700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D64CCu; }
        if (ctx->pc != 0x3D64CCu) { return; }
    }
    ctx->pc = 0x3D64CCu;
label_3d64cc:
    // 0x3d64cc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3d64ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3d64d0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3d64d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3d64d4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d64d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3d64d8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3d64d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3d64dc: 0x24429400  addiu       $v0, $v0, -0x6C00
    ctx->pc = 0x3d64dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939648));
    // 0x3d64e0: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x3d64e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x3d64e4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3d64e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3d64e8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d64e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3d64ec: 0x24429438  addiu       $v0, $v0, -0x6BC8
    ctx->pc = 0x3d64ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939704));
    // 0x3d64f0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x3d64f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x3d64f4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3d64f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3d64f8: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x3d64f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x3d64fc: 0xc4409948  lwc1        $f0, -0x66B8($v0)
    ctx->pc = 0x3d64fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d6500: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3d6500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3d6504: 0xc441994c  lwc1        $f1, -0x66B4($v0)
    ctx->pc = 0x3d6504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d6508: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3d6508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3d650c: 0xc4609950  lwc1        $f0, -0x66B0($v1)
    ctx->pc = 0x3d650cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294941008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d6510: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d6510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3d6514: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3d6514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x3d6518: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x3d6518u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3d651c: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x3D651Cu;
    SET_GPR_U32(ctx, 31, 0x3D6524u);
    ctx->pc = 0x3D6520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D651Cu;
            // 0x3d6520: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6524u; }
        if (ctx->pc != 0x3D6524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6524u; }
        if (ctx->pc != 0x3D6524u) { return; }
    }
    ctx->pc = 0x3D6524u;
label_3d6524:
    // 0x3d6524: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3d6524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3d6528: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d6528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d652c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D652Cu;
    {
        const bool branch_taken_0x3d652c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D652Cu;
            // 0x3d6530: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d652c) {
            ctx->pc = 0x3D6544u;
            goto label_3d6544;
        }
    }
    ctx->pc = 0x3D6534u;
    // 0x3d6534: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3d6534u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3d6538: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x3D6538u;
    SET_GPR_U32(ctx, 31, 0x3D6540u);
    ctx->pc = 0x3D653Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6538u;
            // 0x3d653c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6540u; }
        if (ctx->pc != 0x3D6540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6540u; }
        if (ctx->pc != 0x3D6540u) { return; }
    }
    ctx->pc = 0x3D6540u;
label_3d6540:
    // 0x3d6540: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d6540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d6544:
    // 0x3d6544: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x3d6544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x3d6548: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d6548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d654c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d654cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d6550: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d6550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d6554: 0x3e00008  jr          $ra
    ctx->pc = 0x3D6554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D6558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6554u;
            // 0x3d6558: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D655Cu;
    // 0x3d655c: 0x0  nop
    ctx->pc = 0x3d655cu;
    // NOP
label_3d6560:
    // 0x3d6560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d6560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3d6564: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d6564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d6568: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d6568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3d656c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d656cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d6570: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d6570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6574: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3D6574u;
    {
        const bool branch_taken_0x3d6574 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6574u;
            // 0x3d6578: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6574) {
            ctx->pc = 0x3D6614u;
            goto label_3d6614;
        }
    }
    ctx->pc = 0x3D657Cu;
    // 0x3d657c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d657cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3d6580: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d6580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3d6584: 0x24639560  addiu       $v1, $v1, -0x6AA0
    ctx->pc = 0x3d6584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940000));
    // 0x3d6588: 0x24429598  addiu       $v0, $v0, -0x6A68
    ctx->pc = 0x3d6588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940056));
    // 0x3d658c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3d658cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3d6590: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3D6590u;
    {
        const bool branch_taken_0x3d6590 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6590u;
            // 0x3d6594: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6590) {
            ctx->pc = 0x3D65FCu;
            goto label_3d65fc;
        }
    }
    ctx->pc = 0x3D6598u;
    // 0x3d6598: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d6598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3d659c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d659cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3d65a0: 0x24639510  addiu       $v1, $v1, -0x6AF0
    ctx->pc = 0x3d65a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939920));
    // 0x3d65a4: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x3d65a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x3d65a8: 0x24429548  addiu       $v0, $v0, -0x6AB8
    ctx->pc = 0x3d65a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939976));
    // 0x3d65ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3d65acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3d65b0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x3d65b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x3d65b4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x3d65b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3d65b8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x3D65B8u;
    SET_GPR_U32(ctx, 31, 0x3D65C0u);
    ctx->pc = 0x3D65BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D65B8u;
            // 0x3d65bc: 0x24a560a0  addiu       $a1, $a1, 0x60A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D65C0u; }
        if (ctx->pc != 0x3D65C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D65C0u; }
        if (ctx->pc != 0x3D65C0u) { return; }
    }
    ctx->pc = 0x3D65C0u;
label_3d65c0:
    // 0x3d65c0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x3d65c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x3d65c4: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x3D65C4u;
    SET_GPR_U32(ctx, 31, 0x3D65CCu);
    ctx->pc = 0x3D65C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D65C4u;
            // 0x3d65c8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D65CCu; }
        if (ctx->pc != 0x3D65CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D65CCu; }
        if (ctx->pc != 0x3D65CCu) { return; }
    }
    ctx->pc = 0x3D65CCu;
label_3d65cc:
    // 0x3d65cc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x3d65ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x3d65d0: 0xc0f59a4  jal         func_3D6690
    ctx->pc = 0x3D65D0u;
    SET_GPR_U32(ctx, 31, 0x3D65D8u);
    ctx->pc = 0x3D65D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D65D0u;
            // 0x3d65d4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D6690u;
    if (runtime->hasFunction(0x3D6690u)) {
        auto targetFn = runtime->lookupFunction(0x3D6690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D65D8u; }
        if (ctx->pc != 0x3D65D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D6690_0x3d6690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D65D8u; }
        if (ctx->pc != 0x3D65D8u) { return; }
    }
    ctx->pc = 0x3D65D8u;
label_3d65d8:
    // 0x3d65d8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x3d65d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x3d65dc: 0xc0f59a4  jal         func_3D6690
    ctx->pc = 0x3D65DCu;
    SET_GPR_U32(ctx, 31, 0x3D65E4u);
    ctx->pc = 0x3D65E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D65DCu;
            // 0x3d65e0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D6690u;
    if (runtime->hasFunction(0x3D6690u)) {
        auto targetFn = runtime->lookupFunction(0x3D6690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D65E4u; }
        if (ctx->pc != 0x3D65E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D6690_0x3d6690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D65E4u; }
        if (ctx->pc != 0x3D65E4u) { return; }
    }
    ctx->pc = 0x3D65E4u;
label_3d65e4:
    // 0x3d65e4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x3d65e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x3d65e8: 0xc0f598c  jal         func_3D6630
    ctx->pc = 0x3D65E8u;
    SET_GPR_U32(ctx, 31, 0x3D65F0u);
    ctx->pc = 0x3D65ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D65E8u;
            // 0x3d65ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D6630u;
    if (runtime->hasFunction(0x3D6630u)) {
        auto targetFn = runtime->lookupFunction(0x3D6630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D65F0u; }
        if (ctx->pc != 0x3D65F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D6630_0x3d6630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D65F0u; }
        if (ctx->pc != 0x3D65F0u) { return; }
    }
    ctx->pc = 0x3D65F0u;
label_3d65f0:
    // 0x3d65f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d65f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d65f4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x3D65F4u;
    SET_GPR_U32(ctx, 31, 0x3D65FCu);
    ctx->pc = 0x3D65F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D65F4u;
            // 0x3d65f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D65FCu; }
        if (ctx->pc != 0x3D65FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D65FCu; }
        if (ctx->pc != 0x3D65FCu) { return; }
    }
    ctx->pc = 0x3D65FCu;
label_3d65fc:
    // 0x3d65fc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3d65fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x3d6600: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3d6600u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3d6604: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D6604u;
    {
        const bool branch_taken_0x3d6604 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3d6604) {
            ctx->pc = 0x3D6608u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6604u;
            // 0x3d6608: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D6618u;
            goto label_3d6618;
        }
    }
    ctx->pc = 0x3D660Cu;
    // 0x3d660c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3D660Cu;
    SET_GPR_U32(ctx, 31, 0x3D6614u);
    ctx->pc = 0x3D6610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D660Cu;
            // 0x3d6610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6614u; }
        if (ctx->pc != 0x3D6614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6614u; }
        if (ctx->pc != 0x3D6614u) { return; }
    }
    ctx->pc = 0x3D6614u;
label_3d6614:
    // 0x3d6614: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d6614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d6618:
    // 0x3d6618: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d6618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d661c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d661cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d6620: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d6620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d6624: 0x3e00008  jr          $ra
    ctx->pc = 0x3D6624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D6628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6624u;
            // 0x3d6628: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D662Cu;
    // 0x3d662c: 0x0  nop
    ctx->pc = 0x3d662cu;
    // NOP
}
