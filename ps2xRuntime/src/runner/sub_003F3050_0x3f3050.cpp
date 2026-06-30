#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F3050
// Address: 0x3f3050 - 0x3f3450
void sub_003F3050_0x3f3050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F3050_0x3f3050");
#endif

    switch (ctx->pc) {
        case 0x3f30c8u: goto label_3f30c8;
        case 0x3f30d0u: goto label_3f30d0;
        case 0x3f3120u: goto label_3f3120;
        case 0x3f3164u: goto label_3f3164;
        case 0x3f31b4u: goto label_3f31b4;
        case 0x3f3228u: goto label_3f3228;
        case 0x3f3250u: goto label_3f3250;
        case 0x3f32a0u: goto label_3f32a0;
        case 0x3f32d8u: goto label_3f32d8;
        case 0x3f32fcu: goto label_3f32fc;
        case 0x3f3304u: goto label_3f3304;
        case 0x3f3324u: goto label_3f3324;
        case 0x3f3368u: goto label_3f3368;
        case 0x3f33a4u: goto label_3f33a4;
        case 0x3f3428u: goto label_3f3428;
        default: break;
    }

    ctx->pc = 0x3f3050u;

    // 0x3f3050: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3f3050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3f3054: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3f3054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3f3058: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3f3058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3f305c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3f305cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3f3060: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3f3060u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3064: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3f3064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3f3068: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3f3068u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f306c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f306cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3f3070: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3f3070u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3074: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f3074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f3078: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3f3078u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f307c: 0x126000ea  beqz        $s3, . + 4 + (0xEA << 2)
    ctx->pc = 0x3F307Cu;
    {
        const bool branch_taken_0x3f307c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F307Cu;
            // 0x3f3080: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f307c) {
            ctx->pc = 0x3F3428u;
            goto label_3f3428;
        }
    }
    ctx->pc = 0x3F3084u;
    // 0x3f3084: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x3f3084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
    // 0x3f3088: 0x261082b  sltu        $at, $s3, $at
    ctx->pc = 0x3f3088u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x3f308c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F308Cu;
    {
        const bool branch_taken_0x3f308c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f308c) {
            ctx->pc = 0x3F30B0u;
            goto label_3f30b0;
        }
    }
    ctx->pc = 0x3F3094u;
    // 0x3f3094: 0x3c031fff  lui         $v1, 0x1FFF
    ctx->pc = 0x3f3094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8191 << 16));
    // 0x3f3098: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x3f3098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x3f309c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3f309cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3f30a0: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x3f30a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3f30a4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3f30a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3f30a8: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3F30A8u;
    {
        const bool branch_taken_0x3f30a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f30a8) {
            ctx->pc = 0x3F30ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F30A8u;
            // 0x3f30ac: 0x8ea50004  lw          $a1, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F30D4u;
            goto label_3f30d4;
        }
    }
    ctx->pc = 0x3F30B0u;
label_3f30b0:
    // 0x3f30b0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x3f30b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x3f30b4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3f30b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3f30b8: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x3f30b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x3f30bc: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x3f30bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3f30c0: 0xc049e92  jal         func_127A48
    ctx->pc = 0x3F30C0u;
    SET_GPR_U32(ctx, 31, 0x3F30C8u);
    ctx->pc = 0x3F30C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F30C0u;
            // 0x3f30c4: 0x24a5a3a0  addiu       $a1, $a1, -0x5C60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F30C8u; }
        if (ctx->pc != 0x3F30C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F30C8u; }
        if (ctx->pc != 0x3F30C8u) { return; }
    }
    ctx->pc = 0x3F30C8u;
label_3f30c8:
    // 0x3f30c8: 0xc04981a  jal         func_126068
    ctx->pc = 0x3F30C8u;
    SET_GPR_U32(ctx, 31, 0x3F30D0u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F30D0u; }
        if (ctx->pc != 0x3F30D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F30D0u; }
        if (ctx->pc != 0x3F30D0u) { return; }
    }
    ctx->pc = 0x3F30D0u;
