#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002919F0
// Address: 0x2919f0 - 0x291b80
void sub_002919F0_0x2919f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002919F0_0x2919f0");
#endif

    switch (ctx->pc) {
        case 0x291b54u: goto label_291b54;
        default: break;
    }

    ctx->pc = 0x2919f0u;

    // 0x2919f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2919f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2919f4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2919f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x2919f8: 0xc4490384  lwc1        $f9, 0x384($v0)
    ctx->pc = 0x2919f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2919fc: 0xc48a0004  lwc1        $f10, 0x4($a0)
    ctx->pc = 0x2919fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x291a00: 0xc4880008  lwc1        $f8, 0x8($a0)
    ctx->pc = 0x291a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x291a04: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x291a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x291a08: 0xc4470388  lwc1        $f7, 0x388($v0)
    ctx->pc = 0x291a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x291a0c: 0xc486000c  lwc1        $f6, 0xC($a0)
    ctx->pc = 0x291a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x291a10: 0x46095242  mul.s       $f9, $f10, $f9
    ctx->pc = 0x291a10u;
    ctx->f[9] = FPU_MUL_S(ctx->f[10], ctx->f[9]);
    // 0x291a14: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x291a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x291a18: 0xc445038c  lwc1        $f5, 0x38C($v0)
    ctx->pc = 0x291a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x291a1c: 0x460741c2  mul.s       $f7, $f8, $f7
    ctx->pc = 0x291a1cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x291a20: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x291a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x291a24: 0xc4440380  lwc1        $f4, 0x380($v0)
    ctx->pc = 0x291a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x291a28: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x291a28u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x291a2c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x291a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x291a30: 0xc4430370  lwc1        $f3, 0x370($v0)
    ctx->pc = 0x291a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x291a34: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x291a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x291a38: 0xc4420374  lwc1        $f2, 0x374($v0)
    ctx->pc = 0x291a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x291a3c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x291a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x291a40: 0xc4410378  lwc1        $f1, 0x378($v0)
    ctx->pc = 0x291a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291a44: 0x46024880  add.s       $f2, $f9, $f2
    ctx->pc = 0x291a44u;
    ctx->f[2] = FPU_ADD_S(ctx->f[9], ctx->f[2]);
    // 0x291a48: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x291a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x291a4c: 0xc440037c  lwc1        $f0, 0x37C($v0)
    ctx->pc = 0x291a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291a50: 0x46013840  add.s       $f1, $f7, $f1
    ctx->pc = 0x291a50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x291a54: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x291a54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x291a58: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x291a58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x291a5c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x291a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x291a60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x291a60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291a64: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x291a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291a68: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x291a68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x291a6c: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x291a6cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x291a70: 0x4604089c  madd.s      $f2, $f1, $f4
    ctx->pc = 0x291a70u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x291a74: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x291a74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x291a78: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x291a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291a7c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x291a7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x291a80: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x291a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291a84: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x291a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291a88: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x291a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x291a8c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x291a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x291a90: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x291a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291a94: 0x32182  srl         $a0, $v1, 6
    ctx->pc = 0x291a94u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x291a98: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x291a98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x291a9c: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x291a9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x291aa0: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x291aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x291aa4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x291aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x291aa8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x291aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x291aac: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x291aacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x291ab0: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x291ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x291ab4: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x291ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x291ab8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x291ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x291abc: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x291abcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x291ac0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x291ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x291ac4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x291ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x291ac8: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x291ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x291acc: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x291accu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x291ad0: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x291ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x291ad4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x291ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x291ad8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x291ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x291adc: 0x3e00008  jr          $ra
    ctx->pc = 0x291ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291ADCu;
            // 0x291ae0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x291AE4u;
    // 0x291ae4: 0x0  nop
    ctx->pc = 0x291ae4u;
    // NOP
    // 0x291ae8: 0x0  nop
    ctx->pc = 0x291ae8u;
    // NOP
    // 0x291aec: 0x0  nop
    ctx->pc = 0x291aecu;
    // NOP
    // 0x291af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x291af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x291af4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x291af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x291af8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x291af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x291afc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x291afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291b00: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x291B00u;
    {
        const bool branch_taken_0x291b00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x291B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291B00u;
            // 0x291b04: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291b00) {
            ctx->pc = 0x291B58u;
            goto label_291b58;
        }
    }
    ctx->pc = 0x291B08u;
    // 0x291b08: 0x2442f8a0  addiu       $v0, $v0, -0x760
    ctx->pc = 0x291b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965408));
    // 0x291b0c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x291B0Cu;
    {
        const bool branch_taken_0x291b0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x291B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291B0Cu;
            // 0x291b10: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291b0c) {
            ctx->pc = 0x291B30u;
            goto label_291b30;
        }
    }
    ctx->pc = 0x291B14u;
    // 0x291b14: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x291b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x291b18: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x291b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x291b1c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291B1Cu;
    {
        const bool branch_taken_0x291b1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x291B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291B1Cu;
            // 0x291b20: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291b1c) {
            ctx->pc = 0x291B30u;
            goto label_291b30;
        }
    }
    ctx->pc = 0x291B24u;
    // 0x291b24: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x291b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x291b28: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x291b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x291b2c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x291b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_291b30:
    // 0x291b30: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x291b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x291b34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x291b34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x291b38: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x291B38u;
    {
        const bool branch_taken_0x291b38 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x291B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291B38u;
            // 0x291b3c: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291b38) {
            ctx->pc = 0x291B58u;
            goto label_291b58;
        }
    }
    ctx->pc = 0x291B40u;
    // 0x291b40: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x291b40u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x291b44: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x291b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x291b48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x291b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291b4c: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x291B4Cu;
    SET_GPR_U32(ctx, 31, 0x291B54u);
    ctx->pc = 0x291B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291B4Cu;
            // 0x291b50: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291B54u; }
        if (ctx->pc != 0x291B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291B54u; }
        if (ctx->pc != 0x291B54u) { return; }
    }
    ctx->pc = 0x291B54u;
label_291b54:
    // 0x291b54: 0x0  nop
    ctx->pc = 0x291b54u;
    // NOP
label_291b58:
    // 0x291b58: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x291b58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291b5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x291b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291b60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x291b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291b64: 0x3e00008  jr          $ra
    ctx->pc = 0x291B64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291B64u;
            // 0x291b68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x291B6Cu;
    // 0x291b6c: 0x0  nop
    ctx->pc = 0x291b6cu;
    // NOP
    // 0x291b70: 0x3e00008  jr          $ra
    ctx->pc = 0x291B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x291B78u;
    // 0x291b78: 0x0  nop
    ctx->pc = 0x291b78u;
    // NOP
    // 0x291b7c: 0x0  nop
    ctx->pc = 0x291b7cu;
    // NOP
}
