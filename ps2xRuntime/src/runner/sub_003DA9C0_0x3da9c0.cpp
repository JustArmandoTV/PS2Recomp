#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DA9C0
// Address: 0x3da9c0 - 0x3dabf0
void sub_003DA9C0_0x3da9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA9C0_0x3da9c0");
#endif

    switch (ctx->pc) {
        case 0x3daa4cu: goto label_3daa4c;
        case 0x3daa58u: goto label_3daa58;
        case 0x3daa7cu: goto label_3daa7c;
        case 0x3daa98u: goto label_3daa98;
        case 0x3daaa4u: goto label_3daaa4;
        case 0x3daaf0u: goto label_3daaf0;
        case 0x3daaf8u: goto label_3daaf8;
        case 0x3dab04u: goto label_3dab04;
        case 0x3dab28u: goto label_3dab28;
        case 0x3dab38u: goto label_3dab38;
        case 0x3dab44u: goto label_3dab44;
        case 0x3dab74u: goto label_3dab74;
        case 0x3dab94u: goto label_3dab94;
        case 0x3daba8u: goto label_3daba8;
        case 0x3dabc0u: goto label_3dabc0;
        default: break;
    }

    ctx->pc = 0x3da9c0u;

    // 0x3da9c0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3da9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x3da9c4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3da9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3da9c8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3da9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3da9cc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3da9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3da9d0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3da9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3da9d4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3da9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3da9d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3da9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3da9dc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3da9dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da9e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3da9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3da9e4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3da9e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da9e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3da9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3da9ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3da9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3da9f0: 0x8c840070  lw          $a0, 0x70($a0)
    ctx->pc = 0x3da9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x3da9f4: 0x10800072  beqz        $a0, . + 4 + (0x72 << 2)
    ctx->pc = 0x3DA9F4u;
    {
        const bool branch_taken_0x3da9f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DA9F4u;
            // 0x3da9f8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da9f4) {
            ctx->pc = 0x3DABC0u;
            goto label_3dabc0;
        }
    }
    ctx->pc = 0x3DA9FCu;
    // 0x3da9fc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3da9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3daa00: 0x50830070  beql        $a0, $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x3DAA00u;
    {
        const bool branch_taken_0x3daa00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3daa00) {
            ctx->pc = 0x3DAA04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAA00u;
            // 0x3daa04: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DABC4u;
            goto label_3dabc4;
        }
    }
    ctx->pc = 0x3DAA08u;
    // 0x3daa08: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3daa08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x3daa0c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3daa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x3daa10: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x3daa10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
    // 0x3daa14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3daa14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3daa18: 0x8c46d120  lw          $a2, -0x2EE0($v0)
    ctx->pc = 0x3daa18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
    // 0x3daa1c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3daa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3daa20: 0x8ca70130  lw          $a3, 0x130($a1)
    ctx->pc = 0x3daa20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x3daa24: 0x8c71e378  lw          $s1, -0x1C88($v1)
    ctx->pc = 0x3daa24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
    // 0x3daa28: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3daa28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3daa2c: 0x8c50e370  lw          $s0, -0x1C90($v0)
    ctx->pc = 0x3daa2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
    // 0x3daa30: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x3daa30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3daa34: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x3daa34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3daa38: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x3daa38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3daa3c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3daa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3daa40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3daa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3daa44: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x3DAA44u;
    SET_GPR_U32(ctx, 31, 0x3DAA4Cu);
    ctx->pc = 0x3DAA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAA44u;
            // 0x3daa48: 0x24570010  addiu       $s7, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAA4Cu; }
        if (ctx->pc != 0x3DAA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAA4Cu; }
        if (ctx->pc != 0x3DAA4Cu) { return; }
    }
    ctx->pc = 0x3DAA4Cu;
label_3daa4c:
    // 0x3daa4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3daa4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3daa50: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x3DAA50u;
    SET_GPR_U32(ctx, 31, 0x3DAA58u);
    ctx->pc = 0x3DAA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAA50u;
            // 0x3daa54: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAA58u; }
        if (ctx->pc != 0x3DAA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAA58u; }
        if (ctx->pc != 0x3DAA58u) { return; }
    }
    ctx->pc = 0x3DAA58u;
label_3daa58:
    // 0x3daa58: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3daa58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x3daa5c: 0x9286004c  lbu         $a2, 0x4C($s4)
    ctx->pc = 0x3daa5cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x3daa60: 0x8c43d130  lw          $v1, -0x2ED0($v0)
    ctx->pc = 0x3daa60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x3daa64: 0x8e760000  lw          $s6, 0x0($s3)
    ctx->pc = 0x3daa64u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3daa68: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3daa68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3daa6c: 0x8c750130  lw          $s5, 0x130($v1)
    ctx->pc = 0x3daa6cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x3daa70: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x3daa70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x3daa74: 0xc07698c  jal         func_1DA630
    ctx->pc = 0x3DAA74u;
    SET_GPR_U32(ctx, 31, 0x3DAA7Cu);
    ctx->pc = 0x3DAA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAA74u;
            // 0x3daa78: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAA7Cu; }
        if (ctx->pc != 0x3DAA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAA7Cu; }
        if (ctx->pc != 0x3DAA7Cu) { return; }
    }
    ctx->pc = 0x3DAA7Cu;