label_3f30d0:
    // 0x3f30d0: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x3f30d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3f30d4:
    // 0x3f30d4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3f30d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3f30d8: 0xb32021  addu        $a0, $a1, $s3
    ctx->pc = 0x3f30d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x3f30dc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3f30dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3f30e0: 0x54200064  bnel        $at, $zero, . + 4 + (0x64 << 2)
    ctx->pc = 0x3F30E0u;
    {
        const bool branch_taken_0x3f30e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f30e0) {
            ctx->pc = 0x3F30E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F30E0u;
            // 0x3f30e4: 0xafa00070  sw          $zero, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F3274u;
            goto label_3f3274;
        }
    }
    ctx->pc = 0x3F30E8u;
    // 0x3f30e8: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x3f30e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x3f30ec: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x3f30ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3f30f0: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x3f30f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3f30f4: 0xf41823  subu        $v1, $a3, $s4
    ctx->pc = 0x3f30f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x3f30f8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F30F8u;
    {
        const bool branch_taken_0x3f30f8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x3F30FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F30F8u;
            // 0x3f30fc: 0x330c3  sra         $a2, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f30f8) {
            ctx->pc = 0x3F3108u;
            goto label_3f3108;
        }
    }
    ctx->pc = 0x3F3100u;
    // 0x3f3100: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x3f3100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x3f3104: 0x330c3  sra         $a2, $v1, 3
    ctx->pc = 0x3f3104u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 3));
label_3f3108:
    // 0x3f3108: 0xd3082b  sltu        $at, $a2, $s3
    ctx->pc = 0x3f3108u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f310c: 0x50200025  beql        $at, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x3F310Cu;
    {
        const bool branch_taken_0x3f310c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f310c) {
            ctx->pc = 0x3F3110u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F310Cu;
            // 0x3f3110: 0x1328c0  sll         $a1, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F31A4u;
            goto label_3f31a4;
        }
    }
    ctx->pc = 0x3F3114u;
    // 0x3f3114: 0xd3082b  sltu        $at, $a2, $s3
    ctx->pc = 0x3f3114u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f3118: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x3F3118u;
    {
        const bool branch_taken_0x3f3118 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F311Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3118u;
            // 0x3f311c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3118) {
            ctx->pc = 0x3F3158u;
            goto label_3f3158;
        }
    }
    ctx->pc = 0x3F3120u;
label_3f3120:
    // 0x3f3120: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F3120u;
    {
        const bool branch_taken_0x3f3120 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3120) {
            ctx->pc = 0x3F3138u;
            goto label_3f3138;
        }
    }
    ctx->pc = 0x3F3128u;
    // 0x3f3128: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x3f3128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f312c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x3f312cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f3130: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x3f3130u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3f3134: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x3f3134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
label_3f3138:
    // 0x3f3138: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x3f3138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x3f313c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3f313cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x3f3140: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x3f3140u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x3f3144: 0xd3082b  sltu        $at, $a2, $s3
    ctx->pc = 0x3f3144u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f3148: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f3148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3f314c: 0x1420fff4  bnez        $at, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F314Cu;
    {
        const bool branch_taken_0x3f314c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F3150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F314Cu;
            // 0x3f3150: 0xaea30004  sw          $v1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f314c) {
            ctx->pc = 0x3F3120u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f3120;
        }
    }
    ctx->pc = 0x3F3154u;
    // 0x3f3154: 0x0  nop
    ctx->pc = 0x3f3154u;
    // NOP
label_3f3158:
    // 0x3f3158: 0x287082b  sltu        $at, $s4, $a3
    ctx->pc = 0x3f3158u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3f315c: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x3F315Cu;
    {
        const bool branch_taken_0x3f315c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F315Cu;
            // 0x3f3160: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f315c) {
            ctx->pc = 0x3F3248u;
            goto label_3f3248;
        }
    }
    ctx->pc = 0x3F3164u;
label_3f3164:
    // 0x3f3164: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F3164u;
    {
        const bool branch_taken_0x3f3164 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3164) {
            ctx->pc = 0x3F3180u;
            goto label_3f3180;
        }
    }
    ctx->pc = 0x3F316Cu;
    // 0x3f316c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x3f316cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f3170: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x3f3170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f3174: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x3f3174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3f3178: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x3f3178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x3f317c: 0x0  nop
    ctx->pc = 0x3f317cu;
    // NOP
