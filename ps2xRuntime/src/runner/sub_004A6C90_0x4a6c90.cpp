#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A6C90
// Address: 0x4a6c90 - 0x4a6f60
void sub_004A6C90_0x4a6c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6C90_0x4a6c90");
#endif

    switch (ctx->pc) {
        case 0x4a6c90u: goto label_4a6c90;
        case 0x4a6c94u: goto label_4a6c94;
        case 0x4a6c98u: goto label_4a6c98;
        case 0x4a6c9cu: goto label_4a6c9c;
        case 0x4a6ca0u: goto label_4a6ca0;
        case 0x4a6ca4u: goto label_4a6ca4;
        case 0x4a6ca8u: goto label_4a6ca8;
        case 0x4a6cacu: goto label_4a6cac;
        case 0x4a6cb0u: goto label_4a6cb0;
        case 0x4a6cb4u: goto label_4a6cb4;
        case 0x4a6cb8u: goto label_4a6cb8;
        case 0x4a6cbcu: goto label_4a6cbc;
        case 0x4a6cc0u: goto label_4a6cc0;
        case 0x4a6cc4u: goto label_4a6cc4;
        case 0x4a6cc8u: goto label_4a6cc8;
        case 0x4a6cccu: goto label_4a6ccc;
        case 0x4a6cd0u: goto label_4a6cd0;
        case 0x4a6cd4u: goto label_4a6cd4;
        case 0x4a6cd8u: goto label_4a6cd8;
        case 0x4a6cdcu: goto label_4a6cdc;
        case 0x4a6ce0u: goto label_4a6ce0;
        case 0x4a6ce4u: goto label_4a6ce4;
        case 0x4a6ce8u: goto label_4a6ce8;
        case 0x4a6cecu: goto label_4a6cec;
        case 0x4a6cf0u: goto label_4a6cf0;
        case 0x4a6cf4u: goto label_4a6cf4;
        case 0x4a6cf8u: goto label_4a6cf8;
        case 0x4a6cfcu: goto label_4a6cfc;
        case 0x4a6d00u: goto label_4a6d00;
        case 0x4a6d04u: goto label_4a6d04;
        case 0x4a6d08u: goto label_4a6d08;
        case 0x4a6d0cu: goto label_4a6d0c;
        case 0x4a6d10u: goto label_4a6d10;
        case 0x4a6d14u: goto label_4a6d14;
        case 0x4a6d18u: goto label_4a6d18;
        case 0x4a6d1cu: goto label_4a6d1c;
        case 0x4a6d20u: goto label_4a6d20;
        case 0x4a6d24u: goto label_4a6d24;
        case 0x4a6d28u: goto label_4a6d28;
        case 0x4a6d2cu: goto label_4a6d2c;
        case 0x4a6d30u: goto label_4a6d30;
        case 0x4a6d34u: goto label_4a6d34;
        case 0x4a6d38u: goto label_4a6d38;
        case 0x4a6d3cu: goto label_4a6d3c;
        case 0x4a6d40u: goto label_4a6d40;
        case 0x4a6d44u: goto label_4a6d44;
        case 0x4a6d48u: goto label_4a6d48;
        case 0x4a6d4cu: goto label_4a6d4c;
        case 0x4a6d50u: goto label_4a6d50;
        case 0x4a6d54u: goto label_4a6d54;
        case 0x4a6d58u: goto label_4a6d58;
        case 0x4a6d5cu: goto label_4a6d5c;
        case 0x4a6d60u: goto label_4a6d60;
        case 0x4a6d64u: goto label_4a6d64;
        case 0x4a6d68u: goto label_4a6d68;
        case 0x4a6d6cu: goto label_4a6d6c;
        case 0x4a6d70u: goto label_4a6d70;
        case 0x4a6d74u: goto label_4a6d74;
        case 0x4a6d78u: goto label_4a6d78;
        case 0x4a6d7cu: goto label_4a6d7c;
        case 0x4a6d80u: goto label_4a6d80;
        case 0x4a6d84u: goto label_4a6d84;
        case 0x4a6d88u: goto label_4a6d88;
        case 0x4a6d8cu: goto label_4a6d8c;
        case 0x4a6d90u: goto label_4a6d90;
        case 0x4a6d94u: goto label_4a6d94;
        case 0x4a6d98u: goto label_4a6d98;
        case 0x4a6d9cu: goto label_4a6d9c;
        case 0x4a6da0u: goto label_4a6da0;
        case 0x4a6da4u: goto label_4a6da4;
        case 0x4a6da8u: goto label_4a6da8;
        case 0x4a6dacu: goto label_4a6dac;
        case 0x4a6db0u: goto label_4a6db0;
        case 0x4a6db4u: goto label_4a6db4;
        case 0x4a6db8u: goto label_4a6db8;
        case 0x4a6dbcu: goto label_4a6dbc;
        case 0x4a6dc0u: goto label_4a6dc0;
        case 0x4a6dc4u: goto label_4a6dc4;
        case 0x4a6dc8u: goto label_4a6dc8;
        case 0x4a6dccu: goto label_4a6dcc;
        case 0x4a6dd0u: goto label_4a6dd0;
        case 0x4a6dd4u: goto label_4a6dd4;
        case 0x4a6dd8u: goto label_4a6dd8;
        case 0x4a6ddcu: goto label_4a6ddc;
        case 0x4a6de0u: goto label_4a6de0;
        case 0x4a6de4u: goto label_4a6de4;
        case 0x4a6de8u: goto label_4a6de8;
        case 0x4a6decu: goto label_4a6dec;
        case 0x4a6df0u: goto label_4a6df0;
        case 0x4a6df4u: goto label_4a6df4;
        case 0x4a6df8u: goto label_4a6df8;
        case 0x4a6dfcu: goto label_4a6dfc;
        case 0x4a6e00u: goto label_4a6e00;
        case 0x4a6e04u: goto label_4a6e04;
        case 0x4a6e08u: goto label_4a6e08;
        case 0x4a6e0cu: goto label_4a6e0c;
        case 0x4a6e10u: goto label_4a6e10;
        case 0x4a6e14u: goto label_4a6e14;
        case 0x4a6e18u: goto label_4a6e18;
        case 0x4a6e1cu: goto label_4a6e1c;
        case 0x4a6e20u: goto label_4a6e20;
        case 0x4a6e24u: goto label_4a6e24;
        case 0x4a6e28u: goto label_4a6e28;
        case 0x4a6e2cu: goto label_4a6e2c;
        case 0x4a6e30u: goto label_4a6e30;
        case 0x4a6e34u: goto label_4a6e34;
        case 0x4a6e38u: goto label_4a6e38;
        case 0x4a6e3cu: goto label_4a6e3c;
        case 0x4a6e40u: goto label_4a6e40;
        case 0x4a6e44u: goto label_4a6e44;
        case 0x4a6e48u: goto label_4a6e48;
        case 0x4a6e4cu: goto label_4a6e4c;
        case 0x4a6e50u: goto label_4a6e50;
        case 0x4a6e54u: goto label_4a6e54;
        case 0x4a6e58u: goto label_4a6e58;
        case 0x4a6e5cu: goto label_4a6e5c;
        case 0x4a6e60u: goto label_4a6e60;
        case 0x4a6e64u: goto label_4a6e64;
        case 0x4a6e68u: goto label_4a6e68;
        case 0x4a6e6cu: goto label_4a6e6c;
        case 0x4a6e70u: goto label_4a6e70;
        case 0x4a6e74u: goto label_4a6e74;
        case 0x4a6e78u: goto label_4a6e78;
        case 0x4a6e7cu: goto label_4a6e7c;
        case 0x4a6e80u: goto label_4a6e80;
        case 0x4a6e84u: goto label_4a6e84;
        case 0x4a6e88u: goto label_4a6e88;
        case 0x4a6e8cu: goto label_4a6e8c;
        case 0x4a6e90u: goto label_4a6e90;
        case 0x4a6e94u: goto label_4a6e94;
        case 0x4a6e98u: goto label_4a6e98;
        case 0x4a6e9cu: goto label_4a6e9c;
        case 0x4a6ea0u: goto label_4a6ea0;
        case 0x4a6ea4u: goto label_4a6ea4;
        case 0x4a6ea8u: goto label_4a6ea8;
        case 0x4a6eacu: goto label_4a6eac;
        case 0x4a6eb0u: goto label_4a6eb0;
        case 0x4a6eb4u: goto label_4a6eb4;
        case 0x4a6eb8u: goto label_4a6eb8;
        case 0x4a6ebcu: goto label_4a6ebc;
        case 0x4a6ec0u: goto label_4a6ec0;
        case 0x4a6ec4u: goto label_4a6ec4;
        case 0x4a6ec8u: goto label_4a6ec8;
        case 0x4a6eccu: goto label_4a6ecc;
        case 0x4a6ed0u: goto label_4a6ed0;
        case 0x4a6ed4u: goto label_4a6ed4;
        case 0x4a6ed8u: goto label_4a6ed8;
        case 0x4a6edcu: goto label_4a6edc;
        case 0x4a6ee0u: goto label_4a6ee0;
        case 0x4a6ee4u: goto label_4a6ee4;
        case 0x4a6ee8u: goto label_4a6ee8;
        case 0x4a6eecu: goto label_4a6eec;
        case 0x4a6ef0u: goto label_4a6ef0;
        case 0x4a6ef4u: goto label_4a6ef4;
        case 0x4a6ef8u: goto label_4a6ef8;
        case 0x4a6efcu: goto label_4a6efc;
        case 0x4a6f00u: goto label_4a6f00;
        case 0x4a6f04u: goto label_4a6f04;
        case 0x4a6f08u: goto label_4a6f08;
        case 0x4a6f0cu: goto label_4a6f0c;
        case 0x4a6f10u: goto label_4a6f10;
        case 0x4a6f14u: goto label_4a6f14;
        case 0x4a6f18u: goto label_4a6f18;
        case 0x4a6f1cu: goto label_4a6f1c;
        case 0x4a6f20u: goto label_4a6f20;
        case 0x4a6f24u: goto label_4a6f24;
        case 0x4a6f28u: goto label_4a6f28;
        case 0x4a6f2cu: goto label_4a6f2c;
        case 0x4a6f30u: goto label_4a6f30;
        case 0x4a6f34u: goto label_4a6f34;
        case 0x4a6f38u: goto label_4a6f38;
        case 0x4a6f3cu: goto label_4a6f3c;
        case 0x4a6f40u: goto label_4a6f40;
        case 0x4a6f44u: goto label_4a6f44;
        case 0x4a6f48u: goto label_4a6f48;
        case 0x4a6f4cu: goto label_4a6f4c;
        case 0x4a6f50u: goto label_4a6f50;
        case 0x4a6f54u: goto label_4a6f54;
        case 0x4a6f58u: goto label_4a6f58;
        case 0x4a6f5cu: goto label_4a6f5c;
        default: break;
    }

    ctx->pc = 0x4a6c90u;

