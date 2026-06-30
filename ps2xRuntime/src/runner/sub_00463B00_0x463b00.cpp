#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00463B00
// Address: 0x463b00 - 0x463ca0
void sub_00463B00_0x463b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00463B00_0x463b00");
#endif

    switch (ctx->pc) {
        case 0x463b24u: goto label_463b24;
        case 0x463b30u: goto label_463b30;
        case 0x463b3cu: goto label_463b3c;
        case 0x463b50u: goto label_463b50;
        case 0x463b74u: goto label_463b74;
        case 0x463c20u: goto label_463c20;
        default: break;
    }

    ctx->pc = 0x463b00u;

    // 0x463b00: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x463b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x463b04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x463b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x463b08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x463b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x463b0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x463b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x463b10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x463b10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x463b14: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x463b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x463b18: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x463b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x463b1c: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x463B1Cu;
    SET_GPR_U32(ctx, 31, 0x463B24u);
    ctx->pc = 0x463B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463B1Cu;
            // 0x463b20: 0x261102a4  addiu       $s1, $s0, 0x2A4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 676));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463B24u; }
        if (ctx->pc != 0x463B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463B24u; }
        if (ctx->pc != 0x463B24u) { return; }
    }
    ctx->pc = 0x463B24u;
label_463b24:
    // 0x463b24: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x463b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x463b28: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x463B28u;
    SET_GPR_U32(ctx, 31, 0x463B30u);
    ctx->pc = 0x463B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463B28u;
            // 0x463b2c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463B30u; }
        if (ctx->pc != 0x463B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463B30u; }
        if (ctx->pc != 0x463B30u) { return; }
    }
    ctx->pc = 0x463B30u;
label_463b30:
    // 0x463b30: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x463b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x463b34: 0xc04ccf4  jal         func_1333D0
    ctx->pc = 0x463B34u;
    SET_GPR_U32(ctx, 31, 0x463B3Cu);
    ctx->pc = 0x463B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463B34u;
            // 0x463b38: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463B3Cu; }
        if (ctx->pc != 0x463B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463B3Cu; }
        if (ctx->pc != 0x463B3Cu) { return; }
    }
    ctx->pc = 0x463B3Cu;
label_463b3c:
    // 0x463b3c: 0x8e020290  lw          $v0, 0x290($s0)
    ctx->pc = 0x463b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
    // 0x463b40: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x463b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x463b44: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x463b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x463b48: 0xc04cca0  jal         func_133280
    ctx->pc = 0x463B48u;
    SET_GPR_U32(ctx, 31, 0x463B50u);
    ctx->pc = 0x463B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463B48u;
            // 0x463b4c: 0x244602c0  addiu       $a2, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463B50u; }
        if (ctx->pc != 0x463B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463B50u; }
        if (ctx->pc != 0x463B50u) { return; }
    }
    ctx->pc = 0x463B50u;
label_463b50:
    // 0x463b50: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x463b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x463b54: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x463b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x463b58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x463b58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x463b5c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x463b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x463b60: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x463b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x463b64: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x463b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    // 0x463b68: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x463b68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x463b6c: 0xc04cc44  jal         func_133110
    ctx->pc = 0x463B6Cu;
    SET_GPR_U32(ctx, 31, 0x463B74u);
    ctx->pc = 0x463B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463B6Cu;
            // 0x463b70: 0xe7a000b8  swc1        $f0, 0xB8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463B74u; }
        if (ctx->pc != 0x463B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463B74u; }
        if (ctx->pc != 0x463B74u) { return; }
    }
    ctx->pc = 0x463B74u;
label_463b74:
    // 0x463b74: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x463b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x463b78: 0x261002a8  addiu       $s0, $s0, 0x2A8
    ctx->pc = 0x463b78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 680));
    // 0x463b7c: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x463b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x463b80: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x463b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x463b84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x463b84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x463b88: 0xc4660018  lwc1        $f6, 0x18($v1)
    ctx->pc = 0x463b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x463b8c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x463b8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x463b90: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x463B90u;
    {
        const bool branch_taken_0x463b90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x463B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x463B90u;
            // 0x463b94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x463b90) {
            ctx->pc = 0x463B9Cu;
            goto label_463b9c;
        }
    }
    ctx->pc = 0x463B98u;
    // 0x463b98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x463b98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_463b9c:
    // 0x463b9c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x463B9Cu;
    {
        const bool branch_taken_0x463b9c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x463b9c) {
            ctx->pc = 0x463BA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x463B9Cu;
            // 0x463ba0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x463BB0u;
            goto label_463bb0;
        }
    }
    ctx->pc = 0x463BA4u;
    // 0x463ba4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x463ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x463ba8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x463BA8u;
    {
        const bool branch_taken_0x463ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x463BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x463BA8u;
            // 0x463bac: 0x46800160  cvt.s.w     $f5, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x463ba8) {
            ctx->pc = 0x463BC8u;
            goto label_463bc8;
        }
    }
    ctx->pc = 0x463BB0u;
