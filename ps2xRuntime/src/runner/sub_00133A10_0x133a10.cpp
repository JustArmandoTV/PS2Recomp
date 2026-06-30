#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00133A10
// Address: 0x133a10 - 0x133ab0
void sub_00133A10_0x133a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133A10_0x133a10");
#endif

    ctx->pc = 0x133a10u;

    // 0x133a10: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x133a10u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x133a14: 0x3086000f  andi        $a2, $a0, 0xF
    ctx->pc = 0x133a14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x133a18: 0x3082c000  andi        $v0, $a0, 0xC000
    ctx->pc = 0x133a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)49152);
    // 0x133a1c: 0x22382  srl         $a0, $v0, 14
    ctx->pc = 0x133a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x133a20: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x133a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x133a24: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x133A24u;
    {
        const bool branch_taken_0x133a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x133A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133A24u;
            // 0x133a28: 0x306503ff  andi        $a1, $v1, 0x3FF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1023);
        ctx->in_delay_slot = false;
        if (branch_taken_0x133a24) {
            ctx->pc = 0x133A48u;
            goto label_133a48;
        }
    }
    ctx->pc = 0x133A2Cu;
    // 0x133a2c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x133a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x133a30: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x133a30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x133a34: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x133a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
    // 0x133a38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x133a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x133a3c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x133a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133a40: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x133A40u;
    {
        const bool branch_taken_0x133a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133A40u;
            // 0x133a44: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133a40) {
            ctx->pc = 0x133A68u;
            goto label_133a68;
        }
    }
    ctx->pc = 0x133A48u;
label_133a48:
    // 0x133a48: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x133a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x133a4c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x133a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x133a50: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x133a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x133a54: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x133a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
    // 0x133a58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x133a58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x133a5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x133a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x133a60: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x133a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133a64: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x133a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_133a68:
    // 0x133a68: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x133A68u;
    {
        const bool branch_taken_0x133a68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x133A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133A68u;
            // 0x133a6c: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x133a68) {
            ctx->pc = 0x133A94u;
            goto label_133a94;
        }
    }
    ctx->pc = 0x133A70u;
    // 0x133a70: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x133a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x133a74: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x133a74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x133a78: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x133a78u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x133a7c: 0x24421f60  addiu       $v0, $v0, 0x1F60
    ctx->pc = 0x133a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8032));
    // 0x133a80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x133a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x133a84: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x133a84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x133a88: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x133a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x133a8c: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x133a8cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x133a90: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x133a90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_133a94:
    // 0x133a94: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x133a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x133a98: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x133A98u;
    {
        const bool branch_taken_0x133a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133a98) {
            ctx->pc = 0x133AA4u;
            goto label_133aa4;
        }
    }
    ctx->pc = 0x133AA0u;
    // 0x133aa0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x133aa0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_133aa4:
    // 0x133aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x133AA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x133AACu;
    // 0x133aac: 0x0  nop
    ctx->pc = 0x133aacu;
    // NOP
}
