#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00496040
// Address: 0x496040 - 0x496450
void sub_00496040_0x496040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00496040_0x496040");
#endif

    switch (ctx->pc) {
        case 0x4960b8u: goto label_4960b8;
        case 0x4960c0u: goto label_4960c0;
        case 0x496110u: goto label_496110;
        case 0x496154u: goto label_496154;
        case 0x4961a4u: goto label_4961a4;
        case 0x496218u: goto label_496218;
        case 0x496240u: goto label_496240;
        case 0x496290u: goto label_496290;
        case 0x4962c8u: goto label_4962c8;
        case 0x4962ecu: goto label_4962ec;
        case 0x4962f4u: goto label_4962f4;
        case 0x496314u: goto label_496314;
        case 0x496358u: goto label_496358;
        case 0x496394u: goto label_496394;
        case 0x496418u: goto label_496418;
        case 0x49642cu: goto label_49642c;
        default: break;
    }

    ctx->pc = 0x496040u;

    // 0x496040: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x496040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x496044: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x496044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x496048: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x496048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x49604c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x49604cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x496050: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x496050u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496054: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x496054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x496058: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x496058u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49605c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49605cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x496060: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x496060u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x496064: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x496064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x496068: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x496068u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49606c: 0x126000ef  beqz        $s3, . + 4 + (0xEF << 2)
    ctx->pc = 0x49606Cu;
    {
        const bool branch_taken_0x49606c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x496070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49606Cu;
            // 0x496070: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49606c) {
            ctx->pc = 0x49642Cu;
            goto label_49642c;
        }
    }
    ctx->pc = 0x496074u;
    // 0x496074: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x496074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
    // 0x496078: 0x261082b  sltu        $at, $s3, $at
    ctx->pc = 0x496078u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x49607c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x49607Cu;
    {
        const bool branch_taken_0x49607c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49607c) {
            ctx->pc = 0x4960A0u;
            goto label_4960a0;
        }
    }
    ctx->pc = 0x496084u;
    // 0x496084: 0x3c031fff  lui         $v1, 0x1FFF
    ctx->pc = 0x496084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8191 << 16));
    // 0x496088: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x496088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x49608c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49608cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x496090: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x496090u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x496094: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x496094u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x496098: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x496098u;
    {
        const bool branch_taken_0x496098 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x496098) {
            ctx->pc = 0x49609Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x496098u;
            // 0x49609c: 0x8ea50004  lw          $a1, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4960C4u;
            goto label_4960c4;
        }
    }
    ctx->pc = 0x4960A0u;
label_4960a0:
    // 0x4960a0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x4960a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x4960a4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4960a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x4960a8: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x4960a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x4960ac: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x4960acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4960b0: 0xc049e92  jal         func_127A48
    ctx->pc = 0x4960B0u;
    SET_GPR_U32(ctx, 31, 0x4960B8u);
    ctx->pc = 0x4960B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4960B0u;
            // 0x4960b4: 0x24a50910  addiu       $a1, $a1, 0x910 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4960B8u; }
        if (ctx->pc != 0x4960B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4960B8u; }
        if (ctx->pc != 0x4960B8u) { return; }
    }
    ctx->pc = 0x4960B8u;
label_4960b8:
    // 0x4960b8: 0xc04981a  jal         func_126068
    ctx->pc = 0x4960B8u;
    SET_GPR_U32(ctx, 31, 0x4960C0u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4960C0u; }
        if (ctx->pc != 0x4960C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4960C0u; }
        if (ctx->pc != 0x4960C0u) { return; }
    }
    ctx->pc = 0x4960C0u;