label_3f3180:
    // 0x3f3180: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x3f3180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x3f3184: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3f3184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3f3188: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x3f3188u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x3f318c: 0xa7182b  sltu        $v1, $a1, $a3
    ctx->pc = 0x3f318cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3f3190: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3f3190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3f3194: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x3F3194u;
    {
        const bool branch_taken_0x3f3194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F3198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3194u;
            // 0x3f3198: 0xaea40004  sw          $a0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3194) {
            ctx->pc = 0x3F3164u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f3164;
        }
    }
    ctx->pc = 0x3F319Cu;
    // 0x3f319c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x3F319Cu;
    {
        const bool branch_taken_0x3f319c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f319c) {
            ctx->pc = 0x3F3248u;
            goto label_3f3248;
        }
    }
    ctx->pc = 0x3F31A4u;
label_3f31a4:
    // 0x3f31a4: 0xe54823  subu        $t1, $a3, $a1
    ctx->pc = 0x3f31a4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x3f31a8: 0x127082b  sltu        $at, $t1, $a3
    ctx->pc = 0x3f31a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3f31ac: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F31ACu;
    {
        const bool branch_taken_0x3f31ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F31B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F31ACu;
            // 0x3f31b0: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f31ac) {
            ctx->pc = 0x3F31F0u;
            goto label_3f31f0;
        }
    }
    ctx->pc = 0x3F31B4u;
label_3f31b4:
    // 0x3f31b4: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F31B4u;
    {
        const bool branch_taken_0x3f31b4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f31b4) {
            ctx->pc = 0x3F31D0u;
            goto label_3f31d0;
        }
    }
    ctx->pc = 0x3F31BCu;
    // 0x3f31bc: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x3f31bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f31c0: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x3f31c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f31c4: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x3f31c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3f31c8: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x3f31c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x3f31cc: 0x0  nop
    ctx->pc = 0x3f31ccu;
    // NOP
label_3f31d0:
    // 0x3f31d0: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x3f31d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x3f31d4: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x3f31d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x3f31d8: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x3f31d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x3f31dc: 0x127182b  sltu        $v1, $t1, $a3
    ctx->pc = 0x3f31dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3f31e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3f31e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3f31e4: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x3F31E4u;
    {
        const bool branch_taken_0x3f31e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F31E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F31E4u;
            // 0x3f31e8: 0xaea40004  sw          $a0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f31e4) {
            ctx->pc = 0x3F31B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f31b4;
        }
    }
    ctx->pc = 0x3F31ECu;
    // 0x3f31ec: 0x0  nop
    ctx->pc = 0x3f31ecu;
    // NOP
label_3f31f0:
    // 0x3f31f0: 0xd31823  subu        $v1, $a2, $s3
    ctx->pc = 0x3f31f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x3f31f4: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x3f31f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3f31f8: 0xe41823  subu        $v1, $a3, $a0
    ctx->pc = 0x3f31f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3f31fc: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x3f31fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3f3200: 0x54200006  bnel        $at, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F3200u;
    {
        const bool branch_taken_0x3f3200 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f3200) {
            ctx->pc = 0x3F3204u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3200u;
            // 0x3f3204: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F321Cu;
            goto label_3f321c;
        }
    }
    ctx->pc = 0x3F3208u;
    // 0x3f3208: 0x247082b  sltu        $at, $s2, $a3
    ctx->pc = 0x3f3208u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3f320c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3F320Cu;
    {
        const bool branch_taken_0x3f320c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f320c) {
            ctx->pc = 0x3F3218u;
            goto label_3f3218;
        }
    }
    ctx->pc = 0x3F3214u;
    // 0x3f3214: 0x2459021  addu        $s2, $s2, $a1
    ctx->pc = 0x3f3214u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_3f3218:
    // 0x3f3218: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x3f3218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_3f321c:
    // 0x3f321c: 0x284082b  sltu        $at, $s4, $a0
    ctx->pc = 0x3f321cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3f3220: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F3220u;
    {
        const bool branch_taken_0x3f3220 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3220) {
            ctx->pc = 0x3F3248u;
            goto label_3f3248;
        }
    }
    ctx->pc = 0x3F3228u;
