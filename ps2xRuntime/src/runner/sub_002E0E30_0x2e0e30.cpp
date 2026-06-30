#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E0E30
// Address: 0x2e0e30 - 0x2e1270
void sub_002E0E30_0x2e0e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0E30_0x2e0e30");
#endif

    switch (ctx->pc) {
        case 0x2e0ea4u: goto label_2e0ea4;
        case 0x2e0ec8u: goto label_2e0ec8;
        case 0x2e0ee0u: goto label_2e0ee0;
        case 0x2e0ef8u: goto label_2e0ef8;
        case 0x2e0f1cu: goto label_2e0f1c;
        case 0x2e0f40u: goto label_2e0f40;
        case 0x2e0f4cu: goto label_2e0f4c;
        case 0x2e0f64u: goto label_2e0f64;
        case 0x2e0f9cu: goto label_2e0f9c;
        case 0x2e0fd8u: goto label_2e0fd8;
        case 0x2e0fe4u: goto label_2e0fe4;
        case 0x2e1010u: goto label_2e1010;
        case 0x2e101cu: goto label_2e101c;
        case 0x2e1034u: goto label_2e1034;
        case 0x2e1064u: goto label_2e1064;
        case 0x2e1080u: goto label_2e1080;
        case 0x2e10d0u: goto label_2e10d0;
        case 0x2e10dcu: goto label_2e10dc;
        case 0x2e10e8u: goto label_2e10e8;
        case 0x2e1190u: goto label_2e1190;
        case 0x2e11acu: goto label_2e11ac;
        case 0x2e11f0u: goto label_2e11f0;
        case 0x2e11f8u: goto label_2e11f8;
        case 0x2e1214u: goto label_2e1214;
        default: break;
    }

    ctx->pc = 0x2e0e30u;

    // 0x2e0e30: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2e0e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x2e0e34: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2e0e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2e0e38: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2e0e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2e0e3c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2e0e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2e0e40: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2e0e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2e0e44: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2e0e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2e0e48: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2e0e48u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0e4c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2e0e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2e0e50: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e0e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e0e54: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2e0e54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0e58: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e0e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e0e5c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2e0e5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0e60: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e0e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e0e64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e0e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e0e68: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2e0e68u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2e0e6c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e0e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0e70: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2e0e70u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e0e74: 0xafa70100  sw          $a3, 0x100($sp)
    ctx->pc = 0x2e0e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 7));
    // 0x2e0e78: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2e0e78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e0e7c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2e0e7cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2e0e80: 0x120000ec  beqz        $s0, . + 4 + (0xEC << 2)
    ctx->pc = 0x2E0E80u;
    {
        const bool branch_taken_0x2e0e80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0E80u;
            // 0x2e0e84: 0xa4800056  sh          $zero, 0x56($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 86), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0e80) {
            ctx->pc = 0x2E1234u;
            goto label_2e1234;
        }
    }
    ctx->pc = 0x2E0E88u;
    // 0x2e0e88: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x2e0e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x2e0e8c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e0e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e0e90: 0x346323f0  ori         $v1, $v1, 0x23F0
    ctx->pc = 0x2e0e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9200);
    // 0x2e0e94: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2e0e94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e0e98: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e0e98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e0e9c: 0xc04781c  jal         func_11E070
    ctx->pc = 0x2E0E9Cu;
    SET_GPR_U32(ctx, 31, 0x2E0EA4u);
    ctx->pc = 0x11E070u;
    if (runtime->hasFunction(0x11E070u)) {
        auto targetFn = runtime->lookupFunction(0x11E070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0EA4u; }
        if (ctx->pc != 0x2E0EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E070_0x11e070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0EA4u; }
        if (ctx->pc != 0x2E0EA4u) { return; }
    }
    ctx->pc = 0x2E0EA4u;