label_4960c0:
    // 0x4960c0: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x4960c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_4960c4:
    // 0x4960c4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4960c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4960c8: 0xb32021  addu        $a0, $a1, $s3
    ctx->pc = 0x4960c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x4960cc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4960ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4960d0: 0x54200064  bnel        $at, $zero, . + 4 + (0x64 << 2)
    ctx->pc = 0x4960D0u;
    {
        const bool branch_taken_0x4960d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4960d0) {
            ctx->pc = 0x4960D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4960D0u;
            // 0x4960d4: 0xafa00070  sw          $zero, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x496264u;
            goto label_496264;
        }
    }
    ctx->pc = 0x4960D8u;
    // 0x4960d8: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x4960d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x4960dc: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x4960dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x4960e0: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x4960e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4960e4: 0xf41823  subu        $v1, $a3, $s4
    ctx->pc = 0x4960e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x4960e8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4960E8u;
    {
        const bool branch_taken_0x4960e8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4960ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4960E8u;
            // 0x4960ec: 0x330c3  sra         $a2, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4960e8) {
            ctx->pc = 0x4960F8u;
            goto label_4960f8;
        }
    }
    ctx->pc = 0x4960F0u;
    // 0x4960f0: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x4960f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x4960f4: 0x330c3  sra         $a2, $v1, 3
    ctx->pc = 0x4960f4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 3));
label_4960f8:
    // 0x4960f8: 0xd3082b  sltu        $at, $a2, $s3
    ctx->pc = 0x4960f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x4960fc: 0x50200025  beql        $at, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x4960FCu;
    {
        const bool branch_taken_0x4960fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4960fc) {
            ctx->pc = 0x496100u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4960FCu;
            // 0x496100: 0x1328c0  sll         $a1, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x496194u;
            goto label_496194;
        }
    }
    ctx->pc = 0x496104u;
    // 0x496104: 0xd3082b  sltu        $at, $a2, $s3
    ctx->pc = 0x496104u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x496108: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x496108u;
    {
        const bool branch_taken_0x496108 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x49610Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x496108u;
            // 0x49610c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496108) {
            ctx->pc = 0x496148u;
            goto label_496148;
        }
    }
    ctx->pc = 0x496110u;
label_496110:
    // 0x496110: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x496110u;
    {
        const bool branch_taken_0x496110 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x496110) {
            ctx->pc = 0x496128u;
            goto label_496128;
        }
    }
    ctx->pc = 0x496118u;
    // 0x496118: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x496118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x49611c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x49611cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x496120: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x496120u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x496124: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x496124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
label_496128:
    // 0x496128: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x496128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x49612c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x49612cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x496130: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x496130u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x496134: 0xd3082b  sltu        $at, $a2, $s3
    ctx->pc = 0x496134u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x496138: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x496138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x49613c: 0x1420fff4  bnez        $at, . + 4 + (-0xC << 2)
    ctx->pc = 0x49613Cu;
    {
        const bool branch_taken_0x49613c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x496140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49613Cu;
            // 0x496140: 0xaea30004  sw          $v1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49613c) {
            ctx->pc = 0x496110u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_496110;
        }
    }
    ctx->pc = 0x496144u;
    // 0x496144: 0x0  nop
    ctx->pc = 0x496144u;
    // NOP
label_496148:
    // 0x496148: 0x287082b  sltu        $at, $s4, $a3
    ctx->pc = 0x496148u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x49614c: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x49614Cu;
    {
        const bool branch_taken_0x49614c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x496150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49614Cu;
            // 0x496150: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49614c) {
            ctx->pc = 0x496238u;
            goto label_496238;
        }
    }
    ctx->pc = 0x496154u;
label_496154:
    // 0x496154: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x496154u;
    {
        const bool branch_taken_0x496154 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x496154) {
            ctx->pc = 0x496170u;
            goto label_496170;
        }
    }
    ctx->pc = 0x49615Cu;
    // 0x49615c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x49615cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x496160: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x496160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x496164: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x496164u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x496168: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x496168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x49616c: 0x0  nop
    ctx->pc = 0x49616cu;
    // NOP