label_3daa7c:
    // 0x3daa7c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3daa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3daa80: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DAA80u;
    {
        const bool branch_taken_0x3daa80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3daa80) {
            ctx->pc = 0x3DAA90u;
            goto label_3daa90;
        }
    }
    ctx->pc = 0x3DAA88u;
    // 0x3daa88: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x3DAA88u;
    {
        const bool branch_taken_0x3daa88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAA88u;
            // 0x3daa8c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3daa88) {
            ctx->pc = 0x3DAB58u;
            goto label_3dab58;
        }
    }
    ctx->pc = 0x3DAA90u;
label_3daa90:
    // 0x3daa90: 0xc0576f4  jal         func_15DBD0
    ctx->pc = 0x3DAA90u;
    SET_GPR_U32(ctx, 31, 0x3DAA98u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAA98u; }
        if (ctx->pc != 0x3DAA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAA98u; }
        if (ctx->pc != 0x3DAA98u) { return; }
    }
    ctx->pc = 0x3DAA98u;
label_3daa98:
    // 0x3daa98: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3daa98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3daa9c: 0xc076984  jal         func_1DA610
    ctx->pc = 0x3DAA9Cu;
    SET_GPR_U32(ctx, 31, 0x3DAAA4u);
    ctx->pc = 0x3DAAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAA9Cu;
            // 0x3daaa0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAAA4u; }
        if (ctx->pc != 0x3DAAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAAA4u; }
        if (ctx->pc != 0x3DAAA4u) { return; }
    }
    ctx->pc = 0x3DAAA4u;
label_3daaa4:
    // 0x3daaa4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3daaa4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3daaa8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3daaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3daaac: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3daaacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x3daab0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3daab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3daab4: 0xc442f800  lwc1        $f2, -0x800($v0)
    ctx->pc = 0x3daab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3daab8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3daab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3daabc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3daabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x3daac0: 0xc441f808  lwc1        $f1, -0x7F8($v0)
    ctx->pc = 0x3daac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3daac4: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x3daac4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x3daac8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3daac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x3daacc: 0xc440f80c  lwc1        $f0, -0x7F4($v0)
    ctx->pc = 0x3daaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3daad0: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x3daad0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x3daad4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3daad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x3daad8: 0x8c42f804  lw          $v0, -0x7FC($v0)
    ctx->pc = 0x3daad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965252)));
    // 0x3daadc: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x3daadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x3daae0: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x3daae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x3daae4: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x3daae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3daae8: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3DAAE8u;
    SET_GPR_U32(ctx, 31, 0x3DAAF0u);
    ctx->pc = 0x3DAAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAAE8u;
            // 0x3daaec: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAAF0u; }
        if (ctx->pc != 0x3DAAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAAF0u; }
        if (ctx->pc != 0x3DAAF0u) { return; }
    }
    ctx->pc = 0x3DAAF0u;
label_3daaf0:
    // 0x3daaf0: 0xc076980  jal         func_1DA600
    ctx->pc = 0x3DAAF0u;
    SET_GPR_U32(ctx, 31, 0x3DAAF8u);
    ctx->pc = 0x3DAAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAAF0u;
            // 0x3daaf4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAAF8u; }
        if (ctx->pc != 0x3DAAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAAF8u; }
        if (ctx->pc != 0x3DAAF8u) { return; }
    }
    ctx->pc = 0x3DAAF8u;
label_3daaf8:
    // 0x3daaf8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3daaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3daafc: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x3DAAFCu;
    SET_GPR_U32(ctx, 31, 0x3DAB04u);
    ctx->pc = 0x3DAB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAAFCu;
            // 0x3dab00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAB04u; }
        if (ctx->pc != 0x3DAB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAB04u; }
        if (ctx->pc != 0x3DAB04u) { return; }
    }
    ctx->pc = 0x3DAB04u;
label_3dab04:
    // 0x3dab04: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3dab04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3dab08: 0xc4619be0  lwc1        $f1, -0x6420($v1)
    ctx->pc = 0x3dab08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294941664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3dab0c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3dab0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3dab10: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3DAB10u;
    {
        const bool branch_taken_0x3dab10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3dab10) {
            ctx->pc = 0x3DAB14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAB10u;
            // 0x3dab14: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DAB20u;
            goto label_3dab20;
        }
    }
    ctx->pc = 0x3DAB18u;
    // 0x3dab18: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3DAB18u;
    {
        const bool branch_taken_0x3dab18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAB18u;
            // 0x3dab1c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dab18) {
            ctx->pc = 0x3DAB58u;
            goto label_3dab58;
        }
    }
    ctx->pc = 0x3DAB20u;
