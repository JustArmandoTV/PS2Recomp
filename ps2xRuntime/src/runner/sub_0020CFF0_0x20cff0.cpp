#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020CFF0
// Address: 0x20cff0 - 0x20d278
void sub_0020CFF0_0x20cff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CFF0_0x20cff0");
#endif

    switch (ctx->pc) {
        case 0x20d038u: goto label_20d038;
        case 0x20d0a4u: goto label_20d0a4;
        case 0x20d0c8u: goto label_20d0c8;
        case 0x20d0ecu: goto label_20d0ec;
        case 0x20d0f8u: goto label_20d0f8;
        case 0x20d104u: goto label_20d104;
        case 0x20d118u: goto label_20d118;
        case 0x20d124u: goto label_20d124;
        case 0x20d150u: goto label_20d150;
        case 0x20d164u: goto label_20d164;
        case 0x20d194u: goto label_20d194;
        default: break;
    }

    ctx->pc = 0x20cff0u;

    // 0x20cff0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20cff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20cff4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x20cff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x20cff8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20cff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20cffc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x20cffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x20d000: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x20d000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x20d004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20d004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20d008: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20d008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x20d00c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20d00cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d010: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x20d010u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x20d014: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x20d014u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    // 0x20d018: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x20d018u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x20d01c: 0x2610e4b0  addiu       $s0, $s0, -0x1B50
    ctx->pc = 0x20d01cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960304));
    // 0x20d020: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x20d020u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x20d024: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x20d024u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x20d028: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x20d028u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20d02c: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x20d02cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x20d030: 0x461405c1  sub.s       $f23, $f0, $f20
    ctx->pc = 0x20d030u;
    ctx->f[23] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x20d034: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x20d034u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_20d038:
    // 0x20d038: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x20d038u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20d03c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x20d03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x20d040: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x20d040u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20d044: 0x3c033e56  lui         $v1, 0x3E56
    ctx->pc = 0x20d044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15958 << 16));
    // 0x20d048: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x20d048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x20d04c: 0x34637750  ori         $v1, $v1, 0x7750
    ctx->pc = 0x20d04cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30544);
    // 0x20d050: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20d050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20d054: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x20d054u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20d058: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x20d058u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20d05c: 0x46006018  adda.s      $f12, $f0
    ctx->pc = 0x20d05cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x20d060: 0x4601159c  madd.s      $f22, $f2, $f1
    ctx->pc = 0x20d060u;
    ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x20d064: 0x460cb034  c.lt.s      $f22, $f12
    ctx->pc = 0x20d064u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d068: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x20D068u;
    {
        const bool branch_taken_0x20d068 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20d068) {
            ctx->pc = 0x20D110u;
            goto label_20d110;
        }
    }
    ctx->pc = 0x20D070u;
    // 0x20d070: 0x4600b045  abs.s       $f1, $f22
    ctx->pc = 0x20d070u;
    ctx->f[1] = FPU_ABS_S(ctx->f[22]);
    // 0x20d074: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x20d074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x20d078: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x20d078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x20d07c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20d07cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20d080: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20d080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x20d084: 0x46010601  sub.s       $f24, $f0, $f1
    ctx->pc = 0x20d084u;
    ctx->f[24] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20d088: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x20d088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x20d08c: 0x4615c581  sub.s       $f22, $f24, $f21
    ctx->pc = 0x20d08cu;
    ctx->f[22] = FPU_SUB_S(ctx->f[24], ctx->f[21]);
    // 0x20d090: 0x4614b036  c.le.s      $f22, $f20
    ctx->pc = 0x20d090u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d094: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x20D094u;
    {
        const bool branch_taken_0x20d094 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20D098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D094u;
            // 0x20d098: 0xe60c0004  swc1        $f12, 0x4($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d094) {
            ctx->pc = 0x20D0B0u;
            goto label_20d0b0;
        }
    }
    ctx->pc = 0x20D09Cu;
    // 0x20d09c: 0xc047714  jal         func_11DC50
    ctx->pc = 0x20D09Cu;
    SET_GPR_U32(ctx, 31, 0x20D0A4u);
    ctx->pc = 0x20D0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D09Cu;
            // 0x20d0a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DC50u;
    if (runtime->hasFunction(0x11DC50u)) {
        auto targetFn = runtime->lookupFunction(0x11DC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D0A4u; }
        if (ctx->pc != 0x20D0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DC50_0x11dc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D0A4u; }
        if (ctx->pc != 0x20D0A4u) { return; }
    }
    ctx->pc = 0x20D0A4u;