label_4a6c90:
    // 0x4a6c90: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4a6c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_4a6c94:
    // 0x4a6c94: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4a6c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_4a6c98:
    // 0x4a6c98: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4a6c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4a6c9c:
    // 0x4a6c9c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4a6c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_4a6ca0:
    // 0x4a6ca0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4a6ca0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a6ca4:
    // 0x4a6ca4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4a6ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4a6ca8:
    // 0x4a6ca8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4a6ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4a6cac:
    // 0x4a6cac: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x4a6cacu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_4a6cb0:
    // 0x4a6cb0: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x4a6cb0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_4a6cb4:
    // 0x4a6cb4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x4a6cb4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_4a6cb8:
    // 0x4a6cb8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x4a6cb8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_4a6cbc:
    // 0x4a6cbc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4a6cbcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4a6cc0:
    // 0x4a6cc0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4a6cc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4a6cc4:
    // 0x4a6cc4: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x4a6cc4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
label_4a6cc8:
    // 0x4a6cc8: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x4a6cc8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
label_4a6ccc:
    // 0x4a6ccc: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x4a6cccu;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
label_4a6cd0:
    // 0x4a6cd0: 0x10800096  beqz        $a0, . + 4 + (0x96 << 2)
label_4a6cd4:
    if (ctx->pc == 0x4A6CD4u) {
        ctx->pc = 0x4A6CD4u;
            // 0x4a6cd4: 0x46007d06  mov.s       $f20, $f15 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[15]);
        ctx->pc = 0x4A6CD8u;
        goto label_4a6cd8;
    }
    ctx->pc = 0x4A6CD0u;
    {
        const bool branch_taken_0x4a6cd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6CD0u;
            // 0x4a6cd4: 0x46007d06  mov.s       $f20, $f15 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6cd0) {
            ctx->pc = 0x4A6F2Cu;
            goto label_4a6f2c;
        }
    }
    ctx->pc = 0x4A6CD8u;