label_3f3228:
    // 0x3f3228: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x3f3228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x3f322c: 0x24e7fff8  addiu       $a3, $a3, -0x8
    ctx->pc = 0x3f322cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
    // 0x3f3230: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3f3230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3f3234: 0x284082b  sltu        $at, $s4, $a0
    ctx->pc = 0x3f3234u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3f3238: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x3f3238u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x3f323c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3f323cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3f3240: 0x1420fff9  bnez        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3F3240u;
    {
        const bool branch_taken_0x3f3240 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F3244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3240u;
            // 0x3f3244: 0xace30004  sw          $v1, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3240) {
            ctx->pc = 0x3F3228u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f3228;
        }
    }
    ctx->pc = 0x3F3248u;
label_3f3248:
    // 0x3f3248: 0x52600078  beql        $s3, $zero, . + 4 + (0x78 << 2)
    ctx->pc = 0x3F3248u;
    {
        const bool branch_taken_0x3f3248 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3248) {
            ctx->pc = 0x3F324Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3248u;
            // 0x3f324c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F342Cu;
            goto label_3f342c;
        }
    }
    ctx->pc = 0x3F3250u;
label_3f3250:
    // 0x3f3250: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3f3250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3f3254: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3f3254u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x3f3258: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x3f3258u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x3f325c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3f325cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3f3260: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x3f3260u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x3f3264: 0x1660fffa  bnez        $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3F3264u;
    {
        const bool branch_taken_0x3f3264 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F3268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3264u;
            // 0x3f3268: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3264) {
            ctx->pc = 0x3F3250u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f3250;
        }
    }
    ctx->pc = 0x3F326Cu;
    // 0x3f326c: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x3F326Cu;
    {
        const bool branch_taken_0x3f326c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f326c) {
            ctx->pc = 0x3F3428u;
            goto label_3f3428;
        }
    }
    ctx->pc = 0x3F3274u;
label_3f3274:
    // 0x3f3274: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x3f3274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x3f3278: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x3f3278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x3f327c: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x3f327cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3f3280: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3F3280u;
    {
        const bool branch_taken_0x3f3280 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3280) {
            ctx->pc = 0x3F3284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3280u;
            // 0x3f3284: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F3288u;
            goto label_3f3288;
        }
    }
    ctx->pc = 0x3F3288u;
label_3f3288:
    // 0x3f3288: 0x224082b  sltu        $at, $s1, $a0
    ctx->pc = 0x3f3288u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3f328c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F328Cu;
    {
        const bool branch_taken_0x3f328c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f328c) {
            ctx->pc = 0x3F32D0u;
            goto label_3f32d0;
        }
    }
    ctx->pc = 0x3F3294u;
    // 0x3f3294: 0x3c021fff  lui         $v0, 0x1FFF
    ctx->pc = 0x3f3294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8191 << 16));
    // 0x3f3298: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3f3298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3f329c: 0x3c010fff  lui         $at, 0xFFF
    ctx->pc = 0x3f329cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4095 << 16));
label_3f32a0:
    // 0x3f32a0: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x3f32a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x3f32a4: 0x221082b  sltu        $at, $s1, $at
    ctx->pc = 0x3f32a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x3f32a8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F32A8u;
    {
        const bool branch_taken_0x3f32a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f32a8) {
            ctx->pc = 0x3F32B8u;
            goto label_3f32b8;
        }
    }
    ctx->pc = 0x3F32B0u;
    // 0x3f32b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F32B0u;
    {
        const bool branch_taken_0x3f32b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F32B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F32B0u;
            // 0x3f32b4: 0x118840  sll         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f32b0) {
            ctx->pc = 0x3F32C0u;
            goto label_3f32c0;
        }
    }
    ctx->pc = 0x3F32B8u;
label_3f32b8:
    // 0x3f32b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3f32b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f32bc: 0x0  nop
    ctx->pc = 0x3f32bcu;
    // NOP
label_3f32c0:
    // 0x3f32c0: 0x224082b  sltu        $at, $s1, $a0
    ctx->pc = 0x3f32c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3f32c4: 0x5420fff6  bnel        $at, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x3F32C4u;
    {
        const bool branch_taken_0x3f32c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f32c4) {
            ctx->pc = 0x3F32C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F32C4u;
            // 0x3f32c8: 0x3c010fff  lui         $at, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F32A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f32a0;
        }
    }
    ctx->pc = 0x3F32CCu;
    // 0x3f32cc: 0x0  nop
    ctx->pc = 0x3f32ccu;
    // NOP
