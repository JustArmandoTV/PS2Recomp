#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00148E60
// Address: 0x148e60 - 0x149690
void sub_00148E60_0x148e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148E60_0x148e60");
#endif

    switch (ctx->pc) {
        case 0x148f08u: goto label_148f08;
        case 0x148f40u: goto label_148f40;
        case 0x148f9cu: goto label_148f9c;
        case 0x148ff0u: goto label_148ff0;
        case 0x149010u: goto label_149010;
        case 0x149128u: goto label_149128;
        case 0x149144u: goto label_149144;
        case 0x149190u: goto label_149190;
        case 0x1491a8u: goto label_1491a8;
        case 0x149228u: goto label_149228;
        case 0x149244u: goto label_149244;
        case 0x149290u: goto label_149290;
        case 0x1492a8u: goto label_1492a8;
        case 0x149328u: goto label_149328;
        case 0x14934cu: goto label_14934c;
        case 0x1493d0u: goto label_1493d0;
        case 0x149418u: goto label_149418;
        case 0x149598u: goto label_149598;
        case 0x149658u: goto label_149658;
        default: break;
    }

    ctx->pc = 0x148e60u;

    // 0x148e60: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x148e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x148e64: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x148e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x148e68: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x148e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x148e6c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x148e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x148e70: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x148e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x148e74: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x148e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x148e78: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x148e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x148e7c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x148e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x148e80: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x148e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x148e84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x148e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x148e88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x148e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x148e8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x148e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x148e90: 0xc4604d40  lwc1        $f0, 0x4D40($v1)
    ctx->pc = 0x148e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 19776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148e94: 0xafa4011c  sw          $a0, 0x11C($sp)
    ctx->pc = 0x148e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 4));
    // 0x148e98: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x148e98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x148e9c: 0xafa60118  sw          $a2, 0x118($sp)
    ctx->pc = 0x148e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 6));
    // 0x148ea0: 0xafa70114  sw          $a3, 0x114($sp)
    ctx->pc = 0x148ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 7));
    // 0x148ea4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x148ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x148ea8: 0xafa80110  sw          $t0, 0x110($sp)
    ctx->pc = 0x148ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 8));
    // 0x148eac: 0xc4624d44  lwc1        $f2, 0x4D44($v1)
    ctx->pc = 0x148eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 19780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x148eb0: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x148eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x148eb4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x148eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x148eb8: 0xc4614d48  lwc1        $f1, 0x4D48($v1)
    ctx->pc = 0x148eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 19784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148ebc: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x148ebcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x148ec0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x148ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x148ec4: 0xc4604d4c  lwc1        $f0, 0x4D4C($v1)
    ctx->pc = 0x148ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 19788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148ec8: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x148ec8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x148ecc: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x148eccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148ed0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x148ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x148ed4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x148ED4u;
    {
        const bool branch_taken_0x148ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x148ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148ED4u;
            // 0x148ed8: 0xe7a0012c  swc1        $f0, 0x12C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x148ed4) {
            ctx->pc = 0x148EE4u;
            goto label_148ee4;
        }
    }
    ctx->pc = 0x148EDCu;
    // 0x148edc: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x148edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x148ee0: 0xafa3012c  sw          $v1, 0x12C($sp)
    ctx->pc = 0x148ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 3));
label_148ee4:
    // 0x148ee4: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x148ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x148ee8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x148ee8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148eec: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x148eecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148ef0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x148ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x148ef4: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x148ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x148ef8: 0x8c73001c  lw          $s3, 0x1C($v1)
    ctx->pc = 0x148ef8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x148efc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x148efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x148f00: 0x18600015  blez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x148F00u;
    {
        const bool branch_taken_0x148f00 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x148F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148F00u;
            // 0x148f04: 0x7fa300b0  sq          $v1, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148f00) {
            ctx->pc = 0x148F58u;
            goto label_148f58;
        }
    }
    ctx->pc = 0x148F08u;
label_148f08:
    // 0x148f08: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x148f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x148f0c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x148f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x148f10: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x148F10u;
    {
        const bool branch_taken_0x148f10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x148f10) {
            ctx->pc = 0x148F40u;
            goto label_148f40;
        }
    }
    ctx->pc = 0x148F18u;
    // 0x148f18: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x148f18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x148f1c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x148f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x148f20: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x148f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x148f24: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x148f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x148f28: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x148f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x148f2c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x148f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x148f30: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x148f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x148f34: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x148f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x148f38: 0xc0517bc  jal         func_145EF0
    ctx->pc = 0x148F38u;
    SET_GPR_U32(ctx, 31, 0x148F40u);
    ctx->pc = 0x148F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148F38u;
            // 0x148f3c: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EF0u;
    if (runtime->hasFunction(0x145EF0u)) {
        auto targetFn = runtime->lookupFunction(0x145EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148F40u; }
        if (ctx->pc != 0x148F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EF0_0x145ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148F40u; }
        if (ctx->pc != 0x148F40u) { return; }
    }
    ctx->pc = 0x148F40u;
label_148f40:
    // 0x148f40: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x148f40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x148f44: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x148f44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x148f48: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x148f48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x148f4c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x148F4Cu;
    {
        const bool branch_taken_0x148f4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x148F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148F4Cu;
            // 0x148f50: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148f4c) {
            ctx->pc = 0x148F08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_148f08;
        }
    }
    ctx->pc = 0x148F54u;
    // 0x148f54: 0x0  nop
    ctx->pc = 0x148f54u;
    // NOP