label_3dab20:
    // 0x3dab20: 0xc07697c  jal         func_1DA5F0
    ctx->pc = 0x3DAB20u;
    SET_GPR_U32(ctx, 31, 0x3DAB28u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAB28u; }
        if (ctx->pc != 0x3DAB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAB28u; }
        if (ctx->pc != 0x3DAB28u) { return; }
    }
    ctx->pc = 0x3DAB28u;
label_3dab28:
    // 0x3dab28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3dab28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dab2c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3dab2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3dab30: 0xc04cd60  jal         func_133580
    ctx->pc = 0x3DAB30u;
    SET_GPR_U32(ctx, 31, 0x3DAB38u);
    ctx->pc = 0x3DAB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAB30u;
            // 0x3dab34: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAB38u; }
        if (ctx->pc != 0x3DAB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAB38u; }
        if (ctx->pc != 0x3DAB38u) { return; }
    }
    ctx->pc = 0x3DAB38u;
label_3dab38:
    // 0x3dab38: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3dab38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dab3c: 0xc04c650  jal         func_131940
    ctx->pc = 0x3DAB3Cu;
    SET_GPR_U32(ctx, 31, 0x3DAB44u);
    ctx->pc = 0x3DAB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAB3Cu;
            // 0x3dab40: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAB44u; }
        if (ctx->pc != 0x3DAB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAB44u; }
        if (ctx->pc != 0x3DAB44u) { return; }
    }
    ctx->pc = 0x3DAB44u;
label_3dab44:
    // 0x3dab44: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x3dab44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x3dab48: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x3dab48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3dab4c: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x3dab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
    // 0x3dab50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3dab50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3dab54: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3dab54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3dab58:
    // 0x3dab58: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x3dab58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3dab5c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x3DAB5Cu;
    {
        const bool branch_taken_0x3dab5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAB5Cu;
            // 0x3dab60: 0xae830044  sw          $v1, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dab5c) {
            ctx->pc = 0x3DABC0u;
            goto label_3dabc0;
        }
    }
    ctx->pc = 0x3DAB64u;
    // 0x3dab64: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3dab64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dab68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3dab68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dab6c: 0xc04cd60  jal         func_133580
    ctx->pc = 0x3DAB6Cu;
    SET_GPR_U32(ctx, 31, 0x3DAB74u);
    ctx->pc = 0x3DAB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAB6Cu;
            // 0x3dab70: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAB74u; }
        if (ctx->pc != 0x3DAB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAB74u; }
        if (ctx->pc != 0x3DAB74u) { return; }
    }
    ctx->pc = 0x3DAB74u;
label_3dab74:
    // 0x3dab74: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x3dab74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x3dab78: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x3dab78u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x3dab7c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3dab7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dab80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dab80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dab84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3dab84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dab88: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x3dab88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
    // 0x3dab8c: 0xc04cfcc  jal         func_133F30
    ctx->pc = 0x3DAB8Cu;
    SET_GPR_U32(ctx, 31, 0x3DAB94u);
    ctx->pc = 0x3DAB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DAB8Cu;
            // 0x3dab90: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAB94u; }
        if (ctx->pc != 0x3DAB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DAB94u; }
        if (ctx->pc != 0x3DAB94u) { return; }
    }
    ctx->pc = 0x3DAB94u;
label_3dab94:
    // 0x3dab94: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x3dab94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x3dab98: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3dab98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3dab9c: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x3dab9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x3daba0: 0xc054bbc  jal         func_152EF0
    ctx->pc = 0x3DABA0u;
    SET_GPR_U32(ctx, 31, 0x3DABA8u);
    ctx->pc = 0x3DABA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DABA0u;
            // 0x3daba4: 0xc68c0074  lwc1        $f12, 0x74($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DABA8u; }
        if (ctx->pc != 0x3DABA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DABA8u; }
        if (ctx->pc != 0x3DABA8u) { return; }
    }
    ctx->pc = 0x3DABA8u;
label_3daba8:
    // 0x3daba8: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x3daba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x3dabac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3dabacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dabb0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3dabb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dabb4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3dabb4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x3dabb8: 0xc054c2c  jal         func_1530B0
    ctx->pc = 0x3DABB8u;
    SET_GPR_U32(ctx, 31, 0x3DABC0u);
    ctx->pc = 0x3DABBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DABB8u;
            // 0x3dabbc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DABC0u; }
        if (ctx->pc != 0x3DABC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DABC0u; }
        if (ctx->pc != 0x3DABC0u) { return; }
    }
    ctx->pc = 0x3DABC0u;
label_3dabc0:
    // 0x3dabc0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3dabc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3dabc4:
    // 0x3dabc4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3dabc4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3dabc8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3dabc8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3dabcc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3dabccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3dabd0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3dabd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3dabd4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3dabd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3dabd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3dabd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dabdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3dabdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dabe0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dabe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dabe4: 0x3e00008  jr          $ra
    ctx->pc = 0x3DABE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DABE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DABE4u;
            // 0x3dabe8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DABECu;
    // 0x3dabec: 0x0  nop
    ctx->pc = 0x3dabecu;
    // NOP
}
