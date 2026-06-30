#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00362AB0
// Address: 0x362ab0 - 0x362cd0
void sub_00362AB0_0x362ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362AB0_0x362ab0");
#endif

    switch (ctx->pc) {
        case 0x362b00u: goto label_362b00;
        case 0x362b0cu: goto label_362b0c;
        case 0x362b38u: goto label_362b38;
        case 0x362b44u: goto label_362b44;
        case 0x362b50u: goto label_362b50;
        case 0x362b84u: goto label_362b84;
        case 0x362b90u: goto label_362b90;
        case 0x362b9cu: goto label_362b9c;
        case 0x362bb4u: goto label_362bb4;
        case 0x362bc0u: goto label_362bc0;
        case 0x362bd0u: goto label_362bd0;
        case 0x362c40u: goto label_362c40;
        case 0x362c98u: goto label_362c98;
        case 0x362cb0u: goto label_362cb0;
        default: break;
    }

    ctx->pc = 0x362ab0u;

    // 0x362ab0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x362ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x362ab4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x362ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x362ab8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x362ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x362abc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x362abcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362ac0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x362ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x362ac4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x362ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x362ac8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x362ac8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362acc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x362accu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x362ad0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x362ad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362ad4: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x362ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
    // 0x362ad8: 0x46007506  mov.s       $f20, $f14
    ctx->pc = 0x362ad8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    // 0x362adc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x362adcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362ae0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x362ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x362ae4: 0xe48c0120  swc1        $f12, 0x120($a0)
    ctx->pc = 0x362ae4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 288), bits); }
    // 0x362ae8: 0xe48d0124  swc1        $f13, 0x124($a0)
    ctx->pc = 0x362ae8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x362aec: 0xe4940128  swc1        $f20, 0x128($a0)
    ctx->pc = 0x362aecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 296), bits); }
    // 0x362af0: 0xac80012c  sw          $zero, 0x12C($a0)
    ctx->pc = 0x362af0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 300), GPR_U32(ctx, 0));
    // 0x362af4: 0xac870160  sw          $a3, 0x160($a0)
    ctx->pc = 0x362af4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 352), GPR_U32(ctx, 7));
    // 0x362af8: 0xc0b89e4  jal         func_2E2790
    ctx->pc = 0x362AF8u;
    SET_GPR_U32(ctx, 31, 0x362B00u);
    ctx->pc = 0x362AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362AF8u;
            // 0x362afc: 0x260400c0  addiu       $a0, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2790u;
    if (runtime->hasFunction(0x2E2790u)) {
        auto targetFn = runtime->lookupFunction(0x2E2790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362B00u; }
        if (ctx->pc != 0x362B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2790_0x2e2790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362B00u; }
        if (ctx->pc != 0x362B00u) { return; }
    }
    ctx->pc = 0x362B00u;
label_362b00:
    // 0x362b00: 0x260500f0  addiu       $a1, $s0, 0xF0
    ctx->pc = 0x362b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x362b04: 0xc04cc04  jal         func_133010
    ctx->pc = 0x362B04u;
    SET_GPR_U32(ctx, 31, 0x362B0Cu);
    ctx->pc = 0x362B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362B04u;
            // 0x362b08: 0x26040150  addiu       $a0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362B0Cu; }
        if (ctx->pc != 0x362B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362B0Cu; }
        if (ctx->pc != 0x362B0Cu) { return; }
    }
    ctx->pc = 0x362B0Cu;
label_362b0c:
    // 0x362b0c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x362b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x362b10: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x362b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x362b14: 0x8c450c78  lw          $a1, 0xC78($v0)
    ctx->pc = 0x362b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
    // 0x362b18: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x362b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x362b1c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x362b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x362b20: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x362b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x362b24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x362b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x362b28: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x362b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x362b2c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x362b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x362b30: 0xc04cc90  jal         func_133240
    ctx->pc = 0x362B30u;
    SET_GPR_U32(ctx, 31, 0x362B38u);
    ctx->pc = 0x362B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362B30u;
            // 0x362b34: 0x24c50010  addiu       $a1, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362B38u; }
        if (ctx->pc != 0x362B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362B38u; }
        if (ctx->pc != 0x362B38u) { return; }
    }
    ctx->pc = 0x362B38u;
label_362b38:
    // 0x362b38: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x362b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x362b3c: 0xc04cc44  jal         func_133110
    ctx->pc = 0x362B3Cu;
    SET_GPR_U32(ctx, 31, 0x362B44u);
    ctx->pc = 0x362B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362B3Cu;
            // 0x362b40: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362B44u; }
        if (ctx->pc != 0x362B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362B44u; }
        if (ctx->pc != 0x362B44u) { return; }
    }
    ctx->pc = 0x362B44u;
