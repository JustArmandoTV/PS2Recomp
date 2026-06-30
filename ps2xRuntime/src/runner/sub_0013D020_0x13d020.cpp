#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013D020
// Address: 0x13d020 - 0x13d1a0
void sub_0013D020_0x13d020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D020_0x13d020");
#endif

    switch (ctx->pc) {
        case 0x13d070u: goto label_13d070;
        case 0x13d078u: goto label_13d078;
        case 0x13d088u: goto label_13d088;
        case 0x13d094u: goto label_13d094;
        case 0x13d0a0u: goto label_13d0a0;
        case 0x13d0a8u: goto label_13d0a8;
        case 0x13d0c4u: goto label_13d0c4;
        case 0x13d0e4u: goto label_13d0e4;
        case 0x13d0fcu: goto label_13d0fc;
        case 0x13d108u: goto label_13d108;
        case 0x13d110u: goto label_13d110;
        case 0x13d11cu: goto label_13d11c;
        case 0x13d128u: goto label_13d128;
        case 0x13d134u: goto label_13d134;
        case 0x13d14cu: goto label_13d14c;
        case 0x13d158u: goto label_13d158;
        case 0x13d160u: goto label_13d160;
        default: break;
    }

    ctx->pc = 0x13d020u;

    // 0x13d020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13d020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13d024: 0x51043  sra         $v0, $a1, 1
    ctx->pc = 0x13d024u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 1));
    // 0x13d028: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13d028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d02c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13d02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13d030: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x13d030u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x13d034: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13d034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13d038: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13d038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13d03c: 0x3c0238c9  lui         $v0, 0x38C9
    ctx->pc = 0x13d03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14537 << 16));
    // 0x13d040: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x13d040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x13d044: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13d044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d048: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x13d048u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x13d04c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x13d04cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x13d050: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x13d050u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x13d054: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x13d054u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x13d058: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13d058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d05c: 0x0  nop
    ctx->pc = 0x13d05cu;
    // NOP
    // 0x13d060: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x13d060u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13d064: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x13d064u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x13d068: 0xc0477d6  jal         func_11DF58
    ctx->pc = 0x13D068u;
    SET_GPR_U32(ctx, 31, 0x13D070u);
    ctx->pc = 0x13D06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D068u;
            // 0x13d06c: 0x46007546  mov.s       $f21, $f14 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DF58u;
    if (runtime->hasFunction(0x11DF58u)) {
        auto targetFn = runtime->lookupFunction(0x11DF58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D070u; }
        if (ctx->pc != 0x13D070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DF58_0x11df58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D070u; }
        if (ctx->pc != 0x13D070u) { return; }
    }
    ctx->pc = 0x13D070u;
label_13d070:
    // 0x13d070: 0xc049514  jal         func_125450
    ctx->pc = 0x13D070u;
    SET_GPR_U32(ctx, 31, 0x13D078u);
    ctx->pc = 0x13D074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D070u;
            // 0x13d074: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D078u; }
        if (ctx->pc != 0x13D078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D078u; }
        if (ctx->pc != 0x13D078u) { return; }
    }
    ctx->pc = 0x13D078u;
label_13d078:
    // 0x13d078: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x13d078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
    // 0x13d07c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13d07cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d080: 0xc0496ca  jal         func_125B28
    ctx->pc = 0x13D080u;
    SET_GPR_U32(ctx, 31, 0x13D088u);
    ctx->pc = 0x13D084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D080u;
            // 0x13d084: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125B28u;
    if (runtime->hasFunction(0x125B28u)) {
        auto targetFn = runtime->lookupFunction(0x125B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D088u; }
        if (ctx->pc != 0x13D088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125B28_0x125b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D088u; }
        if (ctx->pc != 0x13D088u) { return; }
    }
    ctx->pc = 0x13D088u;
label_13d088:
    // 0x13d088: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13d088u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13d08c: 0xc049514  jal         func_125450
    ctx->pc = 0x13D08Cu;
    SET_GPR_U32(ctx, 31, 0x13D094u);
    ctx->pc = 0x13D090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D08Cu;
            // 0x13d090: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D094u; }
        if (ctx->pc != 0x13D094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D094u; }
        if (ctx->pc != 0x13D094u) { return; }
    }
    ctx->pc = 0x13D094u;
