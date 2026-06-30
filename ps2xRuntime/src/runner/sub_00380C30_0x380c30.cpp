#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00380C30
// Address: 0x380c30 - 0x380d50
void sub_00380C30_0x380c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380C30_0x380c30");
#endif

    switch (ctx->pc) {
        case 0x380c88u: goto label_380c88;
        case 0x380ca0u: goto label_380ca0;
        case 0x380cd0u: goto label_380cd0;
        default: break;
    }

    ctx->pc = 0x380c30u;

    // 0x380c30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x380c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x380c34: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x380c34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x380c38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x380c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x380c3c: 0x3c0640a0  lui         $a2, 0x40A0
    ctx->pc = 0x380c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16544 << 16));
    // 0x380c40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x380c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x380c44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x380c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x380c48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x380c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x380c4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x380c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x380c50: 0x8c670e80  lw          $a3, 0xE80($v1)
    ctx->pc = 0x380c50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x380c54: 0xac8700e0  sw          $a3, 0xE0($a0)
    ctx->pc = 0x380c54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 7));
    // 0x380c58: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x380c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x380c5c: 0xac8000a4  sw          $zero, 0xA4($a0)
    ctx->pc = 0x380c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 0));
    // 0x380c60: 0xac8600a8  sw          $a2, 0xA8($a0)
    ctx->pc = 0x380c60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 6));
    // 0x380c64: 0xac8000ac  sw          $zero, 0xAC($a0)
    ctx->pc = 0x380c64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 0));
    // 0x380c68: 0xac8000b4  sw          $zero, 0xB4($a0)
    ctx->pc = 0x380c68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 0));
    // 0x380c6c: 0xac8500b8  sw          $a1, 0xB8($a0)
    ctx->pc = 0x380c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 5));
    // 0x380c70: 0xac8300bc  sw          $v1, 0xBC($a0)
    ctx->pc = 0x380c70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 3));
    // 0x380c74: 0x8c83009c  lw          $v1, 0x9C($a0)
    ctx->pc = 0x380c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x380c78: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x380C78u;
    {
        const bool branch_taken_0x380c78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x380C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380C78u;
            // 0x380c7c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380c78) {
            ctx->pc = 0x380D34u;
            goto label_380d34;
        }
    }
    ctx->pc = 0x380C80u;
    // 0x380c80: 0xc0e0354  jal         func_380D50
    ctx->pc = 0x380C80u;
    SET_GPR_U32(ctx, 31, 0x380C88u);
    ctx->pc = 0x380D50u;
    if (runtime->hasFunction(0x380D50u)) {
        auto targetFn = runtime->lookupFunction(0x380D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380C88u; }
        if (ctx->pc != 0x380C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00380D50_0x380d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380C88u; }
        if (ctx->pc != 0x380C88u) { return; }
    }
    ctx->pc = 0x380C88u;
label_380c88:
    // 0x380c88: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x380c88u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
    // 0x380c8c: 0x3c100065  lui         $s0, 0x65
    ctx->pc = 0x380c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)101 << 16));
    // 0x380c90: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x380c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x380c94: 0x263160c0  addiu       $s1, $s1, 0x60C0
    ctx->pc = 0x380c94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24768));
    // 0x380c98: 0xc040180  jal         func_100600
    ctx->pc = 0x380C98u;
    SET_GPR_U32(ctx, 31, 0x380CA0u);
    ctx->pc = 0x380C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x380C98u;
            // 0x380c9c: 0x26105960  addiu       $s0, $s0, 0x5960 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380CA0u; }
        if (ctx->pc != 0x380CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380CA0u; }
        if (ctx->pc != 0x380CA0u) { return; }
    }
    ctx->pc = 0x380CA0u;
label_380ca0:
    // 0x380ca0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x380ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380ca4: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x380CA4u;
    {
        const bool branch_taken_0x380ca4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x380ca4) {
            ctx->pc = 0x380CD4u;
            goto label_380cd4;
        }
    }
    ctx->pc = 0x380CACu;
    // 0x380cac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x380cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x380cb0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x380cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x380cb4: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x380cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x380cb8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x380cb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x380cbc: 0x8c4a0eac  lw          $t2, 0xEAC($v0)
    ctx->pc = 0x380cbcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
    // 0x380cc0: 0x264700d0  addiu       $a3, $s2, 0xD0
    ctx->pc = 0x380cc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x380cc4: 0x26280010  addiu       $t0, $s1, 0x10
    ctx->pc = 0x380cc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x380cc8: 0xc1109e0  jal         func_442780
    ctx->pc = 0x380CC8u;
    SET_GPR_U32(ctx, 31, 0x380CD0u);
    ctx->pc = 0x380CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x380CC8u;
            // 0x380ccc: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442780u;
    if (runtime->hasFunction(0x442780u)) {
        auto targetFn = runtime->lookupFunction(0x442780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380CD0u; }
        if (ctx->pc != 0x380CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442780_0x442780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380CD0u; }
        if (ctx->pc != 0x380CD0u) { return; }
    }
    ctx->pc = 0x380CD0u;
label_380cd0:
    // 0x380cd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x380cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_380cd4:
    // 0x380cd4: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x380cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x380cd8: 0xae4400cc  sw          $a0, 0xCC($s2)
    ctx->pc = 0x380cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 4));
    // 0x380cdc: 0xc462598c  lwc1        $f2, 0x598C($v1)
    ctx->pc = 0x380cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 22924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x380ce0: 0x3c054040  lui         $a1, 0x4040
    ctx->pc = 0x380ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16448 << 16));
    // 0x380ce4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x380ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x380ce8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x380ce8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x380cec: 0x8606001c  lh          $a2, 0x1C($s0)
    ctx->pc = 0x380cecu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x380cf0: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x380cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x380cf4: 0x8605001e  lh          $a1, 0x1E($s0)
    ctx->pc = 0x380cf4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x380cf8: 0xc4605984  lwc1        $f0, 0x5984($v1)
    ctx->pc = 0x380cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 22916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x380cfc: 0x34e70002  ori         $a3, $a3, 0x2
    ctx->pc = 0x380cfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2);
    // 0x380d00: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x380d00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x380d04: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x380d04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x380d08: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x380d08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x380d0c: 0x92030022  lbu         $v1, 0x22($s0)
    ctx->pc = 0x380d0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x380d10: 0xe64000d4  swc1        $f0, 0xD4($s2)
    ctx->pc = 0x380d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
    // 0x380d14: 0xae4000d0  sw          $zero, 0xD0($s2)
    ctx->pc = 0x380d14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 0));
    // 0x380d18: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x380d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x380d1c: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x380d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x380d20: 0xae4400d8  sw          $a0, 0xD8($s2)
    ctx->pc = 0x380d20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 4));
    // 0x380d24: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x380d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x380d28: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x380d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x380d2c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x380d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x380d30: 0xae4300dc  sw          $v1, 0xDC($s2)
    ctx->pc = 0x380d30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 3));
label_380d34:
    // 0x380d34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x380d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x380d38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x380d38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x380d3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x380d3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x380d40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x380d40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x380d44: 0x3e00008  jr          $ra
    ctx->pc = 0x380D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380D44u;
            // 0x380d48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x380D4Cu;
    // 0x380d4c: 0x0  nop
    ctx->pc = 0x380d4cu;
    // NOP
}