label_2e0ea4:
    // 0x2e0ea4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e0ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e0ea8: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x2e0ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x2e0eac: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x2e0eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x2e0eb0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e0eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e0eb4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e0eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e0eb8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2e0eb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e0ebc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e0ebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e0ec0: 0xc04781c  jal         func_11E070
    ctx->pc = 0x2E0EC0u;
    SET_GPR_U32(ctx, 31, 0x2E0EC8u);
    ctx->pc = 0x2E0EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0EC0u;
            // 0x2e0ec4: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E070u;
    if (runtime->hasFunction(0x11E070u)) {
        auto targetFn = runtime->lookupFunction(0x11E070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0EC8u; }
        if (ctx->pc != 0x2E0EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E070_0x11e070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0EC8u; }
        if (ctx->pc != 0x2E0EC8u) { return; }
    }
    ctx->pc = 0x2E0EC8u;
label_2e0ec8:
    // 0x2e0ec8: 0x86820054  lh          $v0, 0x54($s4)
    ctx->pc = 0x2e0ec8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x2e0ecc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2e0eccu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2e0ed0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2e0ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2e0ed4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2e0ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0ed8: 0xc04cb1c  jal         func_132C70
    ctx->pc = 0x2E0ED8u;
    SET_GPR_U32(ctx, 31, 0x2E0EE0u);
    ctx->pc = 0x2E0EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0ED8u;
            // 0x2e0edc: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0EE0u; }
        if (ctx->pc != 0x2E0EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0EE0u; }
        if (ctx->pc != 0x2E0EE0u) { return; }
    }
    ctx->pc = 0x2E0EE0u;
label_2e0ee0:
    // 0x2e0ee0: 0xe7b4012c  swc1        $f20, 0x12C($sp)
    ctx->pc = 0x2e0ee0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x2e0ee4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2e0ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2e0ee8: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x2e0ee8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e0eec: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2e0eecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2e0ef0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2e0ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2e0ef4: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x2e0ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_2e0ef8:
    // 0x2e0ef8: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x2e0ef8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e0efc: 0x10710096  beq         $v1, $s1, . + 4 + (0x96 << 2)
    ctx->pc = 0x2E0EFCu;
    {
        const bool branch_taken_0x2e0efc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x2e0efc) {
            ctx->pc = 0x2E1158u;
            goto label_2e1158;
        }
    }
    ctx->pc = 0x2E0F04u;
    // 0x2e0f04: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2e0f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e0f08: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2e0f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2e0f0c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2e0f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e0f10: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2e0f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2e0f14: 0xc0527c0  jal         func_149F00
    ctx->pc = 0x2E0F14u;
    SET_GPR_U32(ctx, 31, 0x2E0F1Cu);
    ctx->pc = 0x2E0F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0F14u;
            // 0x2e0f18: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149F00u;
    if (runtime->hasFunction(0x149F00u)) {
        auto targetFn = runtime->lookupFunction(0x149F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0F1Cu; }
        if (ctx->pc != 0x2E0F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149F00_0x149f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0F1Cu; }
        if (ctx->pc != 0x2E0F1Cu) { return; }
    }
    ctx->pc = 0x2E0F1Cu;
label_2e0f1c:
    // 0x2e0f1c: 0x1040008e  beqz        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x2E0F1Cu;
    {
        const bool branch_taken_0x2e0f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0f1c) {
            ctx->pc = 0x2E1158u;
            goto label_2e1158;
        }
    }
    ctx->pc = 0x2E0F24u;
    // 0x2e0f24: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2e0f24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e0f28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e0f28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0f2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e0f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e0f30: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x2e0f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x2e0f34: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2e0f34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e0f38: 0x8c5e0008  lw          $fp, 0x8($v0)
    ctx->pc = 0x2e0f38u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e0f3c: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x2e0f3cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e0f40:
    // 0x2e0f40: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x2e0f40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2e0f44: 0xc05277c  jal         func_149DF0
    ctx->pc = 0x2E0F44u;
    SET_GPR_U32(ctx, 31, 0x2E0F4Cu);
    ctx->pc = 0x2E0F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0F44u;
            // 0x2e0f48: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149DF0u;
    if (runtime->hasFunction(0x149DF0u)) {
        auto targetFn = runtime->lookupFunction(0x149DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0F4Cu; }
        if (ctx->pc != 0x2E0F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149DF0_0x149df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0F4Cu; }
        if (ctx->pc != 0x2E0F4Cu) { return; }
    }
    ctx->pc = 0x2E0F4Cu;