label_13d094:
    // 0x13d094: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d098: 0xc0496ca  jal         func_125B28
    ctx->pc = 0x13D098u;
    SET_GPR_U32(ctx, 31, 0x13D0A0u);
    ctx->pc = 0x13D09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D098u;
            // 0x13d09c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125B28u;
    if (runtime->hasFunction(0x125B28u)) {
        auto targetFn = runtime->lookupFunction(0x125B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D0A0u; }
        if (ctx->pc != 0x13D0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125B28_0x125b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D0A0u; }
        if (ctx->pc != 0x13D0A0u) { return; }
    }
    ctx->pc = 0x13D0A0u;
label_13d0a0:
    // 0x13d0a0: 0xc0497dc  jal         func_125F70
    ctx->pc = 0x13D0A0u;
    SET_GPR_U32(ctx, 31, 0x13D0A8u);
    ctx->pc = 0x13D0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D0A0u;
            // 0x13d0a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D0A8u; }
        if (ctx->pc != 0x13D0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D0A8u; }
        if (ctx->pc != 0x13D0A8u) { return; }
    }
    ctx->pc = 0x13D0A8u;
label_13d0a8:
    // 0x13d0a8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x13d0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x13d0ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d0b0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x13d0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x13d0b4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x13d0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x13d0b8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x13d0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x13d0bc: 0xc0497dc  jal         func_125F70
    ctx->pc = 0x13D0BCu;
    SET_GPR_U32(ctx, 31, 0x13D0C4u);
    ctx->pc = 0x13D0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D0BCu;
            // 0x13d0c0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D0C4u; }
        if (ctx->pc != 0x13D0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D0C4u; }
        if (ctx->pc != 0x13D0C4u) { return; }
    }
    ctx->pc = 0x13D0C4u;
label_13d0c4:
    // 0x13d0c4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x13d0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x13d0c8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x13d0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x13d0cc: 0x4616ad01  sub.s       $f20, $f21, $f22
    ctx->pc = 0x13d0ccu;
    ctx->f[20] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
    // 0x13d0d0: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x13d0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x13d0d4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x13d0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x13d0d8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x13d0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x13d0dc: 0xc049514  jal         func_125450
    ctx->pc = 0x13D0DCu;
    SET_GPR_U32(ctx, 31, 0x13D0E4u);
    ctx->pc = 0x13D0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D0DCu;
            // 0x13d0e0: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D0E4u; }
        if (ctx->pc != 0x13D0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D0E4u; }
        if (ctx->pc != 0x13D0E4u) { return; }
    }
    ctx->pc = 0x13D0E4u;
label_13d0e4:
    // 0x13d0e4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x13d0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x13d0e8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x13d0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13d0ec: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x13d0ecu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x13d0f0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13d0f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13d0f4: 0xc049514  jal         func_125450
    ctx->pc = 0x13D0F4u;
    SET_GPR_U32(ctx, 31, 0x13D0FCu);
    ctx->pc = 0x13D0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D0F4u;
            // 0x13d0f8: 0x438826  xor         $s1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D0FCu; }
        if (ctx->pc != 0x13D0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D0FCu; }
        if (ctx->pc != 0x13D0FCu) { return; }
    }
    ctx->pc = 0x13D0FCu;
label_13d0fc:
    // 0x13d0fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d100: 0xc0496ca  jal         func_125B28
    ctx->pc = 0x13D100u;
    SET_GPR_U32(ctx, 31, 0x13D108u);
    ctx->pc = 0x13D104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D100u;
            // 0x13d104: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125B28u;
    if (runtime->hasFunction(0x125B28u)) {
        auto targetFn = runtime->lookupFunction(0x125B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D108u; }
        if (ctx->pc != 0x13D108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125B28_0x125b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D108u; }
        if (ctx->pc != 0x13D108u) { return; }
    }
    ctx->pc = 0x13D108u;