label_3f32d0:
    // 0x3f32d0: 0xc040180  jal         func_100600
    ctx->pc = 0x3F32D0u;
    SET_GPR_U32(ctx, 31, 0x3F32D8u);
    ctx->pc = 0x3F32D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F32D0u;
            // 0x3f32d4: 0x1120c0  sll         $a0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F32D8u; }
        if (ctx->pc != 0x3F32D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F32D8u; }
        if (ctx->pc != 0x3F32D8u) { return; }
    }
    ctx->pc = 0x3F32D8u;
label_3f32d8:
    // 0x3f32d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f32d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f32dc: 0x5600000a  bnel        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3F32DCu;
    {
        const bool branch_taken_0x3f32dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f32dc) {
            ctx->pc = 0x3F32E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F32DCu;
            // 0x3f32e0: 0xafb10070  sw          $s1, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F3308u;
            goto label_3f3308;
        }
    }
    ctx->pc = 0x3F32E4u;
    // 0x3f32e4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x3f32e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x3f32e8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3f32e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3f32ec: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x3f32ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x3f32f0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x3f32f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3f32f4: 0xc049e92  jal         func_127A48
    ctx->pc = 0x3F32F4u;
    SET_GPR_U32(ctx, 31, 0x3F32FCu);
    ctx->pc = 0x3F32F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F32F4u;
            // 0x3f32f8: 0x24a5a3e0  addiu       $a1, $a1, -0x5C20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F32FCu; }
        if (ctx->pc != 0x3F32FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F32FCu; }
        if (ctx->pc != 0x3F32FCu) { return; }
    }
    ctx->pc = 0x3F32FCu;
label_3f32fc:
    // 0x3f32fc: 0xc04981a  jal         func_126068
    ctx->pc = 0x3F32FCu;
    SET_GPR_U32(ctx, 31, 0x3F3304u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3304u; }
        if (ctx->pc != 0x3F3304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3304u; }
        if (ctx->pc != 0x3F3304u) { return; }
    }
    ctx->pc = 0x3F3304u;
label_3f3304:
    // 0x3f3304: 0xafb10070  sw          $s1, 0x70($sp)
    ctx->pc = 0x3f3304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 17));
label_3f3308:
    // 0x3f3308: 0xafb00078  sw          $s0, 0x78($sp)
    ctx->pc = 0x3f3308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 16));
    // 0x3f330c: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x3f330cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x3f3310: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x3f3310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x3f3314: 0xb4082b  sltu        $at, $a1, $s4
    ctx->pc = 0x3f3314u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x3f3318: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3f3318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3f331c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F331Cu;
    {
        const bool branch_taken_0x3f331c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F331Cu;
            // 0x3f3320: 0xa22021  addu        $a0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f331c) {
            ctx->pc = 0x3F3360u;
            goto label_3f3360;
        }
    }
    ctx->pc = 0x3F3324u;
label_3f3324:
    // 0x3f3324: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F3324u;
    {
        const bool branch_taken_0x3f3324 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3324) {
            ctx->pc = 0x3F3340u;
            goto label_3f3340;
        }
    }
    ctx->pc = 0x3F332Cu;
    // 0x3f332c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x3f332cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f3330: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x3f3330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f3334: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x3f3334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x3f3338: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x3f3338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x3f333c: 0x0  nop
    ctx->pc = 0x3f333cu;
    // NOP
label_3f3340:
    // 0x3f3340: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x3f3340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x3f3344: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3f3344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3f3348: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3f3348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3f334c: 0xb4102b  sltu        $v0, $a1, $s4
    ctx->pc = 0x3f334cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x3f3350: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f3350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3f3354: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x3F3354u;
    {
        const bool branch_taken_0x3f3354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F3358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3354u;
            // 0x3f3358: 0xafa30074  sw          $v1, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3354) {
            ctx->pc = 0x3F3324u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f3324;
        }
    }
    ctx->pc = 0x3F335Cu;
    // 0x3f335c: 0x0  nop
    ctx->pc = 0x3f335cu;
    // NOP
label_3f3360:
    // 0x3f3360: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x3F3360u;
    {
        const bool branch_taken_0x3f3360 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3360) {
            ctx->pc = 0x3F3398u;
            goto label_3f3398;
        }
    }
    ctx->pc = 0x3F3368u;