label_148f58:
    // 0x148f58: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x148f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x148f5c: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x148f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x148f60: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x148f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x148f64: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x148f64u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x148f68: 0x186001b5  blez        $v1, . + 4 + (0x1B5 << 2)
    ctx->pc = 0x148F68u;
    {
        const bool branch_taken_0x148f68 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x148F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148F68u;
            // 0x148f6c: 0xafa00100  sw          $zero, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148f68) {
            ctx->pc = 0x149640u;
            goto label_149640;
        }
    }
    ctx->pc = 0x148F70u;
    // 0x148f70: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x148f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x148f74: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x148f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x148f78: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x148f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x148f7c: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x148f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x148f80: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x148f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x148f84: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x148f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x148f88: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x148f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x148f8c: 0x30760002  andi        $s6, $v1, 0x2
    ctx->pc = 0x148f8cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x148f90: 0x30770010  andi        $s7, $v1, 0x10
    ctx->pc = 0x148f90u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x148f94: 0x307e0040  andi        $fp, $v1, 0x40
    ctx->pc = 0x148f94u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x148f98: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x148f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_148f9c:
    // 0x148f9c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x148f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148fa0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x148fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x148fa4: 0x14830198  bne         $a0, $v1, . + 4 + (0x198 << 2)
    ctx->pc = 0x148FA4u;
    {
        const bool branch_taken_0x148fa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x148fa4) {
            ctx->pc = 0x149608u;
            goto label_149608;
        }
    }
    ctx->pc = 0x148FACu;
    // 0x148fac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x148facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x148fb0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x148fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x148fb4: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x148fb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x148fb8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x148FB8u;
    {
        const bool branch_taken_0x148fb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x148fb8) {
            ctx->pc = 0x148FD8u;
            goto label_148fd8;
        }
    }
    ctx->pc = 0x148FC0u;
    // 0x148fc0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x148fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x148fc4: 0x10830190  beq         $a0, $v1, . + 4 + (0x190 << 2)
    ctx->pc = 0x148FC4u;
    {
        const bool branch_taken_0x148fc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x148fc4) {
            ctx->pc = 0x149608u;
            goto label_149608;
        }
    }
    ctx->pc = 0x148FCCu;
    // 0x148fcc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x148FCCu;
    {
        const bool branch_taken_0x148fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148fcc) {
            ctx->pc = 0x148FF8u;
            goto label_148ff8;
        }
    }
    ctx->pc = 0x148FD4u;
    // 0x148fd4: 0x0  nop
    ctx->pc = 0x148fd4u;
    // NOP
label_148fd8:
    // 0x148fd8: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x148fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x148fdc: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x148fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x148fe0: 0x8fa70114  lw          $a3, 0x114($sp)
    ctx->pc = 0x148fe0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x148fe4: 0x8fa80110  lw          $t0, 0x110($sp)
    ctx->pc = 0x148fe4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x148fe8: 0xc051db8  jal         func_1476E0
    ctx->pc = 0x148FE8u;
    SET_GPR_U32(ctx, 31, 0x148FF0u);
    ctx->pc = 0x148FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148FE8u;
            // 0x148fec: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1476E0u;
    if (runtime->hasFunction(0x1476E0u)) {
        auto targetFn = runtime->lookupFunction(0x1476E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148FF0u; }
        if (ctx->pc != 0x148FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001476E0_0x1476e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148FF0u; }
        if (ctx->pc != 0x148FF0u) { return; }
    }
    ctx->pc = 0x148FF0u;
label_148ff0:
    // 0x148ff0: 0x10000185  b           . + 4 + (0x185 << 2)
    ctx->pc = 0x148FF0u;
    {
        const bool branch_taken_0x148ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148ff0) {
            ctx->pc = 0x149608u;
            goto label_149608;
        }
    }
    ctx->pc = 0x148FF8u;
label_148ff8:
    // 0x148ff8: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x148ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x148ffc: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x148ffcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x149000: 0x1a200181  blez        $s1, . + 4 + (0x181 << 2)
    ctx->pc = 0x149000u;
    {
        const bool branch_taken_0x149000 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x149004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149000u;
            // 0x149004: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149000) {
            ctx->pc = 0x149608u;
            goto label_149608;
        }
    }
    ctx->pc = 0x149008u;
    // 0x149008: 0x8fb20114  lw          $s2, 0x114($sp)
    ctx->pc = 0x149008u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x14900c: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x14900cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_149010:
    // 0x149010: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x149010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149014: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x149014u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x149018: 0x0  nop
    ctx->pc = 0x149018u;
    // NOP
    // 0x14901c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x14901cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149020: 0x45010173  bc1t        . + 4 + (0x173 << 2)
    ctx->pc = 0x149020u;
    {
        const bool branch_taken_0x149020 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x149024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149020u;
            // 0x149024: 0xe7a1013c  swc1        $f1, 0x13C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x149020) {
            ctx->pc = 0x1495F0u;
            goto label_1495f0;
        }
    }
    ctx->pc = 0x149028u;
    // 0x149028: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x149028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x14902c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x14902cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x149030: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x149030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x149034: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x149034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x149038: 0x30c50070  andi        $a1, $a2, 0x70
    ctx->pc = 0x149038u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)112);
    // 0x14903c: 0x791821  addu        $v1, $v1, $t9
    ctx->pc = 0x14903cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
    // 0x149040: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x149040u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x149044: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x149044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x149048: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x149048u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x14904c: 0x10a40004  beq         $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14904Cu;
    {
        const bool branch_taken_0x14904c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x149050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14904Cu;
            // 0x149050: 0x8cf50004  lw          $s5, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14904c) {
            ctx->pc = 0x149060u;
            goto label_149060;
        }
    }
    ctx->pc = 0x149054u;
    // 0x149054: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x149054u;
    {
        const bool branch_taken_0x149054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x149054) {
            ctx->pc = 0x149068u;
            goto label_149068;
        }
    }
    ctx->pc = 0x14905Cu;
    // 0x14905c: 0x0  nop
    ctx->pc = 0x14905cu;
    // NOP
label_149060:
    // 0x149060: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x149060u;
    {
        const bool branch_taken_0x149060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149060u;
            // 0x149064: 0x24140004  addiu       $s4, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149060) {
            ctx->pc = 0x149070u;
            goto label_149070;
        }
    }
    ctx->pc = 0x149068u;
label_149068:
    // 0x149068: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x149068u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14906c: 0x0  nop
    ctx->pc = 0x14906cu;
    // NOP
label_149070:
    // 0x149070: 0x30c30100  andi        $v1, $a2, 0x100
    ctx->pc = 0x149070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
    // 0x149074: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x149074u;
    {
        const bool branch_taken_0x149074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x149074) {
            ctx->pc = 0x1490A8u;
            goto label_1490a8;
        }
    }
    ctx->pc = 0x14907Cu;
    // 0x14907c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x14907cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x149080: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x149080u;
    {
        const bool branch_taken_0x149080 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x149080) {
            ctx->pc = 0x1490A0u;
            goto label_1490a0;
        }
    }
    ctx->pc = 0x149088u;
    // 0x149088: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x149088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14908c: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14908Cu;
    {
        const bool branch_taken_0x14908c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x14908c) {
            ctx->pc = 0x1490A0u;
            goto label_1490a0;
        }
    }
    ctx->pc = 0x149094u;
    // 0x149094: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x149094u;
    {
        const bool branch_taken_0x149094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x149094) {
            ctx->pc = 0x1490A8u;
            goto label_1490a8;
        }
    }
    ctx->pc = 0x14909Cu;
    // 0x14909c: 0x0  nop
    ctx->pc = 0x14909cu;
    // NOP