label_20d0a4:
    // 0x20d0a4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x20D0A4u;
    {
        const bool branch_taken_0x20d0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D0A4u;
            // 0x20d0a8: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d0a4) {
            ctx->pc = 0x20D0D0u;
            goto label_20d0d0;
        }
    }
    ctx->pc = 0x20D0ACu;
    // 0x20d0ac: 0x0  nop
    ctx->pc = 0x20d0acu;
    // NOP
label_20d0b0:
    // 0x20d0b0: 0x460cb036  c.le.s      $f22, $f12
    ctx->pc = 0x20d0b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d0b4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x20D0B4u;
    {
        const bool branch_taken_0x20d0b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20d0b4) {
            ctx->pc = 0x20D0C0u;
            goto label_20d0c0;
        }
    }
    ctx->pc = 0x20D0BCu;
    // 0x20d0bc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x20d0bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_20d0c0:
    // 0x20d0c0: 0xc047714  jal         func_11DC50
    ctx->pc = 0x20D0C0u;
    SET_GPR_U32(ctx, 31, 0x20D0C8u);
    ctx->pc = 0x11DC50u;
    if (runtime->hasFunction(0x11DC50u)) {
        auto targetFn = runtime->lookupFunction(0x11DC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D0C8u; }
        if (ctx->pc != 0x20D0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DC50_0x11dc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D0C8u; }
        if (ctx->pc != 0x20D0C8u) { return; }
    }
    ctx->pc = 0x20D0C8u;
label_20d0c8:
    // 0x20d0c8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x20d0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x20d0cc: 0x0  nop
    ctx->pc = 0x20d0ccu;
    // NOP
label_20d0d0:
    // 0x20d0d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20d0d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20d0d4: 0x0  nop
    ctx->pc = 0x20d0d4u;
    // NOP
    // 0x20d0d8: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x20d0d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d0dc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x20D0DCu;
    {
        const bool branch_taken_0x20d0dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20d0dc) {
            ctx->pc = 0x20D0E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20D0DCu;
            // 0x20d0e0: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20D0E4u;
            goto label_20d0e4;
        }
    }
    ctx->pc = 0x20D0E4u;
label_20d0e4:
    // 0x20d0e4: 0xc047714  jal         func_11DC50
    ctx->pc = 0x20D0E4u;
    SET_GPR_U32(ctx, 31, 0x20D0ECu);
    ctx->pc = 0x20D0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D0E4u;
            // 0x20d0e8: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DC50u;
    if (runtime->hasFunction(0x11DC50u)) {
        auto targetFn = runtime->lookupFunction(0x11DC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D0ECu; }
        if (ctx->pc != 0x20D0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DC50_0x11dc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D0ECu; }
        if (ctx->pc != 0x20D0ECu) { return; }
    }
    ctx->pc = 0x20D0ECu;
label_20d0ec:
    // 0x20d0ec: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x20d0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x20d0f0: 0xc047714  jal         func_11DC50
    ctx->pc = 0x20D0F0u;
    SET_GPR_U32(ctx, 31, 0x20D0F8u);
    ctx->pc = 0x20D0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D0F0u;
            // 0x20d0f4: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DC50u;
    if (runtime->hasFunction(0x11DC50u)) {
        auto targetFn = runtime->lookupFunction(0x11DC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D0F8u; }
        if (ctx->pc != 0x20D0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DC50_0x11dc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D0F8u; }
        if (ctx->pc != 0x20D0F8u) { return; }
    }
    ctx->pc = 0x20D0F8u;
label_20d0f8:
    // 0x20d0f8: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x20d0f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x20d0fc: 0xc0477a8  jal         func_11DEA0
    ctx->pc = 0x20D0FCu;
    SET_GPR_U32(ctx, 31, 0x20D104u);
    ctx->pc = 0x20D100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D0FCu;
            // 0x20d100: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D104u; }
        if (ctx->pc != 0x20D104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D104u; }
        if (ctx->pc != 0x20D104u) { return; }
    }
    ctx->pc = 0x20D104u;
label_20d104:
    // 0x20d104: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x20D104u;
    {
        const bool branch_taken_0x20d104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D104u;
            // 0x20d108: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d104) {
            ctx->pc = 0x20D1A8u;
            goto label_20d1a8;
        }
    }
    ctx->pc = 0x20D10Cu;
    // 0x20d10c: 0x0  nop
    ctx->pc = 0x20d10cu;
    // NOP