label_496170:
    // 0x496170: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x496170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x496174: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x496174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x496178: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x496178u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x49617c: 0xa7182b  sltu        $v1, $a1, $a3
    ctx->pc = 0x49617cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x496180: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x496180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x496184: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x496184u;
    {
        const bool branch_taken_0x496184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x496188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x496184u;
            // 0x496188: 0xaea40004  sw          $a0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496184) {
            ctx->pc = 0x496154u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_496154;
        }
    }
    ctx->pc = 0x49618Cu;
    // 0x49618c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x49618Cu;
    {
        const bool branch_taken_0x49618c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49618c) {
            ctx->pc = 0x496238u;
            goto label_496238;
        }
    }
    ctx->pc = 0x496194u;
label_496194:
    // 0x496194: 0xe54823  subu        $t1, $a3, $a1
    ctx->pc = 0x496194u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x496198: 0x127082b  sltu        $at, $t1, $a3
    ctx->pc = 0x496198u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x49619c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x49619Cu;
    {
        const bool branch_taken_0x49619c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4961A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49619Cu;
            // 0x4961a0: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49619c) {
            ctx->pc = 0x4961E0u;
            goto label_4961e0;
        }
    }
    ctx->pc = 0x4961A4u;
label_4961a4:
    // 0x4961a4: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4961A4u;
    {
        const bool branch_taken_0x4961a4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x4961a4) {
            ctx->pc = 0x4961C0u;
            goto label_4961c0;
        }
    }
    ctx->pc = 0x4961ACu;
    // 0x4961ac: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x4961acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4961b0: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x4961b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4961b4: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x4961b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x4961b8: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x4961b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x4961bc: 0x0  nop
    ctx->pc = 0x4961bcu;
    // NOP
label_4961c0:
    // 0x4961c0: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x4961c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x4961c4: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x4961c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x4961c8: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x4961c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x4961cc: 0x127182b  sltu        $v1, $t1, $a3
    ctx->pc = 0x4961ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4961d0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4961d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4961d4: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x4961D4u;
    {
        const bool branch_taken_0x4961d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4961D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4961D4u;
            // 0x4961d8: 0xaea40004  sw          $a0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4961d4) {
            ctx->pc = 0x4961A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4961a4;
        }
    }
    ctx->pc = 0x4961DCu;
    // 0x4961dc: 0x0  nop
    ctx->pc = 0x4961dcu;
    // NOP
label_4961e0:
    // 0x4961e0: 0xd31823  subu        $v1, $a2, $s3
    ctx->pc = 0x4961e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x4961e4: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x4961e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x4961e8: 0xe41823  subu        $v1, $a3, $a0
    ctx->pc = 0x4961e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x4961ec: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x4961ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4961f0: 0x54200006  bnel        $at, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4961F0u;
    {
        const bool branch_taken_0x4961f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4961f0) {
            ctx->pc = 0x4961F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4961F0u;
            // 0x4961f4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49620Cu;
            goto label_49620c;
        }
    }
    ctx->pc = 0x4961F8u;
    // 0x4961f8: 0x247082b  sltu        $at, $s2, $a3
    ctx->pc = 0x4961f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4961fc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x4961FCu;
    {
        const bool branch_taken_0x4961fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4961fc) {
            ctx->pc = 0x496208u;
            goto label_496208;
        }
    }
    ctx->pc = 0x496204u;
    // 0x496204: 0x2459021  addu        $s2, $s2, $a1
    ctx->pc = 0x496204u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_496208:
    // 0x496208: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x496208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_49620c:
    // 0x49620c: 0x284082b  sltu        $at, $s4, $a0
    ctx->pc = 0x49620cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x496210: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x496210u;
    {
        const bool branch_taken_0x496210 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x496210) {
            ctx->pc = 0x496238u;
            goto label_496238;
        }
    }
    ctx->pc = 0x496218u;
label_496218:
    // 0x496218: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x496218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x49621c: 0x24e7fff8  addiu       $a3, $a3, -0x8
    ctx->pc = 0x49621cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
    // 0x496220: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x496220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x496224: 0x284082b  sltu        $at, $s4, $a0
    ctx->pc = 0x496224u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x496228: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x496228u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x49622c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x49622cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x496230: 0x1420fff9  bnez        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x496230u;
    {
        const bool branch_taken_0x496230 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x496234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x496230u;
            // 0x496234: 0xace30004  sw          $v1, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496230) {
            ctx->pc = 0x496218u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_496218;
        }
    }
    ctx->pc = 0x496238u;