label_13d108:
    // 0x13d108: 0xc0497dc  jal         func_125F70
    ctx->pc = 0x13D108u;
    SET_GPR_U32(ctx, 31, 0x13D110u);
    ctx->pc = 0x13D10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D108u;
            // 0x13d10c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D110u; }
        if (ctx->pc != 0x13D110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D110u; }
        if (ctx->pc != 0x13D110u) { return; }
    }
    ctx->pc = 0x13D110u;
label_13d110:
    // 0x13d110: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x13d110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x13d114: 0xc049514  jal         func_125450
    ctx->pc = 0x13D114u;
    SET_GPR_U32(ctx, 31, 0x13D11Cu);
    ctx->pc = 0x13D118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D114u;
            // 0x13d118: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D11Cu; }
        if (ctx->pc != 0x13D11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D11Cu; }
        if (ctx->pc != 0x13D11Cu) { return; }
    }
    ctx->pc = 0x13D11Cu;
label_13d11c:
    // 0x13d11c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x13d11cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x13d120: 0xc049514  jal         func_125450
    ctx->pc = 0x13D120u;
    SET_GPR_U32(ctx, 31, 0x13D128u);
    ctx->pc = 0x13D124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D120u;
            // 0x13d124: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D128u; }
        if (ctx->pc != 0x13D128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D128u; }
        if (ctx->pc != 0x13D128u) { return; }
    }
    ctx->pc = 0x13D128u;
label_13d128:
    // 0x13d128: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d12c: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x13D12Cu;
    SET_GPR_U32(ctx, 31, 0x13D134u);
    ctx->pc = 0x13D130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D12Cu;
            // 0x13d130: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D134u; }
        if (ctx->pc != 0x13D134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D134u; }
        if (ctx->pc != 0x13D134u) { return; }
    }
    ctx->pc = 0x13D134u;
label_13d134:
    // 0x13d134: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x13d134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x13d138: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x13d138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13d13c: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x13d13cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x13d140: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13d140u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13d144: 0xc049514  jal         func_125450
    ctx->pc = 0x13D144u;
    SET_GPR_U32(ctx, 31, 0x13D14Cu);
    ctx->pc = 0x13D148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D144u;
            // 0x13d148: 0x438826  xor         $s1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D14Cu; }
        if (ctx->pc != 0x13D14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D14Cu; }
        if (ctx->pc != 0x13D14Cu) { return; }
    }
    ctx->pc = 0x13D14Cu;
label_13d14c:
    // 0x13d14c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d150: 0xc0496ca  jal         func_125B28
    ctx->pc = 0x13D150u;
    SET_GPR_U32(ctx, 31, 0x13D158u);
    ctx->pc = 0x13D154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D150u;
            // 0x13d154: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125B28u;
    if (runtime->hasFunction(0x125B28u)) {
        auto targetFn = runtime->lookupFunction(0x125B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D158u; }
        if (ctx->pc != 0x13D158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125B28_0x125b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D158u; }
        if (ctx->pc != 0x13D158u) { return; }
    }
    ctx->pc = 0x13D158u;
label_13d158:
    // 0x13d158: 0xc0497dc  jal         func_125F70
    ctx->pc = 0x13D158u;
    SET_GPR_U32(ctx, 31, 0x13D160u);
    ctx->pc = 0x13D15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D158u;
            // 0x13d15c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D160u; }
        if (ctx->pc != 0x13D160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D160u; }
        if (ctx->pc != 0x13D160u) { return; }
    }
    ctx->pc = 0x13D160u;
label_13d160:
    // 0x13d160: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x13d160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x13d164: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x13d164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x13d168: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x13d168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x13d16c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x13d16cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x13d170: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x13d170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x13d174: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x13d174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x13d178: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13d178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13d17c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x13d17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x13d180: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13d180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d184: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x13d184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13d188: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13d188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d18c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x13d18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13d190: 0x3e00008  jr          $ra
    ctx->pc = 0x13D190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D190u;
            // 0x13d194: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13D198u;
    // 0x13d198: 0x0  nop
    ctx->pc = 0x13d198u;
    // NOP
    // 0x13d19c: 0x0  nop
    ctx->pc = 0x13d19cu;
    // NOP
}
