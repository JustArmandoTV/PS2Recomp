#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0045C7F0
// Address: 0x45c7f0 - 0x45ca20
void sub_0045C7F0_0x45c7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045C7F0_0x45c7f0");
#endif

    switch (ctx->pc) {
        case 0x45c838u: goto label_45c838;
        case 0x45c8dcu: goto label_45c8dc;
        case 0x45c8f4u: goto label_45c8f4;
        case 0x45c90cu: goto label_45c90c;
        case 0x45c924u: goto label_45c924;
        case 0x45c944u: goto label_45c944;
        case 0x45c968u: goto label_45c968;
        case 0x45c97cu: goto label_45c97c;
        case 0x45c99cu: goto label_45c99c;
        case 0x45c9b0u: goto label_45c9b0;
        case 0x45c9c8u: goto label_45c9c8;
        case 0x45c9dcu: goto label_45c9dc;
        case 0x45c9f0u: goto label_45c9f0;
        default: break;
    }

    ctx->pc = 0x45c7f0u;

    // 0x45c7f0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x45c7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x45c7f4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x45c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x45c7f8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x45c7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x45c7fc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x45c7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x45c800: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x45c800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x45c804: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x45c804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x45c808: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x45c808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x45c80c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x45c80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x45c810: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x45c810u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c814: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x45c814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x45c818: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x45c818u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c81c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x45c81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x45c820: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45c820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x45c824: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45c824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45c828: 0x8c518a08  lw          $s1, -0x75F8($v0)
    ctx->pc = 0x45c828u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x45c82c: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x45c82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x45c830: 0xc0c9a58  jal         func_326960
    ctx->pc = 0x45C830u;
    SET_GPR_U32(ctx, 31, 0x45C838u);
    ctx->pc = 0x45C834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C830u;
            // 0x45c834: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C838u; }
        if (ctx->pc != 0x45C838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C838u; }
        if (ctx->pc != 0x45C838u) { return; }
    }
    ctx->pc = 0x45C838u;
label_45c838:
    // 0x45c838: 0x8e31000c  lw          $s1, 0xC($s1)
    ctx->pc = 0x45c838u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x45c83c: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x45C83Cu;
    {
        const bool branch_taken_0x45c83c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x45C840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45C83Cu;
            // 0x45c840: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45c83c) {
            ctx->pc = 0x45C848u;
            goto label_45c848;
        }
    }
    ctx->pc = 0x45C844u;
    // 0x45c844: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x45c844u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45c848:
    // 0x45c848: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x45c848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x45c84c: 0x5284000c  beql        $s4, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x45C84Cu;
    {
        const bool branch_taken_0x45c84c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 4));
        if (branch_taken_0x45c84c) {
            ctx->pc = 0x45C850u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45C84Cu;
            // 0x45c850: 0x24140005  addiu       $s4, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45C880u;
            goto label_45c880;
        }
    }
    ctx->pc = 0x45C854u;
    // 0x45c854: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x45c854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x45c858: 0x52830009  beql        $s4, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x45C858u;
    {
        const bool branch_taken_0x45c858 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x45c858) {
            ctx->pc = 0x45C85Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45C858u;
            // 0x45c85c: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45C880u;
            goto label_45c880;
        }
    }
    ctx->pc = 0x45C860u;
    // 0x45c860: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x45c860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x45c864: 0x52820006  beql        $s4, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x45C864u;
    {
        const bool branch_taken_0x45c864 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x45c864) {
            ctx->pc = 0x45C868u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45C864u;
            // 0x45c868: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45C880u;
            goto label_45c880;
        }
    }
    ctx->pc = 0x45C86Cu;
    // 0x45c86c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45c86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45c870: 0x52820003  beql        $s4, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x45C870u;
    {
        const bool branch_taken_0x45c870 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x45c870) {
            ctx->pc = 0x45C874u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45C870u;
            // 0x45c874: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45C880u;
            goto label_45c880;
        }
    }
    ctx->pc = 0x45C878u;
    // 0x45c878: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x45C878u;
    {
        const bool branch_taken_0x45c878 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c878) {
            ctx->pc = 0x45C87Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45C878u;
            // 0x45c87c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45C880u;
            goto label_45c880;
        }
    }
    ctx->pc = 0x45C880u;