label_1490a0:
    // 0x1490a0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1490a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1490a4: 0x0  nop
    ctx->pc = 0x1490a4u;
    // NOP
label_1490a8:
    // 0x1490a8: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1490a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1490ac: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1490acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1490b0: 0x1083014f  beq         $a0, $v1, . + 4 + (0x14F << 2)
    ctx->pc = 0x1490B0u;
    {
        const bool branch_taken_0x1490b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1490b0) {
            ctx->pc = 0x1495F0u;
            goto label_1495f0;
        }
    }
    ctx->pc = 0x1490B8u;
    // 0x1490b8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1490b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1490bc: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1490BCu;
    {
        const bool branch_taken_0x1490bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1490bc) {
            ctx->pc = 0x1490D0u;
            goto label_1490d0;
        }
    }
    ctx->pc = 0x1490C4u;
    // 0x1490c4: 0x1000014a  b           . + 4 + (0x14A << 2)
    ctx->pc = 0x1490C4u;
    {
        const bool branch_taken_0x1490c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1490c4) {
            ctx->pc = 0x1495F0u;
            goto label_1495f0;
        }
    }
    ctx->pc = 0x1490CCu;
    // 0x1490cc: 0x0  nop
    ctx->pc = 0x1490ccu;
    // NOP
label_1490d0:
    // 0x1490d0: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x1490d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1490d4: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x1490D4u;
    {
        const bool branch_taken_0x1490d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1490d4) {
            ctx->pc = 0x1491D0u;
            goto label_1491d0;
        }
    }
    ctx->pc = 0x1490DCu;
    // 0x1490dc: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x1490dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1490e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1490e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1490e4: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1490E4u;
    {
        const bool branch_taken_0x1490e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1490e4) {
            ctx->pc = 0x149178u;
            goto label_149178;
        }
    }
    ctx->pc = 0x1490ECu;
    // 0x1490ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1490ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1490f0: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1490F0u;
    {
        const bool branch_taken_0x1490f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1490f0) {
            ctx->pc = 0x149108u;
            goto label_149108;
        }
    }
    ctx->pc = 0x1490F8u;
    // 0x1490f8: 0x10800035  beqz        $a0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1490F8u;
    {
        const bool branch_taken_0x1490f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1490f8) {
            ctx->pc = 0x1491D0u;
            goto label_1491d0;
        }
    }
    ctx->pc = 0x149100u;
    // 0x149100: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x149100u;
    {
        const bool branch_taken_0x149100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x149100) {
            ctx->pc = 0x1491D0u;
            goto label_1491d0;
        }
    }
    ctx->pc = 0x149108u;
label_149108:
    // 0x149108: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x149108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14910c: 0x8e0d0008  lw          $t5, 0x8($s0)
    ctx->pc = 0x14910cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x149110: 0x8e0c0018  lw          $t4, 0x18($s0)
    ctx->pc = 0x149110u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x149114: 0x8eab0008  lw          $t3, 0x8($s5)
    ctx->pc = 0x149114u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x149118: 0x1860002d  blez        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x149118u;
    {
        const bool branch_taken_0x149118 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x14911Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149118u;
            // 0x14911c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149118) {
            ctx->pc = 0x1491D0u;
            goto label_1491d0;
        }
    }
    ctx->pc = 0x149120u;
    // 0x149120: 0x144100  sll         $t0, $s4, 4
    ctx->pc = 0x149120u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x149124: 0x0  nop
    ctx->pc = 0x149124u;
    // NOP
label_149128:
    // 0x149128: 0x8da30010  lw          $v1, 0x10($t5)
    ctx->pc = 0x149128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x14912c: 0x8fa9013c  lw          $t1, 0x13C($sp)
    ctx->pc = 0x14912cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x149130: 0x25a40030  addiu       $a0, $t5, 0x30
    ctx->pc = 0x149130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 48));
    // 0x149134: 0x25850030  addiu       $a1, $t4, 0x30
    ctx->pc = 0x149134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 48));
    // 0x149138: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x149138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14913c: 0xc05235c  jal         func_148D70
    ctx->pc = 0x14913Cu;
    SET_GPR_U32(ctx, 31, 0x149144u);
    ctx->pc = 0x149140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14913Cu;
            // 0x149140: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148D70u;
    if (runtime->hasFunction(0x148D70u)) {
        auto targetFn = runtime->lookupFunction(0x148D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149144u; }
        if (ctx->pc != 0x149144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00148D70_0x148d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149144u; }
        if (ctx->pc != 0x149144u) { return; }
    }
    ctx->pc = 0x149144u;
label_149144:
    // 0x149144: 0x2832018  mult        $a0, $s4, $v1
    ctx->pc = 0x149144u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x149148: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x149148u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x14914c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14914cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x149150: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x149150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x149154: 0x1635821  addu        $t3, $t3, $v1
    ctx->pc = 0x149154u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x149158: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x149158u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x14915c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x14915cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x149160: 0x1a46821  addu        $t5, $t5, $a0
    ctx->pc = 0x149160u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x149164: 0x143182a  slt         $v1, $t2, $v1
    ctx->pc = 0x149164u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x149168: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x149168u;
    {
        const bool branch_taken_0x149168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14916Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149168u;
            // 0x14916c: 0x1846021  addu        $t4, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149168) {
            ctx->pc = 0x149128u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_149128;
        }
    }
    ctx->pc = 0x149170u;
    // 0x149170: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x149170u;
    {
        const bool branch_taken_0x149170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x149170) {
            ctx->pc = 0x1491D0u;
            goto label_1491d0;
        }
    }
    ctx->pc = 0x149178u;