label_496238:
    // 0x496238: 0x5260007d  beql        $s3, $zero, . + 4 + (0x7D << 2)
    ctx->pc = 0x496238u;
    {
        const bool branch_taken_0x496238 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x496238) {
            ctx->pc = 0x49623Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x496238u;
            // 0x49623c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x496430u;
            goto label_496430;
        }
    }
    ctx->pc = 0x496240u;
label_496240:
    // 0x496240: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x496240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x496244: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x496244u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x496248: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x496248u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x49624c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x49624cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x496250: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x496250u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x496254: 0x1660fffa  bnez        $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x496254u;
    {
        const bool branch_taken_0x496254 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x496258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x496254u;
            // 0x496258: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496254) {
            ctx->pc = 0x496240u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_496240;
        }
    }
    ctx->pc = 0x49625Cu;
    // 0x49625c: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x49625Cu;
    {
        const bool branch_taken_0x49625c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49625c) {
            ctx->pc = 0x49642Cu;
            goto label_49642c;
        }
    }
    ctx->pc = 0x496264u;
label_496264:
    // 0x496264: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x496264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x496268: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x496268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x49626c: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x49626cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x496270: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x496270u;
    {
        const bool branch_taken_0x496270 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x496270) {
            ctx->pc = 0x496274u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x496270u;
            // 0x496274: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x496278u;
            goto label_496278;
        }
    }
    ctx->pc = 0x496278u;
label_496278:
    // 0x496278: 0x224082b  sltu        $at, $s1, $a0
    ctx->pc = 0x496278u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x49627c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x49627Cu;
    {
        const bool branch_taken_0x49627c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49627c) {
            ctx->pc = 0x4962C0u;
            goto label_4962c0;
        }
    }
    ctx->pc = 0x496284u;
    // 0x496284: 0x3c021fff  lui         $v0, 0x1FFF
    ctx->pc = 0x496284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8191 << 16));
    // 0x496288: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x496288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49628c: 0x3c010fff  lui         $at, 0xFFF
    ctx->pc = 0x49628cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4095 << 16));
label_496290:
    // 0x496290: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x496290u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x496294: 0x221082b  sltu        $at, $s1, $at
    ctx->pc = 0x496294u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x496298: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x496298u;
    {
        const bool branch_taken_0x496298 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x496298) {
            ctx->pc = 0x4962A8u;
            goto label_4962a8;
        }
    }
    ctx->pc = 0x4962A0u;
    // 0x4962a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4962A0u;
    {
        const bool branch_taken_0x4962a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4962A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4962A0u;
            // 0x4962a4: 0x118840  sll         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4962a0) {
            ctx->pc = 0x4962B0u;
            goto label_4962b0;
        }
    }
    ctx->pc = 0x4962A8u;
label_4962a8:
    // 0x4962a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4962a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4962ac: 0x0  nop
    ctx->pc = 0x4962acu;
    // NOP
label_4962b0:
    // 0x4962b0: 0x224082b  sltu        $at, $s1, $a0
    ctx->pc = 0x4962b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4962b4: 0x5420fff6  bnel        $at, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x4962B4u;
    {
        const bool branch_taken_0x4962b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4962b4) {
            ctx->pc = 0x4962B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4962B4u;
            // 0x4962b8: 0x3c010fff  lui         $at, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x496290u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_496290;
        }
    }
    ctx->pc = 0x4962BCu;
    // 0x4962bc: 0x0  nop
    ctx->pc = 0x4962bcu;
    // NOP
label_4962c0:
    // 0x4962c0: 0xc040180  jal         func_100600
    ctx->pc = 0x4962C0u;
    SET_GPR_U32(ctx, 31, 0x4962C8u);
    ctx->pc = 0x4962C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4962C0u;
            // 0x4962c4: 0x1120c0  sll         $a0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4962C8u; }
        if (ctx->pc != 0x4962C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4962C8u; }
        if (ctx->pc != 0x4962C8u) { return; }
    }
    ctx->pc = 0x4962C8u;