label_463bb0:
    // 0x463bb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x463bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x463bb4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x463bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x463bb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x463bb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x463bbc: 0x0  nop
    ctx->pc = 0x463bbcu;
    // NOP
    // 0x463bc0: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x463bc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x463bc4: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x463bc4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_463bc8:
    // 0x463bc8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x463bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x463bcc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x463bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x463bd0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x463bd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x463bd4: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x463bd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x463bd8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x463bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x463bdc: 0x46012018  adda.s      $f4, $f1
    ctx->pc = 0x463bdcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x463be0: 0x3c023fd9  lui         $v0, 0x3FD9
    ctx->pc = 0x463be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16345 << 16));
    // 0x463be4: 0x4605185d  msub.s      $f1, $f3, $f5
    ctx->pc = 0x463be4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[5]));
    // 0x463be8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x463be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x463bec: 0x460130c2  mul.s       $f3, $f6, $f1
    ctx->pc = 0x463becu;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x463bf0: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x463bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x463bf4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x463bf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x463bf8: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x463bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x463bfc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x463bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x463c00: 0x46012018  adda.s      $f4, $f1
    ctx->pc = 0x463c00u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x463c04: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x463c04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x463c08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x463c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x463c0c: 0x0  nop
    ctx->pc = 0x463c0cu;
    // NOP
    // 0x463c10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x463c10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x463c14: 0x46060302  mul.s       $f12, $f0, $f6
    ctx->pc = 0x463c14u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x463c18: 0xc0477a8  jal         func_11DEA0
    ctx->pc = 0x463C18u;
    SET_GPR_U32(ctx, 31, 0x463C20u);
    ctx->pc = 0x463C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463C18u;
            // 0x463c1c: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463C20u; }
        if (ctx->pc != 0x463C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x463C20u; }
        if (ctx->pc != 0x463C20u) { return; }
    }
    ctx->pc = 0x463C20u;
label_463c20:
    // 0x463c20: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x463c20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x463c24: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x463c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x463c28: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x463c28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x463c2c: 0x0  nop
    ctx->pc = 0x463c2cu;
    // NOP
    // 0x463c30: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x463c30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x463c34: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x463c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x463c38: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x463c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x463c3c: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x463c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x463c40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x463c40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x463c44: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x463c44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x463c48: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x463c48u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x463c4c: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x463c4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x463c50: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x463c50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x463c54: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x463C54u;
    {
        const bool branch_taken_0x463c54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x463C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x463C54u;
            // 0x463c58: 0xe6010000  swc1        $f1, 0x0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x463c54) {
            ctx->pc = 0x463C64u;
            goto label_463c64;
        }
    }
    ctx->pc = 0x463C5Cu;
    // 0x463c5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x463C5Cu;
    {
        const bool branch_taken_0x463c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x463C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x463C5Cu;
            // 0x463c60: 0xe6030000  swc1        $f3, 0x0($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x463c5c) {
            ctx->pc = 0x463C80u;
            goto label_463c80;
        }
    }
    ctx->pc = 0x463C64u;
label_463c64:
    // 0x463c64: 0x3c03c1f0  lui         $v1, 0xC1F0
    ctx->pc = 0x463c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49648 << 16));
    // 0x463c68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x463c68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x463c6c: 0x0  nop
    ctx->pc = 0x463c6cu;
    // NOP
    // 0x463c70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x463c70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x463c74: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x463C74u;
    {
        const bool branch_taken_0x463c74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x463c74) {
            ctx->pc = 0x463C78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x463C74u;
            // 0x463c78: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x463C84u;
            goto label_463c84;
        }
    }
    ctx->pc = 0x463C7Cu;
    // 0x463c7c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x463c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_463c80:
    // 0x463c80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x463c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_463c84:
    // 0x463c84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x463c84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x463c88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x463c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x463c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x463C8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x463C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x463C8Cu;
            // 0x463c90: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x463C94u;
    // 0x463c94: 0x0  nop
    ctx->pc = 0x463c94u;
    // NOP
    // 0x463c98: 0x0  nop
    ctx->pc = 0x463c98u;
    // NOP
    // 0x463c9c: 0x0  nop
    ctx->pc = 0x463c9cu;
    // NOP
}