label_362b44:
    // 0x362b44: 0xc7ad0048  lwc1        $f13, 0x48($sp)
    ctx->pc = 0x362b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x362b48: 0xc04780a  jal         func_11E028
    ctx->pc = 0x362B48u;
    SET_GPR_U32(ctx, 31, 0x362B50u);
    ctx->pc = 0x362B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362B48u;
            // 0x362b4c: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362B50u; }
        if (ctx->pc != 0x362B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362B50u; }
        if (ctx->pc != 0x362B50u) { return; }
    }
    ctx->pc = 0x362B50u;
label_362b50:
    // 0x362b50: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x362b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
    // 0x362b54: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x362b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x362b58: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x362b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x362b5c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x362b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x362b60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x362b60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x362b64: 0x0  nop
    ctx->pc = 0x362b64u;
    // NOP
    // 0x362b68: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x362b68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x362b6c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x362b6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x362b70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x362b70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x362b74: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x362b74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x362b78: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x362b78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x362b7c: 0xc04c970  jal         func_1325C0
    ctx->pc = 0x362B7Cu;
    SET_GPR_U32(ctx, 31, 0x362B84u);
    ctx->pc = 0x362B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362B7Cu;
            // 0x362b80: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362B84u; }
        if (ctx->pc != 0x362B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362B84u; }
        if (ctx->pc != 0x362B84u) { return; }
    }
    ctx->pc = 0x362B84u;
label_362b84:
    // 0x362b84: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x362b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x362b88: 0xc04c74c  jal         func_131D30
    ctx->pc = 0x362B88u;
    SET_GPR_U32(ctx, 31, 0x362B90u);
    ctx->pc = 0x362B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362B88u;
            // 0x362b8c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362B90u; }
        if (ctx->pc != 0x362B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362B90u; }
        if (ctx->pc != 0x362B90u) { return; }
    }
    ctx->pc = 0x362B90u;
label_362b90:
    // 0x362b90: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x362b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x362b94: 0xc04c74c  jal         func_131D30
    ctx->pc = 0x362B94u;
    SET_GPR_U32(ctx, 31, 0x362B9Cu);
    ctx->pc = 0x362B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362B94u;
            // 0x362b98: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362B9Cu; }
        if (ctx->pc != 0x362B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362B9Cu; }
        if (ctx->pc != 0x362B9Cu) { return; }
    }
    ctx->pc = 0x362B9Cu;
label_362b9c:
    // 0x362b9c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x362b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x362ba0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x362ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x362ba4: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x362ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
    // 0x362ba8: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x362ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x362bac: 0xc04c74c  jal         func_131D30
    ctx->pc = 0x362BACu;
    SET_GPR_U32(ctx, 31, 0x362BB4u);
    ctx->pc = 0x362BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362BACu;
            // 0x362bb0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362BB4u; }
        if (ctx->pc != 0x362BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362BB4u; }
        if (ctx->pc != 0x362BB4u) { return; }
    }
    ctx->pc = 0x362BB4u;
label_362bb4:
    // 0x362bb4: 0x26040134  addiu       $a0, $s0, 0x134
    ctx->pc = 0x362bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 308));
    // 0x362bb8: 0xc04c720  jal         func_131C80
    ctx->pc = 0x362BB8u;
    SET_GPR_U32(ctx, 31, 0x362BC0u);
    ctx->pc = 0x362BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362BB8u;
            // 0x362bbc: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362BC0u; }
        if (ctx->pc != 0x362BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362BC0u; }
        if (ctx->pc != 0x362BC0u) { return; }
    }
    ctx->pc = 0x362BC0u;
label_362bc0:
    // 0x362bc0: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x362bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x362bc4: 0x26040170  addiu       $a0, $s0, 0x170
    ctx->pc = 0x362bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
    // 0x362bc8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x362BC8u;
    SET_GPR_U32(ctx, 31, 0x362BD0u);
    ctx->pc = 0x362BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362BC8u;
            // 0x362bcc: 0x24a54ae0  addiu       $a1, $a1, 0x4AE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362BD0u; }
        if (ctx->pc != 0x362BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362BD0u; }
        if (ctx->pc != 0x362BD0u) { return; }
    }
    ctx->pc = 0x362BD0u;