label_20d110:
    // 0x20d110: 0xc047714  jal         func_11DC50
    ctx->pc = 0x20D110u;
    SET_GPR_U32(ctx, 31, 0x20D118u);
    ctx->pc = 0x20D114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D110u;
            // 0x20d114: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DC50u;
    if (runtime->hasFunction(0x11DC50u)) {
        auto targetFn = runtime->lookupFunction(0x11DC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D118u; }
        if (ctx->pc != 0x20D118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DC50_0x11dc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D118u; }
        if (ctx->pc != 0x20D118u) { return; }
    }
    ctx->pc = 0x20D118u;
label_20d118:
    // 0x20d118: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x20d118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x20d11c: 0xc0477a8  jal         func_11DEA0
    ctx->pc = 0x20D11Cu;
    SET_GPR_U32(ctx, 31, 0x20D124u);
    ctx->pc = 0x20D120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D11Cu;
            // 0x20d120: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D124u; }
        if (ctx->pc != 0x20D124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D124u; }
        if (ctx->pc != 0x20D124u) { return; }
    }
    ctx->pc = 0x20D124u;
label_20d124:
    // 0x20d124: 0x4615b580  add.s       $f22, $f22, $f21
    ctx->pc = 0x20d124u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
    // 0x20d128: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x20d128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x20d12c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x20d12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x20d130: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20d130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20d134: 0x0  nop
    ctx->pc = 0x20d134u;
    // NOP
    // 0x20d138: 0x460cb034  c.lt.s      $f22, $f12
    ctx->pc = 0x20d138u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d13c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x20D13Cu;
    {
        const bool branch_taken_0x20d13c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20D140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D13Cu;
            // 0x20d140: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d13c) {
            ctx->pc = 0x20D148u;
            goto label_20d148;
        }
    }
    ctx->pc = 0x20D144u;
    // 0x20d144: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x20d144u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_20d148:
    // 0x20d148: 0xc047714  jal         func_11DC50
    ctx->pc = 0x20D148u;
    SET_GPR_U32(ctx, 31, 0x20D150u);
    ctx->pc = 0x11DC50u;
    if (runtime->hasFunction(0x11DC50u)) {
        auto targetFn = runtime->lookupFunction(0x11DC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D150u; }
        if (ctx->pc != 0x20D150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DC50_0x11dc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D150u; }
        if (ctx->pc != 0x20D150u) { return; }
    }
    ctx->pc = 0x20D150u;
label_20d150:
    // 0x20d150: 0x4617b034  c.lt.s      $f22, $f23
    ctx->pc = 0x20d150u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d154: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x20D154u;
    {
        const bool branch_taken_0x20d154 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20D158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D154u;
            // 0x20d158: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d154) {
            ctx->pc = 0x20D170u;
            goto label_20d170;
        }
    }
    ctx->pc = 0x20D15Cu;
    // 0x20d15c: 0xc047714  jal         func_11DC50
    ctx->pc = 0x20D15Cu;
    SET_GPR_U32(ctx, 31, 0x20D164u);
    ctx->pc = 0x20D160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D15Cu;
            // 0x20d160: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DC50u;
    if (runtime->hasFunction(0x11DC50u)) {
        auto targetFn = runtime->lookupFunction(0x11DC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D164u; }
        if (ctx->pc != 0x20D164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DC50_0x11dc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D164u; }
        if (ctx->pc != 0x20D164u) { return; }
    }
    ctx->pc = 0x20D164u;
label_20d164:
    // 0x20d164: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x20D164u;
    {
        const bool branch_taken_0x20d164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D164u;
            // 0x20d168: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d164) {
            ctx->pc = 0x20D198u;
            goto label_20d198;
        }
    }
    ctx->pc = 0x20D16Cu;
    // 0x20d16c: 0x0  nop
    ctx->pc = 0x20d16cu;
    // NOP
label_20d170:
    // 0x20d170: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x20d170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x20d174: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x20d174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x20d178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20d178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20d17c: 0x0  nop
    ctx->pc = 0x20d17cu;
    // NOP
    // 0x20d180: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x20d180u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d184: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x20D184u;
    {
        const bool branch_taken_0x20d184 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20d184) {
            ctx->pc = 0x20D188u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20D184u;
            // 0x20d188: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20D18Cu;
            goto label_20d18c;
        }
    }
    ctx->pc = 0x20D18Cu;