label_45c880:
    // 0x45c880: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x45c880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x45c884: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x45c884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x45c888: 0xc4400460  lwc1        $f0, 0x460($v0)
    ctx->pc = 0x45c888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45c88c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x45c88cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x45c890: 0xc4610464  lwc1        $f1, 0x464($v1)
    ctx->pc = 0x45c890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45c894: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45c894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45c898: 0x24a5e320  addiu       $a1, $a1, -0x1CE0
    ctx->pc = 0x45c898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959904));
    // 0x45c89c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x45c89cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c8a0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x45c8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x45c8a4: 0xc4420468  lwc1        $f2, 0x468($v0)
    ctx->pc = 0x45c8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45c8a8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x45c8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x45c8ac: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x45c8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x45c8b0: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x45c8b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x45c8b4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x45c8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x45c8b8: 0xc4410470  lwc1        $f1, 0x470($v0)
    ctx->pc = 0x45c8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45c8bc: 0xc460046c  lwc1        $f0, 0x46C($v1)
    ctx->pc = 0x45c8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45c8c0: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x45c8c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x45c8c4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x45c8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x45c8c8: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x45c8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x45c8cc: 0xc4400474  lwc1        $f0, 0x474($v0)
    ctx->pc = 0x45c8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45c8d0: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x45c8d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x45c8d4: 0xc123944  jal         func_48E510
    ctx->pc = 0x45C8D4u;
    SET_GPR_U32(ctx, 31, 0x45C8DCu);
    ctx->pc = 0x45C8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C8D4u;
            // 0x45c8d8: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C8DCu; }
        if (ctx->pc != 0x45C8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C8DCu; }
        if (ctx->pc != 0x45C8DCu) { return; }
    }
    ctx->pc = 0x45C8DCu;
label_45c8dc:
    // 0x45c8dc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45c8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45c8e0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x45c8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x45c8e4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x45c8e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c8e8: 0x24a5e2e8  addiu       $a1, $a1, -0x1D18
    ctx->pc = 0x45c8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959848));
    // 0x45c8ec: 0xc123944  jal         func_48E510
    ctx->pc = 0x45C8ECu;
    SET_GPR_U32(ctx, 31, 0x45C8F4u);
    ctx->pc = 0x45C8F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C8ECu;
            // 0x45c8f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C8F4u; }
        if (ctx->pc != 0x45C8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C8F4u; }
        if (ctx->pc != 0x45C8F4u) { return; }
    }
    ctx->pc = 0x45C8F4u;
label_45c8f4:
    // 0x45c8f4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45c8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45c8f8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x45c8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x45c8fc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x45c8fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c900: 0x24a5e2f0  addiu       $a1, $a1, -0x1D10
    ctx->pc = 0x45c900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959856));
    // 0x45c904: 0xc123944  jal         func_48E510
    ctx->pc = 0x45C904u;
    SET_GPR_U32(ctx, 31, 0x45C90Cu);
    ctx->pc = 0x45C908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C904u;
            // 0x45c908: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C90Cu; }
        if (ctx->pc != 0x45C90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C90Cu; }
        if (ctx->pc != 0x45C90Cu) { return; }
    }
    ctx->pc = 0x45C90Cu;
label_45c90c:
    // 0x45c90c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45c90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45c910: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x45c910u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x45c914: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x45c914u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c918: 0x24a5e300  addiu       $a1, $a1, -0x1D00
    ctx->pc = 0x45c918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959872));
    // 0x45c91c: 0xc123944  jal         func_48E510
    ctx->pc = 0x45C91Cu;
    SET_GPR_U32(ctx, 31, 0x45C924u);
    ctx->pc = 0x45C920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C91Cu;
            // 0x45c920: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C924u; }
        if (ctx->pc != 0x45C924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C924u; }
        if (ctx->pc != 0x45C924u) { return; }
    }
    ctx->pc = 0x45C924u;
label_45c924:
    // 0x45c924: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x45c924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x45c928: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x45c928u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c92c: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x45c92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x45c930: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45c930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45c934: 0x8c5100a0  lw          $s1, 0xA0($v0)
    ctx->pc = 0x45c934u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x45c938: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x45c938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c93c: 0xc123944  jal         func_48E510
    ctx->pc = 0x45C93Cu;
    SET_GPR_U32(ctx, 31, 0x45C944u);
    ctx->pc = 0x45C940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C93Cu;
            // 0x45c940: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C944u; }
        if (ctx->pc != 0x45C944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C944u; }
        if (ctx->pc != 0x45C944u) { return; }
    }
    ctx->pc = 0x45C944u;
label_45c944:
    // 0x45c944: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x45c944u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c948: 0x92a2006c  lbu         $v0, 0x6C($s5)
    ctx->pc = 0x45c948u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 108)));
    // 0x45c94c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x45C94Cu;
    {
        const bool branch_taken_0x45c94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c94c) {
            ctx->pc = 0x45C950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45C94Cu;
            // 0x45c950: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45C984u;
            goto label_45c984;
        }
    }
    ctx->pc = 0x45C954u;
    // 0x45c954: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45c954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45c958: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x45c958u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x45c95c: 0x24a5e2f0  addiu       $a1, $a1, -0x1D10
    ctx->pc = 0x45c95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959856));
    // 0x45c960: 0xc123944  jal         func_48E510
    ctx->pc = 0x45C960u;
    SET_GPR_U32(ctx, 31, 0x45C968u);
    ctx->pc = 0x45C964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C960u;
            // 0x45c964: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C968u; }
        if (ctx->pc != 0x45C968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C968u; }
        if (ctx->pc != 0x45C968u) { return; }
    }
    ctx->pc = 0x45C968u;