label_2e0f4c:
    // 0x2e0f4c: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x2E0F4Cu;
    {
        const bool branch_taken_0x2e0f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0f4c) {
            ctx->pc = 0x2E1128u;
            goto label_2e1128;
        }
    }
    ctx->pc = 0x2E0F54u;
    // 0x2e0f54: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2e0f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2e0f58: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x2e0f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2e0f5c: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2E0F5Cu;
    SET_GPR_U32(ctx, 31, 0x2E0F64u);
    ctx->pc = 0x2E0F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0F5Cu;
            // 0x2e0f60: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0F64u; }
        if (ctx->pc != 0x2E0F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0F64u; }
        if (ctx->pc != 0x2E0F64u) { return; }
    }
    ctx->pc = 0x2E0F64u;
label_2e0f64:
    // 0x2e0f64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e0f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e0f68: 0x12620021  beq         $s3, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2E0F68u;
    {
        const bool branch_taken_0x2e0f68 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0f68) {
            ctx->pc = 0x2E0FF0u;
            goto label_2e0ff0;
        }
    }
    ctx->pc = 0x2E0F70u;
    // 0x2e0f70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e0f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0f74: 0x1262001e  beq         $s3, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2E0F74u;
    {
        const bool branch_taken_0x2e0f74 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0f74) {
            ctx->pc = 0x2E0FF0u;
            goto label_2e0ff0;
        }
    }
    ctx->pc = 0x2E0F7Cu;
    // 0x2e0f7c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0F7Cu;
    {
        const bool branch_taken_0x2e0f7c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0f7c) {
            ctx->pc = 0x2E0F90u;
            goto label_2e0f90;
        }
    }
    ctx->pc = 0x2E0F84u;
    // 0x2e0f84: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2E0F84u;
    {
        const bool branch_taken_0x2e0f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0f84) {
            ctx->pc = 0x2E1028u;
            goto label_2e1028;
        }
    }
    ctx->pc = 0x2E0F8Cu;
    // 0x2e0f8c: 0x0  nop
    ctx->pc = 0x2e0f8cu;
    // NOP
label_2e0f90:
    // 0x2e0f90: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x2e0f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2e0f94: 0xc04cc08  jal         func_133020
    ctx->pc = 0x2E0F94u;
    SET_GPR_U32(ctx, 31, 0x2E0F9Cu);
    ctx->pc = 0x2E0F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0F94u;
            // 0x2e0f98: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0F9Cu; }
        if (ctx->pc != 0x2E0F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0F9Cu; }
        if (ctx->pc != 0x2E0F9Cu) { return; }
    }
    ctx->pc = 0x2E0F9Cu;
label_2e0f9c:
    // 0x2e0f9c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e0f9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e0fa0: 0x0  nop
    ctx->pc = 0x2e0fa0u;
    // NOP
    // 0x2e0fa4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e0fa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0fa8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E0FA8u;
    {
        const bool branch_taken_0x2e0fa8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E0FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0FA8u;
            // 0x2e0fac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0fa8) {
            ctx->pc = 0x2E0FB4u;
            goto label_2e0fb4;
        }
    }
    ctx->pc = 0x2E0FB0u;
    // 0x2e0fb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e0fb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e0fb4:
    // 0x2e0fb4: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x2e0fb4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e0fb8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2e0fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2e0fbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e0fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0fc0: 0x551823  subu        $v1, $v0, $s5
    ctx->pc = 0x2e0fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2e0fc4: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x2e0fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2e0fc8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e0fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e0fcc: 0x2423021  addu        $a2, $s2, $v0
    ctx->pc = 0x2e0fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2e0fd0: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2E0FD0u;
    SET_GPR_U32(ctx, 31, 0x2E0FD8u);
    ctx->pc = 0x2E0FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0FD0u;
            // 0x2e0fd4: 0x2432821  addu        $a1, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0FD8u; }
        if (ctx->pc != 0x2E0FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0FD8u; }
        if (ctx->pc != 0x2E0FD8u) { return; }
    }
    ctx->pc = 0x2E0FD8u;