label_20d18c:
    // 0x20d18c: 0xc047714  jal         func_11DC50
    ctx->pc = 0x20D18Cu;
    SET_GPR_U32(ctx, 31, 0x20D194u);
    ctx->pc = 0x20D190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D18Cu;
            // 0x20d190: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DC50u;
    if (runtime->hasFunction(0x11DC50u)) {
        auto targetFn = runtime->lookupFunction(0x11DC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D194u; }
        if (ctx->pc != 0x20D194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DC50_0x11dc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D194u; }
        if (ctx->pc != 0x20D194u) { return; }
    }
    ctx->pc = 0x20D194u;
label_20d194:
    // 0x20d194: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x20d194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_20d198:
    // 0x20d198: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x20d198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x20d19c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x20d19cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x20d1a0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x20d1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x20d1a4: 0x0  nop
    ctx->pc = 0x20d1a4u;
    // NOP
label_20d1a8:
    // 0x20d1a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20d1a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x20d1ac: 0x2a23001f  slti        $v1, $s1, 0x1F
    ctx->pc = 0x20d1acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x20d1b0: 0x1460ffa1  bnez        $v1, . + 4 + (-0x5F << 2)
    ctx->pc = 0x20D1B0u;
    {
        const bool branch_taken_0x20d1b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D1B0u;
            // 0x20d1b4: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d1b0) {
            ctx->pc = 0x20D038u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20d038;
        }
    }
    ctx->pc = 0x20D1B8u;
    // 0x20d1b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20d1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20d1bc: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x20d1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x20d1c0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x20d1c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20d1c4: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x20d1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x20d1c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20d1c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20d1cc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x20d1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x20d1d0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x20d1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20d1d4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x20d1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20d1d8: 0x3e00008  jr          $ra
    ctx->pc = 0x20D1D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D1D8u;
            // 0x20d1dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20D1E0u;
    // 0x20d1e0: 0x3e00008  jr          $ra
    ctx->pc = 0x20D1E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20D1E8u;
    // 0x20d1e8: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x20d1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d1ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20d1ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20d1f0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x20d1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20d1f4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x20d1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20d1f8: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x20d1f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d1fc: 0xd89e0000  lqc2        $vf30, 0x0($a0)
    ctx->pc = 0x20d1fcu;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20d200: 0x48a8e000  qmtc2.ni    $t0, $vf28
    ctx->pc = 0x20d200u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x20d204: 0x4a0046f8  vcallms     0x8D8
    ctx->pc = 0x20d204u;
    {     ctx->vu0_tpc = 0x8D8;     runtime->executeVU0Microprogram(rdram, ctx, 0x8D8); }
    // 0x20d208: 0xcc800040  pref        0x00, 0x40($a0)
    ctx->pc = 0x20d208u;
    // PREF instruction (ignored)
    // 0x20d20c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x20d20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d210: 0xc4830010  lwc1        $f3, 0x10($a0)
    ctx->pc = 0x20d210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20d214: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x20d214u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x20d218: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x20d218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20d21c: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x20d21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d220: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x20d220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x20d224: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x20d224u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x20d228: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x20d228u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x20d22c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20d22cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20d230: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x20d230u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x20d234: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x20d234u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x20d238: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x20d238u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x20d23c: 0xf85e0000  sqc2        $vf30, 0x0($v0)
    ctx->pc = 0x20d23cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x20d240: 0xf85f0010  sqc2        $vf31, 0x10($v0)
    ctx->pc = 0x20d240u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x20d244: 0xe441001c  swc1        $f1, 0x1C($v0)
    ctx->pc = 0x20d244u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x20d248: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x20d248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x20d24c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x20d24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20d250: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x20d250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d254: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x20d254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x20d258: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x20d258u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x20d25c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20d25cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20d260: 0xe4630020  swc1        $f3, 0x20($v1)
    ctx->pc = 0x20d260u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x20d264: 0xe4620024  swc1        $f2, 0x24($v1)
    ctx->pc = 0x20d264u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x20d268: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x20d268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x20d26c: 0x3e00008  jr          $ra
    ctx->pc = 0x20D26Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D26Cu;
            // 0x20d270: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20D274u;
    // 0x20d274: 0x0  nop
    ctx->pc = 0x20d274u;
    // NOP
}