label_4a6cd8:
    // 0x4a6cd8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4a6cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4a6cdc:
    // 0x4a6cdc: 0x48080  sll         $s0, $a0, 2
    ctx->pc = 0x4a6cdcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4a6ce0:
    // 0x4a6ce0: 0x8c5189e0  lw          $s1, -0x7620($v0)
    ctx->pc = 0x4a6ce0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4a6ce4:
    // 0x4a6ce4: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4a6ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_4a6ce8:
    // 0x4a6ce8: 0x24844e80  addiu       $a0, $a0, 0x4E80
    ctx->pc = 0x4a6ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20096));
label_4a6cec:
    // 0x4a6cec: 0x3c0341e0  lui         $v1, 0x41E0
    ctx->pc = 0x4a6cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16864 << 16));
label_4a6cf0:
    // 0x4a6cf0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x4a6cf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4a6cf4:
    // 0x4a6cf4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4a6cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4a6cf8:
    // 0x4a6cf8: 0x244250c0  addiu       $v0, $v0, 0x50C0
    ctx->pc = 0x4a6cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20672));
label_4a6cfc:
    // 0x4a6cfc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4a6cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4a6d00:
    // 0x4a6d00: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4a6d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a6d04:
    // 0x4a6d04: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4a6d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4a6d08:
    // 0x4a6d08: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x4a6d08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_4a6d0c:
    // 0x4a6d0c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x4a6d0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_4a6d10:
    // 0x4a6d10: 0x859021  addu        $s2, $a0, $a1
    ctx->pc = 0x4a6d10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4a6d14:
    // 0x4a6d14: 0x3c024387  lui         $v0, 0x4387
    ctx->pc = 0x4a6d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17287 << 16));