label_149178:
    // 0x149178: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x149178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14917c: 0x8e0a0008  lw          $t2, 0x8($s0)
    ctx->pc = 0x14917cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x149180: 0x8ea90008  lw          $t1, 0x8($s5)
    ctx->pc = 0x149180u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x149184: 0x18800012  blez        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x149184u;
    {
        const bool branch_taken_0x149184 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x149188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149184u;
            // 0x149188: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149184) {
            ctx->pc = 0x1491D0u;
            goto label_1491d0;
        }
    }
    ctx->pc = 0x14918Cu;
    // 0x14918c: 0x143900  sll         $a3, $s4, 4
    ctx->pc = 0x14918cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_149190:
    // 0x149190: 0x8d4b0010  lw          $t3, 0x10($t2)
    ctx->pc = 0x149190u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x149194: 0x8fa8013c  lw          $t0, 0x13C($sp)
    ctx->pc = 0x149194u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x149198: 0x25440030  addiu       $a0, $t2, 0x30
    ctx->pc = 0x149198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 48));
    // 0x14919c: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x14919cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1491a0: 0xc05236c  jal         func_148DB0
    ctx->pc = 0x1491A0u;
    SET_GPR_U32(ctx, 31, 0x1491A8u);
    ctx->pc = 0x1491A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1491A0u;
            // 0x1491a4: 0x160302d  daddu       $a2, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148DB0u;
    if (runtime->hasFunction(0x148DB0u)) {
        auto targetFn = runtime->lookupFunction(0x148DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1491A8u; }
        if (ctx->pc != 0x1491A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00148DB0_0x148db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1491A8u; }
        if (ctx->pc != 0x1491A8u) { return; }
    }
    ctx->pc = 0x1491A8u;
label_1491a8:
    // 0x1491a8: 0x28b2818  mult        $a1, $s4, $t3
    ctx->pc = 0x1491a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1491ac: 0xb2100  sll         $a0, $t3, 4
    ctx->pc = 0x1491acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x1491b0: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x1491b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1491b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1491b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1491b8: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1491b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1491bc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1491bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1491c0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1491c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1491c4: 0x64202a  slt         $a0, $v1, $a0
    ctx->pc = 0x1491c4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1491c8: 0x1480fff1  bnez        $a0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1491C8u;
    {
        const bool branch_taken_0x1491c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1491CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1491C8u;
            // 0x1491cc: 0x1455021  addu        $t2, $t2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1491c8) {
            ctx->pc = 0x149190u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_149190;
        }
    }
    ctx->pc = 0x1491D0u;
label_1491d0:
    // 0x1491d0: 0x12c0003f  beqz        $s6, . + 4 + (0x3F << 2)
    ctx->pc = 0x1491D0u;
    {
        const bool branch_taken_0x1491d0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1491d0) {
            ctx->pc = 0x1492D0u;
            goto label_1492d0;
        }
    }
    ctx->pc = 0x1491D8u;
    // 0x1491d8: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x1491d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1491dc: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1491dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1491e0: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1491E0u;
    {
        const bool branch_taken_0x1491e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1491e0) {
            ctx->pc = 0x149278u;
            goto label_149278;
        }
    }
    ctx->pc = 0x1491E8u;
    // 0x1491e8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1491e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1491ec: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1491ECu;
    {
        const bool branch_taken_0x1491ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1491ec) {
            ctx->pc = 0x149208u;
            goto label_149208;
        }
    }
    ctx->pc = 0x1491F4u;
    // 0x1491f4: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1491F4u;
    {
        const bool branch_taken_0x1491f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1491f4) {
            ctx->pc = 0x1492D0u;
            goto label_1492d0;
        }
    }
    ctx->pc = 0x1491FCu;
    // 0x1491fc: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1491FCu;
    {
        const bool branch_taken_0x1491fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1491fc) {
            ctx->pc = 0x1492D0u;
            goto label_1492d0;
        }
    }
    ctx->pc = 0x149204u;
    // 0x149204: 0x0  nop
    ctx->pc = 0x149204u;
    // NOP
label_149208:
    // 0x149208: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x149208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14920c: 0x8e0d0008  lw          $t5, 0x8($s0)
    ctx->pc = 0x14920cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x149210: 0x8e0c0018  lw          $t4, 0x18($s0)
    ctx->pc = 0x149210u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x149214: 0x8eab0010  lw          $t3, 0x10($s5)
    ctx->pc = 0x149214u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x149218: 0x1860002d  blez        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x149218u;
    {
        const bool branch_taken_0x149218 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x14921Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149218u;
            // 0x14921c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149218) {
            ctx->pc = 0x1492D0u;
            goto label_1492d0;
        }
    }
    ctx->pc = 0x149220u;
    // 0x149220: 0x144100  sll         $t0, $s4, 4
    ctx->pc = 0x149220u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x149224: 0x0  nop
    ctx->pc = 0x149224u;
    // NOP
label_149228:
    // 0x149228: 0x8da30010  lw          $v1, 0x10($t5)
    ctx->pc = 0x149228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x14922c: 0x8fa9013c  lw          $t1, 0x13C($sp)
    ctx->pc = 0x14922cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x149230: 0x25a40040  addiu       $a0, $t5, 0x40
    ctx->pc = 0x149230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 64));
    // 0x149234: 0x25850040  addiu       $a1, $t4, 0x40
    ctx->pc = 0x149234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 64));
    // 0x149238: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x149238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14923c: 0xc05235c  jal         func_148D70
    ctx->pc = 0x14923Cu;
    SET_GPR_U32(ctx, 31, 0x149244u);
    ctx->pc = 0x149240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14923Cu;
            // 0x149240: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148D70u;
    if (runtime->hasFunction(0x148D70u)) {
        auto targetFn = runtime->lookupFunction(0x148D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149244u; }
        if (ctx->pc != 0x149244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00148D70_0x148d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149244u; }
        if (ctx->pc != 0x149244u) { return; }
    }
    ctx->pc = 0x149244u;