label_4962c8:
    // 0x4962c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4962c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4962cc: 0x5600000a  bnel        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4962CCu;
    {
        const bool branch_taken_0x4962cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4962cc) {
            ctx->pc = 0x4962D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4962CCu;
            // 0x4962d0: 0xafb10070  sw          $s1, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4962F8u;
            goto label_4962f8;
        }
    }
    ctx->pc = 0x4962D4u;
    // 0x4962d4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x4962d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x4962d8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4962d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x4962dc: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x4962dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x4962e0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x4962e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4962e4: 0xc049e92  jal         func_127A48
    ctx->pc = 0x4962E4u;
    SET_GPR_U32(ctx, 31, 0x4962ECu);
    ctx->pc = 0x4962E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4962E4u;
            // 0x4962e8: 0x24a509b0  addiu       $a1, $a1, 0x9B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4962ECu; }
        if (ctx->pc != 0x4962ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4962ECu; }
        if (ctx->pc != 0x4962ECu) { return; }
    }
    ctx->pc = 0x4962ECu;
label_4962ec:
    // 0x4962ec: 0xc04981a  jal         func_126068
    ctx->pc = 0x4962ECu;
    SET_GPR_U32(ctx, 31, 0x4962F4u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4962F4u; }
        if (ctx->pc != 0x4962F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4962F4u; }
        if (ctx->pc != 0x4962F4u) { return; }
    }
    ctx->pc = 0x4962F4u;
label_4962f4:
    // 0x4962f4: 0xafb10070  sw          $s1, 0x70($sp)
    ctx->pc = 0x4962f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 17));
label_4962f8:
    // 0x4962f8: 0xafb00078  sw          $s0, 0x78($sp)
    ctx->pc = 0x4962f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 16));
    // 0x4962fc: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x4962fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x496300: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x496300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x496304: 0xb4082b  sltu        $at, $a1, $s4
    ctx->pc = 0x496304u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x496308: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x496308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x49630c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x49630Cu;
    {
        const bool branch_taken_0x49630c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x496310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49630Cu;
            // 0x496310: 0xa22021  addu        $a0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49630c) {
            ctx->pc = 0x496350u;
            goto label_496350;
        }
    }
    ctx->pc = 0x496314u;
label_496314:
    // 0x496314: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x496314u;
    {
        const bool branch_taken_0x496314 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x496314) {
            ctx->pc = 0x496330u;
            goto label_496330;
        }
    }
    ctx->pc = 0x49631Cu;
    // 0x49631c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x49631cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x496320: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x496320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x496324: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x496324u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x496328: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x496328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x49632c: 0x0  nop
    ctx->pc = 0x49632cu;
    // NOP
label_496330:
    // 0x496330: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x496330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x496334: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x496334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x496338: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x496338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x49633c: 0xb4102b  sltu        $v0, $a1, $s4
    ctx->pc = 0x49633cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x496340: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x496340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x496344: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x496344u;
    {
        const bool branch_taken_0x496344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x496348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x496344u;
            // 0x496348: 0xafa30074  sw          $v1, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496344) {
            ctx->pc = 0x496314u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_496314;
        }
    }
    ctx->pc = 0x49634Cu;
    // 0x49634c: 0x0  nop
    ctx->pc = 0x49634cu;
    // NOP
label_496350:
    // 0x496350: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x496350u;
    {
        const bool branch_taken_0x496350 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x496350) {
            ctx->pc = 0x496388u;
            goto label_496388;
        }
    }
    ctx->pc = 0x496358u;