label_4a6d18:
    // 0x4a6d18: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4a6d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4a6d1c:
    // 0x4a6d1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a6d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a6d20:
    // 0x4a6d20: 0x0  nop
    ctx->pc = 0x4a6d20u;
    // NOP
label_4a6d24:
    // 0x4a6d24: 0x46170040  add.s       $f1, $f0, $f23
    ctx->pc = 0x4a6d24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_4a6d28:
    // 0x4a6d28: 0x3c023f21  lui         $v0, 0x3F21
    ctx->pc = 0x4a6d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16161 << 16));
label_4a6d2c:
    // 0x4a6d2c: 0x344247ae  ori         $v0, $v0, 0x47AE
    ctx->pc = 0x4a6d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18350);
label_4a6d30:
    // 0x4a6d30: 0xc6450008  lwc1        $f5, 0x8($s2)
    ctx->pc = 0x4a6d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4a6d34:
    // 0x4a6d34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a6d34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a6d38:
    // 0x4a6d38: 0x0  nop
    ctx->pc = 0x4a6d38u;
    // NOP
label_4a6d3c:
    // 0x4a6d3c: 0x46160018  adda.s      $f0, $f22
    ctx->pc = 0x4a6d3cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_4a6d40:
    // 0x4a6d40: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x4a6d40u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_4a6d44:
    // 0x4a6d44: 0xc642000c  lwc1        $f2, 0xC($s2)
    ctx->pc = 0x4a6d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4a6d48:
    // 0x4a6d48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a6d48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a6d4c:
    // 0x4a6d4c: 0x0  nop
    ctx->pc = 0x4a6d4cu;
    // NOP
label_4a6d50:
    // 0x4a6d50: 0x46050642  mul.s       $f25, $f0, $f5
    ctx->pc = 0x4a6d50u;
    ctx->f[25] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_4a6d54:
    // 0x4a6d54: 0x46020602  mul.s       $f24, $f0, $f2
    ctx->pc = 0x4a6d54u;
    ctx->f[24] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_4a6d58:
    // 0x4a6d58: 0x46030b00  add.s       $f12, $f1, $f3
    ctx->pc = 0x4a6d58u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_4a6d5c:
    // 0x4a6d5c: 0xc04f3fc  jal         func_13CFF0
label_4a6d60:
    if (ctx->pc == 0x4A6D60u) {
        ctx->pc = 0x4A6D60u;
            // 0x4a6d60: 0x4602235c  madd.s      $f13, $f4, $f2 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
        ctx->pc = 0x4A6D64u;
        goto label_4a6d64;
    }
    ctx->pc = 0x4A6D5Cu;
    SET_GPR_U32(ctx, 31, 0x4A6D64u);
    ctx->pc = 0x4A6D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6D5Cu;
            // 0x4a6d60: 0x4602235c  madd.s      $f13, $f4, $f2 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6D64u; }
        if (ctx->pc != 0x4A6D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6D64u; }
        if (ctx->pc != 0x4A6D64u) { return; }
    }
    ctx->pc = 0x4A6D64u;