label_2e0fd8:
    // 0x2e0fd8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2e0fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2e0fdc: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E0FDCu;
    SET_GPR_U32(ctx, 31, 0x2E0FE4u);
    ctx->pc = 0x2E0FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0FDCu;
            // 0x2e0fe0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0FE4u; }
        if (ctx->pc != 0x2E0FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0FE4u; }
        if (ctx->pc != 0x2E0FE4u) { return; }
    }
    ctx->pc = 0x2E0FE4u;
label_2e0fe4:
    // 0x2e0fe4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2E0FE4u;
    {
        const bool branch_taken_0x2e0fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0FE4u;
            // 0x2e0fe8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0fe4) {
            ctx->pc = 0x2E1038u;
            goto label_2e1038;
        }
    }
    ctx->pc = 0x2E0FECu;
    // 0x2e0fec: 0x0  nop
    ctx->pc = 0x2e0fecu;
    // NOP
label_2e0ff0:
    // 0x2e0ff0: 0x2675ffff  addiu       $s5, $s3, -0x1
    ctx->pc = 0x2e0ff0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2e0ff4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e0ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0ff8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2e0ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2e0ffc: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x2e0ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2e1000: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2e1000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1004: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e1004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e1008: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2E1008u;
    SET_GPR_U32(ctx, 31, 0x2E1010u);
    ctx->pc = 0x2E100Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1008u;
            // 0x2e100c: 0x2422821  addu        $a1, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1010u; }
        if (ctx->pc != 0x2E1010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1010u; }
        if (ctx->pc != 0x2E1010u) { return; }
    }
    ctx->pc = 0x2E1010u;
label_2e1010:
    // 0x2e1010: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2e1010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2e1014: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E1014u;
    SET_GPR_U32(ctx, 31, 0x2E101Cu);
    ctx->pc = 0x2E1018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1014u;
            // 0x2e1018: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E101Cu; }
        if (ctx->pc != 0x2E101Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E101Cu; }
        if (ctx->pc != 0x2E101Cu) { return; }
    }
    ctx->pc = 0x2E101Cu;
label_2e101c:
    // 0x2e101c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E101Cu;
    {
        const bool branch_taken_0x2e101c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E101Cu;
            // 0x2e1020: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e101c) {
            ctx->pc = 0x2E1038u;
            goto label_2e1038;
        }
    }
    ctx->pc = 0x2E1024u;
    // 0x2e1024: 0x0  nop
    ctx->pc = 0x2e1024u;
    // NOP
label_2e1028:
    // 0x2e1028: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2e1028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2e102c: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E102Cu;
    SET_GPR_U32(ctx, 31, 0x2E1034u);
    ctx->pc = 0x2E1030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E102Cu;
            // 0x2e1030: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1034u; }
        if (ctx->pc != 0x2E1034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1034u; }
        if (ctx->pc != 0x2E1034u) { return; }
    }
    ctx->pc = 0x2E1034u;
label_2e1034:
    // 0x2e1034: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x2e1034u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e1038:
    // 0x2e1038: 0x3aa20002  xori        $v0, $s5, 0x2
    ctx->pc = 0x2e1038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)2);
    // 0x2e103c: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x2e103cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e1040: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2e1040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2e1044: 0x3aa20001  xori        $v0, $s5, 0x1
    ctx->pc = 0x2e1044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)1);
    // 0x2e1048: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e1048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e104c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2e104cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e1050: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x2e1050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2e1054: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e1054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e1058: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2e1058u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e105c: 0xc0bc5b0  jal         func_2F16C0
    ctx->pc = 0x2E105Cu;
    SET_GPR_U32(ctx, 31, 0x2E1064u);
    ctx->pc = 0x2E1060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E105Cu;
            // 0x2e1060: 0x2423021  addu        $a2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F16C0u;
    if (runtime->hasFunction(0x2F16C0u)) {
        auto targetFn = runtime->lookupFunction(0x2F16C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1064u; }
        if (ctx->pc != 0x2E1064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F16C0_0x2f16c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1064u; }
        if (ctx->pc != 0x2E1064u) { return; }
    }
    ctx->pc = 0x2E1064u;