label_149244:
    // 0x149244: 0x2832018  mult        $a0, $s4, $v1
    ctx->pc = 0x149244u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x149248: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x149248u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x14924c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14924cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x149250: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x149250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x149254: 0x1635821  addu        $t3, $t3, $v1
    ctx->pc = 0x149254u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x149258: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x149258u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x14925c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x14925cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x149260: 0x1a46821  addu        $t5, $t5, $a0
    ctx->pc = 0x149260u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x149264: 0x143182a  slt         $v1, $t2, $v1
    ctx->pc = 0x149264u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x149268: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x149268u;
    {
        const bool branch_taken_0x149268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14926Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149268u;
            // 0x14926c: 0x1846021  addu        $t4, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149268) {
            ctx->pc = 0x149228u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_149228;
        }
    }
    ctx->pc = 0x149270u;
    // 0x149270: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x149270u;
    {
        const bool branch_taken_0x149270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x149270) {
            ctx->pc = 0x1492D0u;
            goto label_1492d0;
        }
    }
    ctx->pc = 0x149278u;
label_149278:
    // 0x149278: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x149278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14927c: 0x8e0a0008  lw          $t2, 0x8($s0)
    ctx->pc = 0x14927cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x149280: 0x8ea90010  lw          $t1, 0x10($s5)
    ctx->pc = 0x149280u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x149284: 0x18800012  blez        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x149284u;
    {
        const bool branch_taken_0x149284 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x149288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149284u;
            // 0x149288: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149284) {
            ctx->pc = 0x1492D0u;
            goto label_1492d0;
        }
    }
    ctx->pc = 0x14928Cu;
    // 0x14928c: 0x143900  sll         $a3, $s4, 4
    ctx->pc = 0x14928cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_149290:
    // 0x149290: 0x8d4b0010  lw          $t3, 0x10($t2)
    ctx->pc = 0x149290u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x149294: 0x8fa8013c  lw          $t0, 0x13C($sp)
    ctx->pc = 0x149294u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x149298: 0x25440040  addiu       $a0, $t2, 0x40
    ctx->pc = 0x149298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 64));
    // 0x14929c: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x14929cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1492a0: 0xc05236c  jal         func_148DB0
    ctx->pc = 0x1492A0u;
    SET_GPR_U32(ctx, 31, 0x1492A8u);
    ctx->pc = 0x1492A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1492A0u;
            // 0x1492a4: 0x160302d  daddu       $a2, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148DB0u;
    if (runtime->hasFunction(0x148DB0u)) {
        auto targetFn = runtime->lookupFunction(0x148DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1492A8u; }
        if (ctx->pc != 0x1492A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00148DB0_0x148db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1492A8u; }
        if (ctx->pc != 0x1492A8u) { return; }
    }
    ctx->pc = 0x1492A8u;
label_1492a8:
    // 0x1492a8: 0x28b2818  mult        $a1, $s4, $t3
    ctx->pc = 0x1492a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1492ac: 0xb2100  sll         $a0, $t3, 4
    ctx->pc = 0x1492acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x1492b0: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x1492b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1492b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1492b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1492b8: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1492b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1492bc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1492bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1492c0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1492c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1492c4: 0x64202a  slt         $a0, $v1, $a0
    ctx->pc = 0x1492c4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1492c8: 0x1480fff1  bnez        $a0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1492C8u;
    {
        const bool branch_taken_0x1492c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1492CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1492C8u;
            // 0x1492cc: 0x1455021  addu        $t2, $t2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1492c8) {
            ctx->pc = 0x149290u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_149290;
        }
    }
    ctx->pc = 0x1492D0u;
label_1492d0:
    // 0x1492d0: 0x12e00029  beqz        $s7, . + 4 + (0x29 << 2)
    ctx->pc = 0x1492D0u;
    {
        const bool branch_taken_0x1492d0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1492d0) {
            ctx->pc = 0x149378u;
            goto label_149378;
        }
    }
    ctx->pc = 0x1492D8u;
    // 0x1492d8: 0x8ea40014  lw          $a0, 0x14($s5)
    ctx->pc = 0x1492d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x1492dc: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x1492dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1492e0: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1492E0u;
    {
        const bool branch_taken_0x1492e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1492e0) {
            ctx->pc = 0x149308u;
            goto label_149308;
        }
    }
    ctx->pc = 0x1492E8u;
    // 0x1492e8: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1492e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1492ec: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1492ECu;
    {
        const bool branch_taken_0x1492ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1492ec) {
            ctx->pc = 0x149378u;
            goto label_149378;
        }
    }
    ctx->pc = 0x1492F4u;
    // 0x1492f4: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1492F4u;
    {
        const bool branch_taken_0x1492f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1492f4) {
            ctx->pc = 0x149378u;
            goto label_149378;
        }
    }
    ctx->pc = 0x1492FCu;
    // 0x1492fc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1492FCu;
    {
        const bool branch_taken_0x1492fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1492fc) {
            ctx->pc = 0x149378u;
            goto label_149378;
        }
    }
    ctx->pc = 0x149304u;
    // 0x149304: 0x0  nop
    ctx->pc = 0x149304u;
    // NOP
label_149308:
    // 0x149308: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x149308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14930c: 0x8e0f0008  lw          $t7, 0x8($s0)
    ctx->pc = 0x14930cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x149310: 0x8e0e0018  lw          $t6, 0x18($s0)
    ctx->pc = 0x149310u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x149314: 0x8eb30018  lw          $s3, 0x18($s5)
    ctx->pc = 0x149314u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x149318: 0x18600017  blez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x149318u;
    {
        const bool branch_taken_0x149318 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x14931Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149318u;
            // 0x14931c: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149318) {
            ctx->pc = 0x149378u;
            goto label_149378;
        }
    }
    ctx->pc = 0x149320u;
    // 0x149320: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x149320u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x149324: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x149324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_149328:
    // 0x149328: 0x8dec0010  lw          $t4, 0x10($t7)
    ctx->pc = 0x149328u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 16)));
    // 0x14932c: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x14932cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x149330: 0x25e40040  addiu       $a0, $t7, 0x40
    ctx->pc = 0x149330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 64));
    // 0x149334: 0x8fa9013c  lw          $t1, 0x13C($sp)
    ctx->pc = 0x149334u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x149338: 0x25c50040  addiu       $a1, $t6, 0x40
    ctx->pc = 0x149338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 64));
    // 0x14933c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x14933cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149340: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x149340u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149344: 0xc05237c  jal         func_148DF0
    ctx->pc = 0x149344u;
    SET_GPR_U32(ctx, 31, 0x14934Cu);
    ctx->pc = 0x149348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149344u;
            // 0x149348: 0x27aa0120  addiu       $t2, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148DF0u;
    if (runtime->hasFunction(0x148DF0u)) {
        auto targetFn = runtime->lookupFunction(0x148DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14934Cu; }
        if (ctx->pc != 0x14934Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00148DF0_0x148df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14934Cu; }
        if (ctx->pc != 0x14934Cu) { return; }
    }
    ctx->pc = 0x14934Cu;