label_4a6d64:
    // 0x4a6d64: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x4a6d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_4a6d68:
    // 0x4a6d68: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4a6d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4a6d6c:
    // 0x4a6d6c: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x4a6d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_4a6d70:
    // 0x4a6d70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a6d70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a6d74:
    // 0x4a6d74: 0x0  nop
    ctx->pc = 0x4a6d74u;
    // NOP
label_4a6d78:
    // 0x4a6d78: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x4a6d78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_4a6d7c:
    // 0x4a6d7c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a6d7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4a6d80:
    // 0x4a6d80: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x4a6d80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_4a6d84:
    // 0x4a6d84: 0xc04cdd0  jal         func_133740
label_4a6d88:
    if (ctx->pc == 0x4A6D88u) {
        ctx->pc = 0x4A6D88u;
            // 0x4a6d88: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A6D8Cu;
        goto label_4a6d8c;
    }
    ctx->pc = 0x4A6D84u;
    SET_GPR_U32(ctx, 31, 0x4A6D8Cu);
    ctx->pc = 0x4A6D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6D84u;
            // 0x4a6d88: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133740u;
    if (runtime->hasFunction(0x133740u)) {
        auto targetFn = runtime->lookupFunction(0x133740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6D8Cu; }
        if (ctx->pc != 0x4A6D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133740_0x133740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6D8Cu; }
        if (ctx->pc != 0x4A6D8Cu) { return; }
    }
    ctx->pc = 0x4A6D8Cu;
label_4a6d8c:
    // 0x4a6d8c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4a6d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4a6d90:
    // 0x4a6d90: 0x24061fff  addiu       $a2, $zero, 0x1FFF
    ctx->pc = 0x4a6d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8191));
label_4a6d94:
    // 0x4a6d94: 0xc04cdf0  jal         func_1337C0
label_4a6d98:
    if (ctx->pc == 0x4A6D98u) {
        ctx->pc = 0x4A6D98u;
            // 0x4a6d98: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A6D9Cu;
        goto label_4a6d9c;
    }
    ctx->pc = 0x4A6D94u;
    SET_GPR_U32(ctx, 31, 0x4A6D9Cu);
    ctx->pc = 0x4A6D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6D94u;
            // 0x4a6d98: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1337C0u;
    if (runtime->hasFunction(0x1337C0u)) {
        auto targetFn = runtime->lookupFunction(0x1337C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6D9Cu; }
        if (ctx->pc != 0x4A6D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001337C0_0x1337c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6D9Cu; }
        if (ctx->pc != 0x4A6D9Cu) { return; }
    }
    ctx->pc = 0x4A6D9Cu;
label_4a6d9c:
    // 0x4a6d9c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a6d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a6da0:
    // 0x4a6da0: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x4a6da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_4a6da4:
    // 0x4a6da4: 0xc0506ac  jal         func_141AB0
label_4a6da8:
    if (ctx->pc == 0x4A6DA8u) {
        ctx->pc = 0x4A6DA8u;
            // 0x4a6da8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4A6DACu;
        goto label_4a6dac;
    }
    ctx->pc = 0x4A6DA4u;
    SET_GPR_U32(ctx, 31, 0x4A6DACu);
    ctx->pc = 0x4A6DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6DA4u;
            // 0x4a6da8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6DACu; }
        if (ctx->pc != 0x4A6DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6DACu; }
        if (ctx->pc != 0x4A6DACu) { return; }
    }
    ctx->pc = 0x4A6DACu;
label_4a6dac:
    // 0x4a6dac: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4a6dacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4a6db0:
    // 0x4a6db0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a6db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a6db4:
    // 0x4a6db4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4a6db4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4a6db8:
    // 0x4a6db8: 0x320f809  jalr        $t9
label_4a6dbc:
    if (ctx->pc == 0x4A6DBCu) {
        ctx->pc = 0x4A6DBCu;
            // 0x4a6dbc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4A6DC0u;
        goto label_4a6dc0;
    }
    ctx->pc = 0x4A6DB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A6DC0u);
        ctx->pc = 0x4A6DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6DB8u;
            // 0x4a6dbc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A6DC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A6DC0u; }
            if (ctx->pc != 0x4A6DC0u) { return; }
        }
        }
    }
    ctx->pc = 0x4A6DC0u;