label_2e1064:
    // 0x2e1064: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e1064u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e1068: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2e1068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2e106c: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x2e106cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x2e1070: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e1070u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e1074: 0x44170000  mfc1        $s7, $f0
    ctx->pc = 0x2e1074u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
    // 0x2e1078: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x2E1078u;
    SET_GPR_U32(ctx, 31, 0x2E1080u);
    ctx->pc = 0x2E107Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1078u;
            // 0x2e107c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1080u; }
        if (ctx->pc != 0x2E1080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1080u; }
        if (ctx->pc != 0x2E1080u) { return; }
    }
    ctx->pc = 0x2E1080u;
label_2e1080:
    // 0x2e1080: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x2e1080u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e1084: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1084u;
    {
        const bool branch_taken_0x2e1084 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E1088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1084u;
            // 0x2e1088: 0x4614a502  mul.s       $f20, $f20, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1084) {
            ctx->pc = 0x2E1098u;
            goto label_2e1098;
        }
    }
    ctx->pc = 0x2E108Cu;
    // 0x2e108c: 0x4615a036  c.le.s      $f20, $f21
    ctx->pc = 0x2e108cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e1090: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x2E1090u;
    {
        const bool branch_taken_0x2e1090 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e1090) {
            ctx->pc = 0x2E10B8u;
            goto label_2e10b8;
        }
    }
    ctx->pc = 0x2E1098u;
label_2e1098:
    // 0x2e1098: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x2e1098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e109c: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x2E109Cu;
    {
        const bool branch_taken_0x2e109c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e109c) {
            ctx->pc = 0x2E1128u;
            goto label_2e1128;
        }
    }
    ctx->pc = 0x2E10A4u;
    // 0x2e10a4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e10a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e10a8: 0x0  nop
    ctx->pc = 0x2e10a8u;
    // NOP
    // 0x2e10ac: 0x46140832  c.eq.s      $f1, $f20
    ctx->pc = 0x2e10acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e10b0: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x2E10B0u;
    {
        const bool branch_taken_0x2e10b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e10b0) {
            ctx->pc = 0x2E1128u;
            goto label_2e1128;
        }
    }
    ctx->pc = 0x2E10B8u;
label_2e10b8:
    // 0x2e10b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e10b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e10bc: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2e10bcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x2e10c0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2e10c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e10c4: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x2e10c4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x2e10c8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E10C8u;
    SET_GPR_U32(ctx, 31, 0x2E10D0u);
    ctx->pc = 0x2E10CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E10C8u;
            // 0x2e10cc: 0xafb500e0  sw          $s5, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E10D0u; }
        if (ctx->pc != 0x2E10D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E10D0u; }
        if (ctx->pc != 0x2E10D0u) { return; }
    }
    ctx->pc = 0x2E10D0u;
label_2e10d0:
    // 0x2e10d0: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x2e10d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x2e10d4: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E10D4u;
    SET_GPR_U32(ctx, 31, 0x2E10DCu);
    ctx->pc = 0x2E10D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E10D4u;
            // 0x2e10d8: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E10DCu; }
        if (ctx->pc != 0x2E10DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E10DCu; }
        if (ctx->pc != 0x2E10DCu) { return; }
    }
    ctx->pc = 0x2E10DCu;
label_2e10dc:
    // 0x2e10dc: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x2e10dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2e10e0: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E10E0u;
    SET_GPR_U32(ctx, 31, 0x2E10E8u);
    ctx->pc = 0x2E10E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E10E0u;
            // 0x2e10e4: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E10E8u; }
        if (ctx->pc != 0x2E10E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E10E8u; }
        if (ctx->pc != 0x2E10E8u) { return; }
    }
    ctx->pc = 0x2E10E8u;