label_14934c:
    // 0x14934c: 0x28c2018  mult        $a0, $s4, $t4
    ctx->pc = 0x14934cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x149350: 0xc1880  sll         $v1, $t4, 2
    ctx->pc = 0x149350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x149354: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x149354u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x149358: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x149358u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x14935c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x14935cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x149360: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x149360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x149364: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x149364u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x149368: 0x1a3182a  slt         $v1, $t5, $v1
    ctx->pc = 0x149368u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14936c: 0x1e47821  addu        $t7, $t7, $a0
    ctx->pc = 0x14936cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x149370: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x149370u;
    {
        const bool branch_taken_0x149370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x149374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149370u;
            // 0x149374: 0x1c47021  addu        $t6, $t6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149370) {
            ctx->pc = 0x149328u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_149328;
        }
    }
    ctx->pc = 0x149378u;
label_149378:
    // 0x149378: 0x13c0009d  beqz        $fp, . + 4 + (0x9D << 2)
    ctx->pc = 0x149378u;
    {
        const bool branch_taken_0x149378 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x149378) {
            ctx->pc = 0x1495F0u;
            goto label_1495f0;
        }
    }
    ctx->pc = 0x149380u;
    // 0x149380: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x149380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x149384: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x149384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x149388: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x149388u;
    {
        const bool branch_taken_0x149388 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x149388) {
            ctx->pc = 0x1493B0u;
            goto label_1493b0;
        }
    }
    ctx->pc = 0x149390u;
    // 0x149390: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x149390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x149394: 0x10830096  beq         $a0, $v1, . + 4 + (0x96 << 2)
    ctx->pc = 0x149394u;
    {
        const bool branch_taken_0x149394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x149394) {
            ctx->pc = 0x1495F0u;
            goto label_1495f0;
        }
    }
    ctx->pc = 0x14939Cu;
    // 0x14939c: 0x10800094  beqz        $a0, . + 4 + (0x94 << 2)
    ctx->pc = 0x14939Cu;
    {
        const bool branch_taken_0x14939c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14939c) {
            ctx->pc = 0x1495F0u;
            goto label_1495f0;
        }
    }
    ctx->pc = 0x1493A4u;
    // 0x1493a4: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x1493A4u;
    {
        const bool branch_taken_0x1493a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1493a4) {
            ctx->pc = 0x1495F0u;
            goto label_1495f0;
        }
    }
    ctx->pc = 0x1493ACu;
    // 0x1493ac: 0x0  nop
    ctx->pc = 0x1493acu;
    // NOP
label_1493b0:
    // 0x1493b0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1493b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1493b4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1493b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1493b8: 0x8eb30020  lw          $s3, 0x20($s5)
    ctx->pc = 0x1493b8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1493bc: 0x1860008c  blez        $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x1493BCu;
    {
        const bool branch_taken_0x1493bc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1493C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1493BCu;
            // 0x1493c0: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1493bc) {
            ctx->pc = 0x1495F0u;
            goto label_1495f0;
        }
    }
    ctx->pc = 0x1493C4u;
    // 0x1493c4: 0xc7a1013c  lwc1        $f1, 0x13C($sp)
    ctx->pc = 0x1493c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1493c8: 0x146900  sll         $t5, $s4, 4
    ctx->pc = 0x1493c8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1493cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1493ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1493d0:
    // 0x1493d0: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x1493d0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1493d4: 0x248e0050  addiu       $t6, $a0, 0x50
    ctx->pc = 0x1493d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x1493d8: 0x1980007f  blez        $t4, . + 4 + (0x7F << 2)
    ctx->pc = 0x1493D8u;
    {
        const bool branch_taken_0x1493d8 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x1493DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1493D8u;
            // 0x1493dc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1493d8) {
            ctx->pc = 0x1495D8u;
            goto label_1495d8;
        }
    }
    ctx->pc = 0x1493E0u;
    // 0x1493e0: 0x29810009  slti        $at, $t4, 0x9
    ctx->pc = 0x1493e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1493e4: 0x14200068  bnez        $at, . + 4 + (0x68 << 2)
    ctx->pc = 0x1493E4u;
    {
        const bool branch_taken_0x1493e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1493E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1493E4u;
            // 0x1493e8: 0x258bfff8  addiu       $t3, $t4, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1493e4) {
            ctx->pc = 0x149588u;
            goto label_149588;
        }
    }
    ctx->pc = 0x1493ECu;
    // 0x1493ec: 0x5800008  bltz        $t4, . + 4 + (0x8 << 2)
    ctx->pc = 0x1493ECu;
    {
        const bool branch_taken_0x1493ec = (GPR_S32(ctx, 12) < 0);
        ctx->pc = 0x1493F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1493ECu;
            // 0x1493f0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1493ec) {
            ctx->pc = 0x149410u;
            goto label_149410;
        }
    }
    ctx->pc = 0x1493F4u;
    // 0x1493f4: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x1493f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x1493f8: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x1493f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x1493fc: 0x181082a  slt         $at, $t4, $at
    ctx->pc = 0x1493fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x149400: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x149400u;
    {
        const bool branch_taken_0x149400 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x149400) {
            ctx->pc = 0x149410u;
            goto label_149410;
        }
    }
    ctx->pc = 0x149408u;
    // 0x149408: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x149408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14940c: 0x0  nop
    ctx->pc = 0x14940cu;
    // NOP
label_149410:
    // 0x149410: 0x1060005d  beqz        $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x149410u;
    {
        const bool branch_taken_0x149410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x149410) {
            ctx->pc = 0x149588u;
            goto label_149588;
        }
    }
    ctx->pc = 0x149418u;