label_4a6dc0:
    // 0x4a6dc0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4a6dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4a6dc4:
    // 0x4a6dc4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4a6dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a6dc8:
    // 0x4a6dc8: 0x84444e78  lh          $a0, 0x4E78($v0)
    ctx->pc = 0x4a6dc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20088)));
label_4a6dcc:
    // 0x4a6dcc: 0x4600cb07  neg.s       $f12, $f25
    ctx->pc = 0x4a6dccu;
    ctx->f[12] = FPU_NEG_S(ctx->f[25]);
label_4a6dd0:
    // 0x4a6dd0: 0x4600cb86  mov.s       $f14, $f25
    ctx->pc = 0x4a6dd0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[25]);
label_4a6dd4:
    // 0x4a6dd4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4a6dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a6dd8:
    // 0x4a6dd8: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x4a6dd8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
label_4a6ddc:
    // 0x4a6ddc: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x4a6ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4a6de0:
    // 0x4a6de0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4a6de0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a6de4:
    // 0x4a6de4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4a6de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4a6de8:
    // 0x4a6de8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a6de8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a6dec:
    // 0x4a6dec: 0x84434e7a  lh          $v1, 0x4E7A($v0)
    ctx->pc = 0x4a6decu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20090)));
label_4a6df0:
    // 0x4a6df0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a6df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a6df4:
    // 0x4a6df4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a6df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a6df8:
    // 0x4a6df8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a6df8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a6dfc:
    // 0x4a6dfc: 0x0  nop
    ctx->pc = 0x4a6dfcu;
    // NOP
label_4a6e00:
    // 0x4a6e00: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a6e00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a6e04:
    // 0x4a6e04: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a6e04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a6e08:
    // 0x4a6e08: 0xc0bc284  jal         func_2F0A10
label_4a6e0c:
    if (ctx->pc == 0x4A6E0Cu) {
        ctx->pc = 0x4A6E0Cu;
            // 0x4a6e0c: 0x4600c347  neg.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[24]);
        ctx->pc = 0x4A6E10u;
        goto label_4a6e10;
    }
    ctx->pc = 0x4A6E08u;
    SET_GPR_U32(ctx, 31, 0x4A6E10u);
    ctx->pc = 0x4A6E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6E08u;
            // 0x4a6e0c: 0x4600c347  neg.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6E10u; }
        if (ctx->pc != 0x4A6E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6E10u; }
        if (ctx->pc != 0x4A6E10u) { return; }
    }
    ctx->pc = 0x4A6E10u;
label_4a6e10:
    // 0x4a6e10: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4a6e10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4a6e14:
    // 0x4a6e14: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4a6e14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4a6e18:
    // 0x4a6e18: 0x320f809  jalr        $t9
label_4a6e1c:
    if (ctx->pc == 0x4A6E1Cu) {
        ctx->pc = 0x4A6E1Cu;
            // 0x4a6e1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A6E20u;
        goto label_4a6e20;
    }
    ctx->pc = 0x4A6E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A6E20u);
        ctx->pc = 0x4A6E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6E18u;
            // 0x4a6e1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A6E20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A6E20u; }
            if (ctx->pc != 0x4A6E20u) { return; }
        }
        }
    }
    ctx->pc = 0x4A6E20u;
label_4a6e20:
    // 0x4a6e20: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4a6e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4a6e24:
    // 0x4a6e24: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4a6e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4a6e28:
    // 0x4a6e28: 0x244250b0  addiu       $v0, $v0, 0x50B0
    ctx->pc = 0x4a6e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20656));
label_4a6e2c:
    // 0x4a6e2c: 0x24635010  addiu       $v1, $v1, 0x5010
    ctx->pc = 0x4a6e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20496));
label_4a6e30:
    // 0x4a6e30: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x4a6e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4a6e34:
    // 0x4a6e34: 0x3c0541c8  lui         $a1, 0x41C8
    ctx->pc = 0x4a6e34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16840 << 16));
label_4a6e38:
    // 0x4a6e38: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4a6e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a6e3c:
    // 0x4a6e3c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4a6e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4a6e40:
    // 0x4a6e40: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x4a6e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_4a6e44:
    // 0x4a6e44: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x4a6e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
label_4a6e48:
    // 0x4a6e48: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x4a6e48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_4a6e4c:
    // 0x4a6e4c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x4a6e4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4a6e50:
    // 0x4a6e50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a6e50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a6e54:
    // 0x4a6e54: 0x3c033ee1  lui         $v1, 0x3EE1
    ctx->pc = 0x4a6e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16097 << 16));