label_45c968:
    // 0x45c968: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45c968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45c96c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x45c96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c970: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45c970u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c974: 0xc123944  jal         func_48E510
    ctx->pc = 0x45C974u;
    SET_GPR_U32(ctx, 31, 0x45C97Cu);
    ctx->pc = 0x45C978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C974u;
            // 0x45c978: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C97Cu; }
        if (ctx->pc != 0x45C97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C97Cu; }
        if (ctx->pc != 0x45C97Cu) { return; }
    }
    ctx->pc = 0x45C97Cu;
label_45c97c:
    // 0x45c97c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x45C97Cu;
    {
        const bool branch_taken_0x45c97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45C980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45C97Cu;
            // 0x45c980: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45c97c) {
            ctx->pc = 0x45C9B4u;
            goto label_45c9b4;
        }
    }
    ctx->pc = 0x45C984u;
label_45c984:
    // 0x45c984: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45c984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45c988: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x45c988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x45c98c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x45c98cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c990: 0x8c5100a0  lw          $s1, 0xA0($v0)
    ctx->pc = 0x45c990u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x45c994: 0xc123944  jal         func_48E510
    ctx->pc = 0x45C994u;
    SET_GPR_U32(ctx, 31, 0x45C99Cu);
    ctx->pc = 0x45C998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C994u;
            // 0x45c998: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C99Cu; }
        if (ctx->pc != 0x45C99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C99Cu; }
        if (ctx->pc != 0x45C99Cu) { return; }
    }
    ctx->pc = 0x45C99Cu;
label_45c99c:
    // 0x45c99c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45c99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45c9a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x45c9a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c9a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45c9a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c9a8: 0xc123944  jal         func_48E510
    ctx->pc = 0x45C9A8u;
    SET_GPR_U32(ctx, 31, 0x45C9B0u);
    ctx->pc = 0x45C9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C9A8u;
            // 0x45c9ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C9B0u; }
        if (ctx->pc != 0x45C9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C9B0u; }
        if (ctx->pc != 0x45C9B0u) { return; }
    }
    ctx->pc = 0x45C9B0u;
label_45c9b0:
    // 0x45c9b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45c9b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45c9b4:
    // 0x45c9b4: 0x8ec50008  lw          $a1, 0x8($s6)
    ctx->pc = 0x45c9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x45c9b8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x45c9b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c9bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x45c9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c9c0: 0xc123654  jal         func_48D950
    ctx->pc = 0x45C9C0u;
    SET_GPR_U32(ctx, 31, 0x45C9C8u);
    ctx->pc = 0x45C9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C9C0u;
            // 0x45c9c4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C9C8u; }
        if (ctx->pc != 0x45C9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C9C8u; }
        if (ctx->pc != 0x45C9C8u) { return; }
    }
    ctx->pc = 0x45C9C8u;
label_45c9c8:
    // 0x45c9c8: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x45c9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x45c9cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x45c9ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c9d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x45c9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c9d4: 0xc123654  jal         func_48D950
    ctx->pc = 0x45C9D4u;
    SET_GPR_U32(ctx, 31, 0x45C9DCu);
    ctx->pc = 0x45C9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C9D4u;
            // 0x45c9d8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C9DCu; }
        if (ctx->pc != 0x45C9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C9DCu; }
        if (ctx->pc != 0x45C9DCu) { return; }
    }
    ctx->pc = 0x45C9DCu;
label_45c9dc:
    // 0x45c9dc: 0x8ee50008  lw          $a1, 0x8($s7)
    ctx->pc = 0x45c9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x45c9e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x45c9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c9e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x45c9e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45c9e8: 0xc123654  jal         func_48D950
    ctx->pc = 0x45C9E8u;
    SET_GPR_U32(ctx, 31, 0x45C9F0u);
    ctx->pc = 0x45C9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C9E8u;
            // 0x45c9ec: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C9F0u; }
        if (ctx->pc != 0x45C9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C9F0u; }
        if (ctx->pc != 0x45C9F0u) { return; }
    }
    ctx->pc = 0x45C9F0u;
label_45c9f0:
    // 0x45c9f0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x45c9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x45c9f4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x45c9f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x45c9f8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x45c9f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x45c9fc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x45c9fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x45ca00: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x45ca00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45ca04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x45ca04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45ca08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x45ca08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45ca0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x45ca0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45ca10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45ca10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45ca14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45ca14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45ca18: 0x3e00008  jr          $ra
    ctx->pc = 0x45CA18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45CA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45CA18u;
            // 0x45ca1c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45CA20u;
}