label_362bd0:
    // 0x362bd0: 0xae000184  sw          $zero, 0x184($s0)
    ctx->pc = 0x362bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 0));
    // 0x362bd4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x362bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x362bd8: 0xae000188  sw          $zero, 0x188($s0)
    ctx->pc = 0x362bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 0));
    // 0x362bdc: 0x26030184  addiu       $v1, $s0, 0x184
    ctx->pc = 0x362bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 388));
    // 0x362be0: 0xae00018c  sw          $zero, 0x18C($s0)
    ctx->pc = 0x362be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
    // 0x362be4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x362be4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x362be8: 0xa2000164  sb          $zero, 0x164($s0)
    ctx->pc = 0x362be8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 356), (uint8_t)GPR_U32(ctx, 0));
    // 0x362bec: 0xa2000165  sb          $zero, 0x165($s0)
    ctx->pc = 0x362becu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 357), (uint8_t)GPR_U32(ctx, 0));
    // 0x362bf0: 0xae000180  sw          $zero, 0x180($s0)
    ctx->pc = 0x362bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 0));
    // 0x362bf4: 0xae000178  sw          $zero, 0x178($s0)
    ctx->pc = 0x362bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 0));
    // 0x362bf8: 0xae000174  sw          $zero, 0x174($s0)
    ctx->pc = 0x362bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 0));
    // 0x362bfc: 0xae000170  sw          $zero, 0x170($s0)
    ctx->pc = 0x362bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 0));
    // 0x362c00: 0xae04017c  sw          $a0, 0x17C($s0)
    ctx->pc = 0x362c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 4));
    // 0x362c04: 0xb0600007  sdl         $zero, 0x7($v1)
    ctx->pc = 0x362c04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 0); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x362c08: 0xb4600000  sdr         $zero, 0x0($v1)
    ctx->pc = 0x362c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 0); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x362c0c: 0xae00018c  sw          $zero, 0x18C($s0)
    ctx->pc = 0x362c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
    // 0x362c10: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x362c10u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x362c14: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x362C14u;
    {
        const bool branch_taken_0x362c14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x362C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x362C14u;
            // 0x362c18: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362c14) {
            ctx->pc = 0x362C20u;
            goto label_362c20;
        }
    }
    ctx->pc = 0x362C1Cu;
    // 0x362c1c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x362c1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_362c20:
    // 0x362c20: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x362c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x362c24: 0xae030130  sw          $v1, 0x130($s0)
    ctx->pc = 0x362c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 3));
    // 0x362c28: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x362c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x362c2c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x362c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x362c30: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x362c30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x362c34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x362c34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x362c38: 0x3e00008  jr          $ra
    ctx->pc = 0x362C38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x362C38u;
            // 0x362c3c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x362C40u;
label_362c40:
    // 0x362c40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x362c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x362c44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x362c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x362c48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x362c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x362c4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x362c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x362c50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x362c50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362c54: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x362C54u;
    {
        const bool branch_taken_0x362c54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x362C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x362C54u;
            // 0x362c58: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362c54) {
            ctx->pc = 0x362CB0u;
            goto label_362cb0;
        }
    }
    ctx->pc = 0x362C5Cu;
    // 0x362c5c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x362c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x362c60: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x362c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x362c64: 0x246366c0  addiu       $v1, $v1, 0x66C0
    ctx->pc = 0x362c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26304));
    // 0x362c68: 0x244266f8  addiu       $v0, $v0, 0x66F8
    ctx->pc = 0x362c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26360));
    // 0x362c6c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x362c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x362c70: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x362C70u;
    {
        const bool branch_taken_0x362c70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x362C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x362C70u;
            // 0x362c74: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362c70) {
            ctx->pc = 0x362C98u;
            goto label_362c98;
        }
    }
    ctx->pc = 0x362C78u;
    // 0x362c78: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x362c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x362c7c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x362c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x362c80: 0x24636770  addiu       $v1, $v1, 0x6770
    ctx->pc = 0x362c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26480));
    // 0x362c84: 0x244267a8  addiu       $v0, $v0, 0x67A8
    ctx->pc = 0x362c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26536));
    // 0x362c88: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x362c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x362c8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x362c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362c90: 0xc0d8b34  jal         func_362CD0
    ctx->pc = 0x362C90u;
    SET_GPR_U32(ctx, 31, 0x362C98u);
    ctx->pc = 0x362C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362C90u;
            // 0x362c94: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362CD0u;
    if (runtime->hasFunction(0x362CD0u)) {
        auto targetFn = runtime->lookupFunction(0x362CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362C98u; }
        if (ctx->pc != 0x362C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362CD0_0x362cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362C98u; }
        if (ctx->pc != 0x362C98u) { return; }
    }
    ctx->pc = 0x362C98u;
label_362c98:
    // 0x362c98: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x362c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x362c9c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x362c9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x362ca0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x362CA0u;
    {
        const bool branch_taken_0x362ca0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x362ca0) {
            ctx->pc = 0x362CA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x362CA0u;
            // 0x362ca4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x362CB4u;
            goto label_362cb4;
        }
    }
    ctx->pc = 0x362CA8u;
    // 0x362ca8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x362CA8u;
    SET_GPR_U32(ctx, 31, 0x362CB0u);
    ctx->pc = 0x362CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362CA8u;
            // 0x362cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362CB0u; }
        if (ctx->pc != 0x362CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362CB0u; }
        if (ctx->pc != 0x362CB0u) { return; }
    }
    ctx->pc = 0x362CB0u;
label_362cb0:
    // 0x362cb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x362cb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_362cb4:
    // 0x362cb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x362cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x362cb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x362cb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x362cbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x362cbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x362cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x362CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x362CC0u;
            // 0x362cc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x362CC8u;
    // 0x362cc8: 0x0  nop
    ctx->pc = 0x362cc8u;
    // NOP
    // 0x362ccc: 0x0  nop
    ctx->pc = 0x362cccu;
    // NOP
}