label_4a6e58:
    // 0x4a6e58: 0x3c023f3a  lui         $v0, 0x3F3A
    ctx->pc = 0x4a6e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16186 << 16));
label_4a6e5c:
    // 0x4a6e5c: 0x346347ae  ori         $v1, $v1, 0x47AE
    ctx->pc = 0x4a6e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18350);
label_4a6e60:
    // 0x4a6e60: 0x3446e148  ori         $a2, $v0, 0xE148
    ctx->pc = 0x4a6e60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
label_4a6e64:
    // 0x4a6e64: 0x46170080  add.s       $f2, $f0, $f23
    ctx->pc = 0x4a6e64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_4a6e68:
    // 0x4a6e68: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a6e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a6e6c:
    // 0x4a6e6c: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x4a6e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_4a6e70:
    // 0x4a6e70: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4a6e70u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a6e74:
    // 0x4a6e74: 0x0  nop
    ctx->pc = 0x4a6e74u;
    // NOP
label_4a6e78:
    // 0x4a6e78: 0x46160018  adda.s      $f0, $f22
    ctx->pc = 0x4a6e78u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_4a6e7c:
    // 0x4a6e7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a6e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a6e80:
    // 0x4a6e80: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x4a6e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4a6e84:
    // 0x4a6e84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a6e84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a6e88:
    // 0x4a6e88: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x4a6e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4a6e8c:
    // 0x4a6e8c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x4a6e8cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4a6e90:
    // 0x4a6e90: 0x0  nop
    ctx->pc = 0x4a6e90u;
    // NOP
label_4a6e94:
    // 0x4a6e94: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x4a6e94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_4a6e98:
    // 0x4a6e98: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x4a6e98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_4a6e9c:
    // 0x4a6e9c: 0x46150dc2  mul.s       $f23, $f1, $f21
    ctx->pc = 0x4a6e9cu;
    ctx->f[23] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_4a6ea0:
    // 0x4a6ea0: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x4a6ea0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_4a6ea4:
    // 0x4a6ea4: 0x46150542  mul.s       $f21, $f0, $f21
    ctx->pc = 0x4a6ea4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_4a6ea8:
    // 0x4a6ea8: 0x46041580  add.s       $f22, $f2, $f4
    ctx->pc = 0x4a6ea8u;
    ctx->f[22] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_4a6eac:
    // 0x4a6eac: 0xc0506ac  jal         func_141AB0
label_4a6eb0:
    if (ctx->pc == 0x4A6EB0u) {
        ctx->pc = 0x4A6EB0u;
            // 0x4a6eb0: 0x46032d1c  madd.s      $f20, $f5, $f3 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[3]));
        ctx->pc = 0x4A6EB4u;
        goto label_4a6eb4;
    }
    ctx->pc = 0x4A6EACu;
    SET_GPR_U32(ctx, 31, 0x4A6EB4u);
    ctx->pc = 0x4A6EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6EACu;
            // 0x4a6eb0: 0x46032d1c  madd.s      $f20, $f5, $f3 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6EB4u; }
        if (ctx->pc != 0x4A6EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6EB4u; }
        if (ctx->pc != 0x4A6EB4u) { return; }
    }
    ctx->pc = 0x4A6EB4u;
label_4a6eb4:
    // 0x4a6eb4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4a6eb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4a6eb8:
    // 0x4a6eb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a6eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a6ebc:
    // 0x4a6ebc: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4a6ebcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4a6ec0:
    // 0x4a6ec0: 0x320f809  jalr        $t9
label_4a6ec4:
    if (ctx->pc == 0x4A6EC4u) {
        ctx->pc = 0x4A6EC4u;
            // 0x4a6ec4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4A6EC8u;
        goto label_4a6ec8;
    }
    ctx->pc = 0x4A6EC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A6EC8u);
        ctx->pc = 0x4A6EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6EC0u;
            // 0x4a6ec4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A6EC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A6EC8u; }
            if (ctx->pc != 0x4A6EC8u) { return; }
        }
        }
    }
    ctx->pc = 0x4A6EC8u;
label_4a6ec8:
    // 0x4a6ec8: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4a6ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4a6ecc:
    // 0x4a6ecc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4a6eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4a6ed0:
    // 0x4a6ed0: 0x84685000  lh          $t0, 0x5000($v1)
    ctx->pc = 0x4a6ed0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20480)));