label_3f3368:
    // 0x3f3368: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F3368u;
    {
        const bool branch_taken_0x3f3368 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3368) {
            ctx->pc = 0x3F3380u;
            goto label_3f3380;
        }
    }
    ctx->pc = 0x3F3370u;
    // 0x3f3370: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x3f3370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f3374: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x3f3374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f3378: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x3f3378u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x3f337c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x3f337cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_3f3380:
    // 0x3f3380: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x3f3380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x3f3384: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3f3384u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x3f3388: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3f3388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3f338c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3f338cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3f3390: 0x1660fff5  bnez        $s3, . + 4 + (-0xB << 2)
    ctx->pc = 0x3F3390u;
    {
        const bool branch_taken_0x3f3390 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F3394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3390u;
            // 0x3f3394: 0xafa20074  sw          $v0, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3390) {
            ctx->pc = 0x3F3368u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f3368;
        }
    }
    ctx->pc = 0x3F3398u;
label_3f3398:
    // 0x3f3398: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x3f3398u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3f339c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F339Cu;
    {
        const bool branch_taken_0x3f339c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f339c) {
            ctx->pc = 0x3F33E0u;
            goto label_3f33e0;
        }
    }
    ctx->pc = 0x3F33A4u;
label_3f33a4:
    // 0x3f33a4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F33A4u;
    {
        const bool branch_taken_0x3f33a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f33a4) {
            ctx->pc = 0x3F33C0u;
            goto label_3f33c0;
        }
    }
    ctx->pc = 0x3F33ACu;
    // 0x3f33ac: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x3f33acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3f33b0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x3f33b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3f33b4: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x3f33b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x3f33b8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x3f33b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x3f33bc: 0x0  nop
    ctx->pc = 0x3f33bcu;
    // NOP
label_3f33c0:
    // 0x3f33c0: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x3f33c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x3f33c4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3f33c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3f33c8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3f33c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3f33cc: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x3f33ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3f33d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f33d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3f33d4: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x3F33D4u;
    {
        const bool branch_taken_0x3f33d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F33D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F33D4u;
            // 0x3f33d8: 0xafa30074  sw          $v1, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f33d4) {
            ctx->pc = 0x3F33A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f33a4;
        }
    }
    ctx->pc = 0x3F33DCu;
    // 0x3f33dc: 0x0  nop
    ctx->pc = 0x3f33dcu;
    // NOP
label_3f33e0:
    // 0x3f33e0: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x3f33e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3f33e4: 0x5055000e  beql        $v0, $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x3F33E4u;
    {
        const bool branch_taken_0x3f33e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x3f33e4) {
            ctx->pc = 0x3F33E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F33E4u;
            // 0x3f33e8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F3420u;
            goto label_3f3420;
        }
    }
    ctx->pc = 0x3F33ECu;
    // 0x3f33ec: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x3f33ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3f33f0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3f33f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3f33f4: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x3f33f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x3f33f8: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x3f33f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x3f33fc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x3f33fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3f3400: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x3f3400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x3f3404: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x3f3404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x3f3408: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x3f3408u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
    // 0x3f340c: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x3f340cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x3f3410: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x3f3410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x3f3414: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x3f3414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x3f3418: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x3f3418u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
    // 0x3f341c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3f341cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3f3420:
    // 0x3f3420: 0xc0b4b3c  jal         func_2D2CF0
    ctx->pc = 0x3F3420u;
    SET_GPR_U32(ctx, 31, 0x3F3428u);
    ctx->pc = 0x3F3424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3420u;
            // 0x3f3424: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2CF0u;
    if (runtime->hasFunction(0x2D2CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2D2CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3428u; }
        if (ctx->pc != 0x3F3428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2CF0_0x2d2cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F3428u; }
        if (ctx->pc != 0x3F3428u) { return; }
    }
    ctx->pc = 0x3F3428u;
label_3f3428:
    // 0x3f3428: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3f3428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3f342c:
    // 0x3f342c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3f342cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f3430: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3f3430u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f3434: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f3434u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f3438: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f3438u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f343c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f343cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f3440: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f3440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f3444: 0x3e00008  jr          $ra
    ctx->pc = 0x3F3444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F3448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F3444u;
            // 0x3f3448: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F344Cu;
    // 0x3f344c: 0x0  nop
    ctx->pc = 0x3f344cu;
    // NOP
}