label_149418:
    // 0x149418: 0x1cd5021  addu        $t2, $t6, $t5
    ctx->pc = 0x149418u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x14941c: 0xc5c20000  lwc1        $f2, 0x0($t6)
    ctx->pc = 0x14941cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x149420: 0x14d4821  addu        $t1, $t2, $t5
    ctx->pc = 0x149420u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
    // 0x149424: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x149424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x149428: 0x12d4021  addu        $t0, $t1, $t5
    ctx->pc = 0x149428u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x14942c: 0x10d3821  addu        $a3, $t0, $t5
    ctx->pc = 0x14942cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x149430: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x149430u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x149434: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x149434u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x149438: 0xed3021  addu        $a2, $a3, $t5
    ctx->pc = 0x149438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x14943c: 0x4601189c  madd.s      $f2, $f3, $f1
    ctx->pc = 0x14943cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x149440: 0xcd2821  addu        $a1, $a2, $t5
    ctx->pc = 0x149440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x149444: 0xe5c20000  swc1        $f2, 0x0($t6)
    ctx->pc = 0x149444u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x149448: 0xad2021  addu        $a0, $a1, $t5
    ctx->pc = 0x149448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x14944c: 0xc5c20004  lwc1        $f2, 0x4($t6)
    ctx->pc = 0x14944cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x149450: 0x28b182a  slt         $v1, $s4, $t3
    ctx->pc = 0x149450u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x149454: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x149454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x149458: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x149458u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x14945c: 0x4601189c  madd.s      $f2, $f3, $f1
    ctx->pc = 0x14945cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x149460: 0xe5c20004  swc1        $f2, 0x4($t6)
    ctx->pc = 0x149460u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
    // 0x149464: 0xc5420000  lwc1        $f2, 0x0($t2)
    ctx->pc = 0x149464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x149468: 0x8d7021  addu        $t6, $a0, $t5
    ctx->pc = 0x149468u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x14946c: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x14946cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x149470: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x149470u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x149474: 0x4601189c  madd.s      $f2, $f3, $f1
    ctx->pc = 0x149474u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x149478: 0xe5420000  swc1        $f2, 0x0($t2)
    ctx->pc = 0x149478u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x14947c: 0xc5420004  lwc1        $f2, 0x4($t2)
    ctx->pc = 0x14947cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x149480: 0xc663000c  lwc1        $f3, 0xC($s3)
    ctx->pc = 0x149480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x149484: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x149484u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x149488: 0x4601189c  madd.s      $f2, $f3, $f1
    ctx->pc = 0x149488u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x14948c: 0xe5420004  swc1        $f2, 0x4($t2)
    ctx->pc = 0x14948cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x149490: 0xc5220000  lwc1        $f2, 0x0($t1)
    ctx->pc = 0x149490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x149494: 0xc6630010  lwc1        $f3, 0x10($s3)
    ctx->pc = 0x149494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x149498: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x149498u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x14949c: 0x4601189c  madd.s      $f2, $f3, $f1
    ctx->pc = 0x14949cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x1494a0: 0xe5220000  swc1        $f2, 0x0($t1)
    ctx->pc = 0x1494a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x1494a4: 0xc5220004  lwc1        $f2, 0x4($t1)
    ctx->pc = 0x1494a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1494a8: 0xc6630014  lwc1        $f3, 0x14($s3)
    ctx->pc = 0x1494a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1494ac: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x1494acu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1494b0: 0x4601189c  madd.s      $f2, $f3, $f1
    ctx->pc = 0x1494b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x1494b4: 0xe5220004  swc1        $f2, 0x4($t1)
    ctx->pc = 0x1494b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x1494b8: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x1494b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1494bc: 0xc6630018  lwc1        $f3, 0x18($s3)
    ctx->pc = 0x1494bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1494c0: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x1494c0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1494c4: 0x4601189c  madd.s      $f2, $f3, $f1
    ctx->pc = 0x1494c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x1494c8: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x1494c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x1494cc: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x1494ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1494d0: 0xc663001c  lwc1        $f3, 0x1C($s3)
    ctx->pc = 0x1494d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1494d4: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x1494d4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1494d8: 0x4601189c  madd.s      $f2, $f3, $f1
    ctx->pc = 0x1494d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x1494dc: 0xe5020004  swc1        $f2, 0x4($t0)
    ctx->pc = 0x1494dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x1494e0: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x1494e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1494e4: 0xc6630020  lwc1        $f3, 0x20($s3)
    ctx->pc = 0x1494e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1494e8: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x1494e8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1494ec: 0x4601189c  madd.s      $f2, $f3, $f1
    ctx->pc = 0x1494ecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x1494f0: 0xe4e20000  swc1        $f2, 0x0($a3)
    ctx->pc = 0x1494f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x1494f4: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x1494f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1494f8: 0xc6630024  lwc1        $f3, 0x24($s3)
    ctx->pc = 0x1494f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1494fc: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x1494fcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x149500: 0x4601189c  madd.s      $f2, $f3, $f1
    ctx->pc = 0x149500u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x149504: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x149504u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x149508: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x149508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14950c: 0xc6630028  lwc1        $f3, 0x28($s3)
    ctx->pc = 0x14950cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x149510: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x149510u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x149514: 0x4601189c  madd.s      $f2, $f3, $f1
    ctx->pc = 0x149514u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x149518: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x149518u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x14951c: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x14951cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x149520: 0xc663002c  lwc1        $f3, 0x2C($s3)
    ctx->pc = 0x149520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x149524: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x149524u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x149528: 0x4601189c  madd.s      $f2, $f3, $f1
    ctx->pc = 0x149528u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x14952c: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x14952cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x149530: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x149530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x149534: 0xc6630030  lwc1        $f3, 0x30($s3)
    ctx->pc = 0x149534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x149538: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x149538u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x14953c: 0x4601189c  madd.s      $f2, $f3, $f1
    ctx->pc = 0x14953cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x149540: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x149540u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x149544: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x149544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x149548: 0xc6630034  lwc1        $f3, 0x34($s3)
    ctx->pc = 0x149548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14954c: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x14954cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x149550: 0x4601189c  madd.s      $f2, $f3, $f1
    ctx->pc = 0x149550u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x149554: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x149554u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x149558: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x149558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14955c: 0xc6630038  lwc1        $f3, 0x38($s3)
    ctx->pc = 0x14955cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x149560: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x149560u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x149564: 0x4601189c  madd.s      $f2, $f3, $f1
    ctx->pc = 0x149564u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x149568: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x149568u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x14956c: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x14956cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x149570: 0xc663003c  lwc1        $f3, 0x3C($s3)
    ctx->pc = 0x149570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x149574: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x149574u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x149578: 0x4601189c  madd.s      $f2, $f3, $f1
    ctx->pc = 0x149578u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x14957c: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x14957cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x149580: 0x1460ffa5  bnez        $v1, . + 4 + (-0x5B << 2)
    ctx->pc = 0x149580u;
    {
        const bool branch_taken_0x149580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x149584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149580u;
            // 0x149584: 0xe4820004  swc1        $f2, 0x4($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x149580) {
            ctx->pc = 0x149418u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_149418;
        }
    }
    ctx->pc = 0x149588u;
