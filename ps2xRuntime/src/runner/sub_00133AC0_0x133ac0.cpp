#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00133AC0
// Address: 0x133ac0 - 0x133ba0
void sub_00133AC0_0x133ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133AC0_0x133ac0");
#endif

    ctx->pc = 0x133ac0u;

    // 0x133ac0: 0x44903  sra         $t1, $a0, 4
    ctx->pc = 0x133ac0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 4), 4));
    // 0x133ac4: 0x308a000f  andi        $t2, $a0, 0xF
    ctx->pc = 0x133ac4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x133ac8: 0x312703ff  andi        $a3, $t1, 0x3FF
    ctx->pc = 0x133ac8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1023);
    // 0x133acc: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x133accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x133ad0: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x133ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x133ad4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x133ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x133ad8: 0x24841300  addiu       $a0, $a0, 0x1300
    ctx->pc = 0x133ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4864));
    // 0x133adc: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x133adcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x133ae0: 0x874021  addu        $t0, $a0, $a3
    ctx->pc = 0x133ae0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x133ae4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x133ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x133ae8: 0x833821  addu        $a3, $a0, $v1
    ctx->pc = 0x133ae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x133aec: 0xc4e40000  lwc1        $f4, 0x0($a3)
    ctx->pc = 0x133aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x133af0: 0x1140000f  beqz        $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x133AF0u;
    {
        const bool branch_taken_0x133af0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x133AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133AF0u;
            // 0x133af4: 0xc5050000  lwc1        $f5, 0x0($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x133af0) {
            ctx->pc = 0x133B30u;
            goto label_133b30;
        }
    }
    ctx->pc = 0x133AF8u;
    // 0x133af8: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x133af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x133afc: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x133afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x133b00: 0xc4e0fffc  lwc1        $f0, -0x4($a3)
    ctx->pc = 0x133b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133b04: 0xa2080  sll         $a0, $t2, 2
    ctx->pc = 0x133b04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x133b08: 0x24631f60  addiu       $v1, $v1, 0x1F60
    ctx->pc = 0x133b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8032));
    // 0x133b0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x133b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x133b10: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x133b10u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x133b14: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x133b14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x133b18: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x133b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x133b1c: 0x46050818  adda.s      $f1, $f5
    ctx->pc = 0x133b1cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x133b20: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x133b20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x133b24: 0x4602195c  madd.s      $f5, $f3, $f2
    ctx->pc = 0x133b24u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x133b28: 0x46040818  adda.s      $f1, $f4
    ctx->pc = 0x133b28u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x133b2c: 0x4600191c  madd.s      $f4, $f3, $f0
    ctx->pc = 0x133b2cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_133b30:
    // 0x133b30: 0x31240c00  andi        $a0, $t1, 0xC00
    ctx->pc = 0x133b30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3072);
    // 0x133b34: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x133b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x133b38: 0x50830013  beql        $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x133B38u;
    {
        const bool branch_taken_0x133b38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x133b38) {
            ctx->pc = 0x133B3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x133B38u;
            // 0x133b3c: 0x46002807  neg.s       $f0, $f5 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[5]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x133B88u;
            goto label_133b88;
        }
    }
    ctx->pc = 0x133B40u;
    // 0x133b40: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x133b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x133b44: 0x5083000d  beql        $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x133B44u;
    {
        const bool branch_taken_0x133b44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x133b44) {
            ctx->pc = 0x133B48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x133B44u;
            // 0x133b48: 0xe4a40000  swc1        $f4, 0x0($a1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x133B7Cu;
            goto label_133b7c;
        }
    }
    ctx->pc = 0x133B4Cu;
    // 0x133b4c: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x133B4Cu;
    {
        const bool branch_taken_0x133b4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x133b4c) {
            ctx->pc = 0x133B50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x133B4Cu;
            // 0x133b50: 0xe4a50000  swc1        $f5, 0x0($a1) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x133B74u;
            goto label_133b74;
        }
    }
    ctx->pc = 0x133B54u;
    // 0x133b54: 0x24030c00  addiu       $v1, $zero, 0xC00
    ctx->pc = 0x133b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    // 0x133b58: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x133B58u;
    {
        const bool branch_taken_0x133b58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x133b58) {
            ctx->pc = 0x133B5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x133B58u;
            // 0x133b5c: 0x46002007  neg.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[4]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x133B68u;
            goto label_133b68;
        }
    }
    ctx->pc = 0x133B60u;
    // 0x133b60: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x133B60u;
    {
        const bool branch_taken_0x133b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133b60) {
            ctx->pc = 0x133B94u;
            goto label_133b94;
        }
    }
    ctx->pc = 0x133B68u;
label_133b68:
    // 0x133b68: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x133b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x133b6c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x133B6Cu;
    {
        const bool branch_taken_0x133b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133B6Cu;
            // 0x133b70: 0xe4c50000  swc1        $f5, 0x0($a2) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x133b6c) {
            ctx->pc = 0x133B94u;
            goto label_133b94;
        }
    }
    ctx->pc = 0x133B74u;
label_133b74:
    // 0x133b74: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x133B74u;
    {
        const bool branch_taken_0x133b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133B74u;
            // 0x133b78: 0xe4c40000  swc1        $f4, 0x0($a2) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x133b74) {
            ctx->pc = 0x133B94u;
            goto label_133b94;
        }
    }
    ctx->pc = 0x133B7Cu;
label_133b7c:
    // 0x133b7c: 0x46002807  neg.s       $f0, $f5
    ctx->pc = 0x133b7cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[5]);
    // 0x133b80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x133B80u;
    {
        const bool branch_taken_0x133b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133B80u;
            // 0x133b84: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x133b80) {
            ctx->pc = 0x133B94u;
            goto label_133b94;
        }
    }
    ctx->pc = 0x133B88u;
label_133b88:
    // 0x133b88: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x133b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x133b8c: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x133b8cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x133b90: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x133b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_133b94:
    // 0x133b94: 0x3e00008  jr          $ra
    ctx->pc = 0x133B94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x133B9Cu;
    // 0x133b9c: 0x0  nop
    ctx->pc = 0x133b9cu;
    // NOP
}