label_4a6ed4:
    // 0x4a6ed4: 0x4617b301  sub.s       $f12, $f22, $f23
    ctx->pc = 0x4a6ed4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[23]);
label_4a6ed8:
    // 0x4a6ed8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4a6ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a6edc:
    // 0x4a6edc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4a6edcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a6ee0:
    // 0x4a6ee0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a6ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a6ee4:
    // 0x4a6ee4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a6ee4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a6ee8:
    // 0x4a6ee8: 0x84435002  lh          $v1, 0x5002($v0)
    ctx->pc = 0x4a6ee8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20482)));
label_4a6eec:
    // 0x4a6eec: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4a6eecu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a6ef0:
    // 0x4a6ef0: 0x0  nop
    ctx->pc = 0x4a6ef0u;
    // NOP
label_4a6ef4:
    // 0x4a6ef4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a6ef4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a6ef8:
    // 0x4a6ef8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a6ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a6efc:
    // 0x4a6efc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a6efcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a6f00:
    // 0x4a6f00: 0x0  nop
    ctx->pc = 0x4a6f00u;
    // NOP
label_4a6f04:
    // 0x4a6f04: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a6f04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a6f08:
    // 0x4a6f08: 0x4617b380  add.s       $f14, $f22, $f23
    ctx->pc = 0x4a6f08u;
    ctx->f[14] = FPU_ADD_S(ctx->f[22], ctx->f[23]);
label_4a6f0c:
    // 0x4a6f0c: 0x4615a341  sub.s       $f13, $f20, $f21
    ctx->pc = 0x4a6f0cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
label_4a6f10:
    // 0x4a6f10: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a6f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a6f14:
    // 0x4a6f14: 0xc0bc284  jal         func_2F0A10
label_4a6f18:
    if (ctx->pc == 0x4A6F18u) {
        ctx->pc = 0x4A6F18u;
            // 0x4a6f18: 0x4615a3c0  add.s       $f15, $f20, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
        ctx->pc = 0x4A6F1Cu;
        goto label_4a6f1c;
    }
    ctx->pc = 0x4A6F14u;
    SET_GPR_U32(ctx, 31, 0x4A6F1Cu);
    ctx->pc = 0x4A6F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6F14u;
            // 0x4a6f18: 0x4615a3c0  add.s       $f15, $f20, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6F1Cu; }
        if (ctx->pc != 0x4A6F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6F1Cu; }
        if (ctx->pc != 0x4A6F1Cu) { return; }
    }
    ctx->pc = 0x4A6F1Cu;
label_4a6f1c:
    // 0x4a6f1c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4a6f1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4a6f20:
    // 0x4a6f20: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4a6f20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4a6f24:
    // 0x4a6f24: 0x320f809  jalr        $t9
label_4a6f28:
    if (ctx->pc == 0x4A6F28u) {
        ctx->pc = 0x4A6F28u;
            // 0x4a6f28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A6F2Cu;
        goto label_4a6f2c;
    }
    ctx->pc = 0x4A6F24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A6F2Cu);
        ctx->pc = 0x4A6F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6F24u;
            // 0x4a6f28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A6F2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A6F2Cu; }
            if (ctx->pc != 0x4A6F2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4A6F2Cu;
label_4a6f2c:
    // 0x4a6f2c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4a6f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4a6f30:
    // 0x4a6f30: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x4a6f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_4a6f34:
    // 0x4a6f34: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4a6f34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a6f38:
    // 0x4a6f38: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x4a6f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_4a6f3c:
    // 0x4a6f3c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4a6f3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a6f40:
    // 0x4a6f40: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x4a6f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_4a6f44:
    // 0x4a6f44: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4a6f44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a6f48:
    // 0x4a6f48: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x4a6f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4a6f4c:
    // 0x4a6f4c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4a6f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a6f50:
    // 0x4a6f50: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4a6f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4a6f54:
    // 0x4a6f54: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4a6f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4a6f58:
    // 0x4a6f58: 0x3e00008  jr          $ra
label_4a6f5c:
    if (ctx->pc == 0x4A6F5Cu) {
        ctx->pc = 0x4A6F5Cu;
            // 0x4a6f5c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4A6F60u;
        goto label_fallthrough_0x4a6f58;
    }
    ctx->pc = 0x4A6F58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A6F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6F58u;
            // 0x4a6f5c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4a6f58:
    ctx->pc = 0x4A6F60u;
}