label_2e10e8:
    // 0x2e10e8: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x2e10e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e10ec: 0xae830040  sw          $v1, 0x40($s4)
    ctx->pc = 0x2e10ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 3));
    // 0x2e10f0: 0x3aa30002  xori        $v1, $s5, 0x2
    ctx->pc = 0x2e10f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)2);
    // 0x2e10f4: 0x2c640001  sltiu       $a0, $v1, 0x1
    ctx->pc = 0x2e10f4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e10f8: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x2e10f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2e10fc: 0x17182b  sltu        $v1, $zero, $s7
    ctx->pc = 0x2e10fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x2e1100: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2e1100u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e1104: 0xa6850052  sh          $a1, 0x52($s4)
    ctx->pc = 0x2e1104u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 82), (uint16_t)GPR_U32(ctx, 5));
    // 0x2e1108: 0x2e01826  xor         $v1, $s7, $zero
    ctx->pc = 0x2e1108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 0));
    // 0x2e110c: 0xa6910054  sh          $s1, 0x54($s4)
    ctx->pc = 0x2e110cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 84), (uint16_t)GPR_U32(ctx, 17));
    // 0x2e1110: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2e1110u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e1114: 0x2a31818  mult        $v1, $s5, $v1
    ctx->pc = 0x2e1114u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2e1118: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2e1118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2e111c: 0xa6830056  sh          $v1, 0x56($s4)
    ctx->pc = 0x2e111cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 86), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e1120: 0xa6830050  sh          $v1, 0x50($s4)
    ctx->pc = 0x2e1120u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 80), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e1124: 0x0  nop
    ctx->pc = 0x2e1124u;
    // NOP
label_2e1128:
    // 0x2e1128: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x2e1128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2e112c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e112cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e1130: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2e1130u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2e1134: 0x2463001c  addiu       $v1, $v1, 0x1C
    ctx->pc = 0x2e1134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x2e1138: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x2e1138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x2e113c: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x2e113cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e1140: 0x9463001c  lhu         $v1, 0x1C($v1)
    ctx->pc = 0x2e1140u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2e1144: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e1144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e1148: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x2e1148u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e114c: 0x1460ff7c  bnez        $v1, . + 4 + (-0x84 << 2)
    ctx->pc = 0x2E114Cu;
    {
        const bool branch_taken_0x2e114c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E114Cu;
            // 0x2e1150: 0x27de0010  addiu       $fp, $fp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e114c) {
            ctx->pc = 0x2E0F40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e0f40;
        }
    }
    ctx->pc = 0x2E1154u;
    // 0x2e1154: 0x0  nop
    ctx->pc = 0x2e1154u;
    // NOP
label_2e1158:
    // 0x2e1158: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2e1158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e115c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2e115cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2e1160: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x2e1160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x2e1164: 0x621ff64  bgez        $s1, . + 4 + (-0x9C << 2)
    ctx->pc = 0x2E1164u;
    {
        const bool branch_taken_0x2e1164 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2E1168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1164u;
            // 0x2e1168: 0xafa300d0  sw          $v1, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1164) {
            ctx->pc = 0x2E0EF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e0ef8;
        }
    }
    ctx->pc = 0x2E116Cu;
    // 0x2e116c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2e116cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e1170: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2e1170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e1174: 0x50640030  beql        $v1, $a0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2E1174u;
    {
        const bool branch_taken_0x2e1174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2e1174) {
            ctx->pc = 0x2E1178u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1174u;
            // 0x2e1178: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E1238u;
            goto label_2e1238;
        }
    }
    ctx->pc = 0x2E117Cu;
    // 0x2e117c: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x2e117cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x2e1180: 0x9442001c  lhu         $v0, 0x1C($v0)
    ctx->pc = 0x2e1180u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2e1184: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x2e1184u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e1188: 0xae800048  sw          $zero, 0x48($s4)
    ctx->pc = 0x2e1188u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 0));
    // 0x2e118c: 0x108900  sll         $s1, $s0, 4
    ctx->pc = 0x2e118cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_2e1190:
    // 0x2e1190: 0x8e830040  lw          $v1, 0x40($s4)
    ctx->pc = 0x2e1190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x2e1194: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x2e1194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2e1198: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e1198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e119c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2e119cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e11a0: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2e11a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e11a4: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x2E11A4u;
    SET_GPR_U32(ctx, 31, 0x2E11ACu);
    ctx->pc = 0x2E11A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E11A4u;
            // 0x2e11a8: 0x712021  addu        $a0, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E11ACu; }
        if (ctx->pc != 0x2E11ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E11ACu; }
        if (ctx->pc != 0x2E11ACu) { return; }
    }
    ctx->pc = 0x2E11ACu;