label_496358:
    // 0x496358: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x496358u;
    {
        const bool branch_taken_0x496358 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x496358) {
            ctx->pc = 0x496370u;
            goto label_496370;
        }
    }
    ctx->pc = 0x496360u;
    // 0x496360: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x496360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x496364: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x496364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x496368: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x496368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x49636c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x49636cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_496370:
    // 0x496370: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x496370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x496374: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x496374u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x496378: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x496378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x49637c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x49637cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x496380: 0x1660fff5  bnez        $s3, . + 4 + (-0xB << 2)
    ctx->pc = 0x496380u;
    {
        const bool branch_taken_0x496380 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x496384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x496380u;
            // 0x496384: 0xafa20074  sw          $v0, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496380) {
            ctx->pc = 0x496358u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_496358;
        }
    }
    ctx->pc = 0x496388u;
label_496388:
    // 0x496388: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x496388u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x49638c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x49638Cu;
    {
        const bool branch_taken_0x49638c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49638c) {
            ctx->pc = 0x4963D0u;
            goto label_4963d0;
        }
    }
    ctx->pc = 0x496394u;
label_496394:
    // 0x496394: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x496394u;
    {
        const bool branch_taken_0x496394 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x496394) {
            ctx->pc = 0x4963B0u;
            goto label_4963b0;
        }
    }
    ctx->pc = 0x49639Cu;
    // 0x49639c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x49639cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4963a0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x4963a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4963a4: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x4963a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x4963a8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x4963a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x4963ac: 0x0  nop
    ctx->pc = 0x4963acu;
    // NOP
label_4963b0:
    // 0x4963b0: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x4963b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x4963b4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x4963b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x4963b8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x4963b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x4963bc: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x4963bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4963c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4963c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4963c4: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x4963C4u;
    {
        const bool branch_taken_0x4963c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4963C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4963C4u;
            // 0x4963c8: 0xafa30074  sw          $v1, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4963c4) {
            ctx->pc = 0x496394u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_496394;
        }
    }
    ctx->pc = 0x4963CCu;
    // 0x4963cc: 0x0  nop
    ctx->pc = 0x4963ccu;
    // NOP
label_4963d0:
    // 0x4963d0: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x4963d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x4963d4: 0x5055000e  beql        $v0, $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x4963D4u;
    {
        const bool branch_taken_0x4963d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x4963d4) {
            ctx->pc = 0x4963D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4963D4u;
            // 0x4963d8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x496410u;
            goto label_496410;
        }
    }
    ctx->pc = 0x4963DCu;
    // 0x4963dc: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x4963dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4963e0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4963e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4963e4: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x4963e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x4963e8: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4963e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4963ec: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x4963ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4963f0: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x4963f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x4963f4: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x4963f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x4963f8: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x4963f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
    // 0x4963fc: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x4963fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x496400: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x496400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x496404: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x496404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x496408: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x496408u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
    // 0x49640c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x49640cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_496410:
    // 0x496410: 0xc125fa0  jal         func_497E80
    ctx->pc = 0x496410u;
    SET_GPR_U32(ctx, 31, 0x496418u);
    ctx->pc = 0x497E80u;
    if (runtime->hasFunction(0x497E80u)) {
        auto targetFn = runtime->lookupFunction(0x497E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x496418u; }
        if (ctx->pc != 0x496418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00497E80_0x497e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x496418u; }
        if (ctx->pc != 0x496418u) { return; }
    }
    ctx->pc = 0x496418u;
label_496418:
    // 0x496418: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x496418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x49641c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x49641Cu;
    {
        const bool branch_taken_0x49641c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49641c) {
            ctx->pc = 0x49642Cu;
            goto label_49642c;
        }
    }
    ctx->pc = 0x496424u;
    // 0x496424: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x496424u;
    SET_GPR_U32(ctx, 31, 0x49642Cu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49642Cu; }
        if (ctx->pc != 0x49642Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49642Cu; }
        if (ctx->pc != 0x49642Cu) { return; }
    }
    ctx->pc = 0x49642Cu;
label_49642c:
    // 0x49642c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x49642cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_496430:
    // 0x496430: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x496430u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x496434: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x496434u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x496438: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x496438u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49643c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49643cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x496440: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x496440u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x496444: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x496444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x496448: 0x3e00008  jr          $ra
    ctx->pc = 0x496448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49644Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x496448u;
            // 0x49644c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x496450u;
}