label_149588:
    // 0x149588: 0x28c082a  slt         $at, $s4, $t4
    ctx->pc = 0x149588u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x14958c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x14958Cu;
    {
        const bool branch_taken_0x14958c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14958c) {
            ctx->pc = 0x1495D8u;
            goto label_1495d8;
        }
    }
    ctx->pc = 0x149594u;
    // 0x149594: 0x0  nop
    ctx->pc = 0x149594u;
    // NOP
label_149598:
    // 0x149598: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x149598u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x14959c: 0xc5c20000  lwc1        $f2, 0x0($t6)
    ctx->pc = 0x14959cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1495a0: 0x28c182a  slt         $v1, $s4, $t4
    ctx->pc = 0x1495a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x1495a4: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x1495a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1495a8: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x1495a8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1495ac: 0x4601189c  madd.s      $f2, $f3, $f1
    ctx->pc = 0x1495acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x1495b0: 0xe5c20000  swc1        $f2, 0x0($t6)
    ctx->pc = 0x1495b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x1495b4: 0xc5c20004  lwc1        $f2, 0x4($t6)
    ctx->pc = 0x1495b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1495b8: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x1495b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1495bc: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x1495bcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1495c0: 0x4601189c  madd.s      $f2, $f3, $f1
    ctx->pc = 0x1495c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x1495c4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1495c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1495c8: 0xe5c20004  swc1        $f2, 0x4($t6)
    ctx->pc = 0x1495c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
    // 0x1495cc: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1495CCu;
    {
        const bool branch_taken_0x1495cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1495D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1495CCu;
            // 0x1495d0: 0x1cd7021  addu        $t6, $t6, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1495cc) {
            ctx->pc = 0x149598u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_149598;
        }
    }
    ctx->pc = 0x1495D4u;
    // 0x1495d4: 0x0  nop
    ctx->pc = 0x1495d4u;
    // NOP
label_1495d8:
    // 0x1495d8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1495d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1495dc: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1495dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1495e0: 0x1e3182a  slt         $v1, $t7, $v1
    ctx->pc = 0x1495e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1495e4: 0x1460ff7a  bnez        $v1, . + 4 + (-0x86 << 2)
    ctx->pc = 0x1495E4u;
    {
        const bool branch_taken_0x1495e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1495E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1495E4u;
            // 0x1495e8: 0x25c4fff0  addiu       $a0, $t6, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1495e4) {
            ctx->pc = 0x1493D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1493d0;
        }
    }
    ctx->pc = 0x1495ECu;
    // 0x1495ec: 0x0  nop
    ctx->pc = 0x1495ecu;
    // NOP
label_1495f0:
    // 0x1495f0: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x1495f0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x1495f4: 0x311182a  slt         $v1, $t8, $s1
    ctx->pc = 0x1495f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1495f8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1495f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1495fc: 0x1460fe84  bnez        $v1, . + 4 + (-0x17C << 2)
    ctx->pc = 0x1495FCu;
    {
        const bool branch_taken_0x1495fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x149600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1495FCu;
            // 0x149600: 0x27390008  addiu       $t9, $t9, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1495fc) {
            ctx->pc = 0x149010u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_149010;
        }
    }
    ctx->pc = 0x149604u;
    // 0x149604: 0x0  nop
    ctx->pc = 0x149604u;
    // NOP
label_149608:
    // 0x149608: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x149608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x14960c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x14960cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x149610: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x149610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x149614: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x149614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x149618: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x149618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x14961c: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x14961cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x149620: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x149620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x149624: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x149624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x149628: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x149628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x14962c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x14962cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149630: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x149630u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x149634: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x149634u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x149638: 0x5460fe58  bnel        $v1, $zero, . + 4 + (-0x1A8 << 2)
    ctx->pc = 0x149638u;
    {
        const bool branch_taken_0x149638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x149638) {
            ctx->pc = 0x14963Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x149638u;
            // 0x14963c: 0x8fa300f0  lw          $v1, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x148F9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_148f9c;
        }
    }
    ctx->pc = 0x149640u;
label_149640:
    // 0x149640: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x149640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x149644: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x149644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x149648: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x149648u;
    {
        const bool branch_taken_0x149648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x149648) {
            ctx->pc = 0x14964Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x149648u;
            // 0x14964c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14965Cu;
            goto label_14965c;
        }
    }
    ctx->pc = 0x149650u;
    // 0x149650: 0xc051c4c  jal         func_147130
    ctx->pc = 0x149650u;
    SET_GPR_U32(ctx, 31, 0x149658u);
    ctx->pc = 0x149654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149650u;
            // 0x149654: 0x8fa4011c  lw          $a0, 0x11C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x147130u;
    if (runtime->hasFunction(0x147130u)) {
        auto targetFn = runtime->lookupFunction(0x147130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149658u; }
        if (ctx->pc != 0x149658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00147130_0x147130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149658u; }
        if (ctx->pc != 0x149658u) { return; }
    }
    ctx->pc = 0x149658u;
label_149658:
    // 0x149658: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x149658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_14965c:
    // 0x14965c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x14965cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x149660: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x149660u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x149664: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x149664u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x149668: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x149668u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14966c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14966cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x149670: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x149670u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x149674: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x149674u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149678: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x149678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14967c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14967cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149680: 0x3e00008  jr          $ra
    ctx->pc = 0x149680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149680u;
            // 0x149684: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x149688u;
    // 0x149688: 0x0  nop
    ctx->pc = 0x149688u;
    // NOP
    // 0x14968c: 0x0  nop
    ctx->pc = 0x14968cu;
    // NOP
}