label_2e11ac:
    // 0x2e11ac: 0xc6810048  lwc1        $f1, 0x48($s4)
    ctx->pc = 0x2e11acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e11b0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2e11b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2e11b4: 0x2631fff0  addiu       $s1, $s1, -0x10
    ctx->pc = 0x2e11b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x2e11b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e11b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e11bc: 0x1600fff4  bnez        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E11BCu;
    {
        const bool branch_taken_0x2e11bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E11C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E11BCu;
            // 0x2e11c0: 0xe6800048  swc1        $f0, 0x48($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e11bc) {
            ctx->pc = 0x2E1190u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e1190;
        }
    }
    ctx->pc = 0x2E11C4u;
    // 0x2e11c4: 0x96840050  lhu         $a0, 0x50($s4)
    ctx->pc = 0x2e11c4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x2e11c8: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x2e11c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x2e11cc: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x2e11ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x2e11d0: 0x96830052  lhu         $v1, 0x52($s4)
    ctx->pc = 0x2e11d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 82)));
    // 0x2e11d4: 0x38840002  xori        $a0, $a0, 0x2
    ctx->pc = 0x2e11d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
    // 0x2e11d8: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x2e11d8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e11dc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2e11dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e11e0: 0x648023  subu        $s0, $v1, $a0
    ctx->pc = 0x2e11e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e11e4: 0x108900  sll         $s1, $s0, 4
    ctx->pc = 0x2e11e4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2e11e8: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x2E11E8u;
    SET_GPR_U32(ctx, 31, 0x2E11F0u);
    ctx->pc = 0x2E11ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E11E8u;
            // 0x2e11ec: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E11F0u; }
        if (ctx->pc != 0x2E11F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E11F0u; }
        if (ctx->pc != 0x2E11F0u) { return; }
    }
    ctx->pc = 0x2E11F0u;
label_2e11f0:
    // 0x2e11f0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E11F0u;
    {
        const bool branch_taken_0x2e11f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E11F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E11F0u;
            // 0x2e11f4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e11f0) {
            ctx->pc = 0x2E1228u;
            goto label_2e1228;
        }
    }
    ctx->pc = 0x2E11F8u;
label_2e11f8:
    // 0x2e11f8: 0x8e830040  lw          $v1, 0x40($s4)
    ctx->pc = 0x2e11f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x2e11fc: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x2e11fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2e1200: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e1200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e1204: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2e1204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e1208: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2e1208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e120c: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x2E120Cu;
    SET_GPR_U32(ctx, 31, 0x2E1214u);
    ctx->pc = 0x2E1210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E120Cu;
            // 0x2e1210: 0x712021  addu        $a0, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1214u; }
        if (ctx->pc != 0x2E1214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1214u; }
        if (ctx->pc != 0x2E1214u) { return; }
    }
    ctx->pc = 0x2E1214u;
label_2e1214:
    // 0x2e1214: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2e1214u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2e1218: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2e1218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2e121c: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2E121Cu;
    {
        const bool branch_taken_0x2e121c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E121Cu;
            // 0x2e1220: 0x2631fff0  addiu       $s1, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e121c) {
            ctx->pc = 0x2E11F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e11f8;
        }
    }
    ctx->pc = 0x2E1224u;
    // 0x2e1224: 0x0  nop
    ctx->pc = 0x2e1224u;
    // NOP
label_2e1228:
    // 0x2e1228: 0xc6800048  lwc1        $f0, 0x48($s4)
    ctx->pc = 0x2e1228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e122c: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x2e122cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
    // 0x2e1230: 0xe6800044  swc1        $f0, 0x44($s4)
    ctx->pc = 0x2e1230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 68), bits); }
label_2e1234:
    // 0x2e1234: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2e1234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2e1238:
    // 0x2e1238: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2e1238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e123c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2e123cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e1240: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2e1240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e1244: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2e1244u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e1248: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e1248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e124c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2e124cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1250: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2e1250u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e1254: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2e1254u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e1258: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e1258u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e125c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e125cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e1260: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e1260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1264: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e1264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1268: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E126Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1268u;
            // 0x2e126c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E1270u;
}
