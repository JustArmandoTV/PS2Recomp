#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D4DC0
// Address: 0x4d4dc0 - 0x4d4f20
void sub_004D4DC0_0x4d4dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D4DC0_0x4d4dc0");
#endif

    switch (ctx->pc) {
        case 0x4d4e50u: goto label_4d4e50;
        case 0x4d4e74u: goto label_4d4e74;
        case 0x4d4e80u: goto label_4d4e80;
        case 0x4d4e94u: goto label_4d4e94;
        case 0x4d4ed4u: goto label_4d4ed4;
        case 0x4d4f0cu: goto label_4d4f0c;
        default: break;
    }

    ctx->pc = 0x4d4dc0u;

    // 0x4d4dc0: 0x8c8800b0  lw          $t0, 0xB0($a0)
    ctx->pc = 0x4d4dc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x4d4dc4: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x4d4dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x4d4dc8: 0x2407fffb  addiu       $a3, $zero, -0x5
    ctx->pc = 0x4d4dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x4d4dcc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4d4dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d4dd0: 0x3c054396  lui         $a1, 0x4396
    ctx->pc = 0x4d4dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17302 << 16));
    // 0x4d4dd4: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4d4dd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4d4dd8: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x4d4dd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x4d4ddc: 0x3c034628  lui         $v1, 0x4628
    ctx->pc = 0x4d4ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17960 << 16));
    // 0x4d4de0: 0xac8800b0  sw          $t0, 0xB0($a0)
    ctx->pc = 0x4d4de0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 8));
    // 0x4d4de4: 0x34e70004  ori         $a3, $a3, 0x4
    ctx->pc = 0x4d4de4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4);
    // 0x4d4de8: 0xac8700b0  sw          $a3, 0xB0($a0)
    ctx->pc = 0x4d4de8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 7));
    // 0x4d4dec: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x4d4decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x4d4df0: 0xac86008c  sw          $a2, 0x8C($a0)
    ctx->pc = 0x4d4df0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 6));
    // 0x4d4df4: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x4d4df4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x4d4df8: 0xac850078  sw          $a1, 0x78($a0)
    ctx->pc = 0x4d4df8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 5));
    // 0x4d4dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x4D4DFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D4E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4DFCu;
            // 0x4d4e00: 0xac830080  sw          $v1, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D4E04u;
    // 0x4d4e04: 0x0  nop
    ctx->pc = 0x4d4e04u;
    // NOP
    // 0x4d4e08: 0x0  nop
    ctx->pc = 0x4d4e08u;
    // NOP
    // 0x4d4e0c: 0x0  nop
    ctx->pc = 0x4d4e0cu;
    // NOP
    // 0x4d4e10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d4e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4d4e14: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x4d4e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x4d4e18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d4e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4d4e1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d4e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4d4e20: 0x8c8500b0  lw          $a1, 0xB0($a0)
    ctx->pc = 0x4d4e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x4d4e24: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x4d4e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4d4e28: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x4d4e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x4d4e2c: 0xac8300b0  sw          $v1, 0xB0($a0)
    ctx->pc = 0x4d4e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 3));
    // 0x4d4e30: 0x908300e0  lbu         $v1, 0xE0($a0)
    ctx->pc = 0x4d4e30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x4d4e34: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x4D4E34u;
    {
        const bool branch_taken_0x4d4e34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D4E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4E34u;
            // 0x4d4e38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4e34) {
            ctx->pc = 0x4D4F10u;
            goto label_4d4f10;
        }
    }
    ctx->pc = 0x4D4E3Cu;
    // 0x4d4e3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4d4e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d4e40: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x4d4e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x4d4e44: 0xa20200e0  sb          $v0, 0xE0($s0)
    ctx->pc = 0x4d4e44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 224), (uint8_t)GPR_U32(ctx, 2));
    // 0x4d4e48: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x4D4E48u;
    SET_GPR_U32(ctx, 31, 0x4D4E50u);
    ctx->pc = 0x4D4E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4E48u;
            // 0x4d4e4c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4E50u; }
        if (ctx->pc != 0x4D4E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4E50u; }
        if (ctx->pc != 0x4D4E50u) { return; }
    }
    ctx->pc = 0x4D4E50u;
label_4d4e50:
    // 0x4d4e50: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d4e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4d4e54: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4d4e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d4e58: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x4d4e58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x4d4e5c: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x4d4e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x4d4e60: 0x260600f0  addiu       $a2, $s0, 0xF0
    ctx->pc = 0x4d4e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x4d4e64: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x4d4e64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4d4e68: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4d4e68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d4e6c: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x4D4E6Cu;
    SET_GPR_U32(ctx, 31, 0x4D4E74u);
    ctx->pc = 0x4D4E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4E6Cu;
            // 0x4d4e70: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4E74u; }
        if (ctx->pc != 0x4D4E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4E74u; }
        if (ctx->pc != 0x4D4E74u) { return; }
    }
    ctx->pc = 0x4D4E74u;
label_4d4e74:
    // 0x4d4e74: 0x26040140  addiu       $a0, $s0, 0x140
    ctx->pc = 0x4d4e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x4d4e78: 0xc04cc04  jal         func_133010
    ctx->pc = 0x4D4E78u;
    SET_GPR_U32(ctx, 31, 0x4D4E80u);
    ctx->pc = 0x4D4E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4E78u;
            // 0x4d4e7c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4E80u; }
        if (ctx->pc != 0x4D4E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4E80u; }
        if (ctx->pc != 0x4D4E80u) { return; }
    }
    ctx->pc = 0x4D4E80u;
label_4d4e80:
    // 0x4d4e80: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x4d4e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x4d4e84: 0x54600016  bnel        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x4D4E84u;
    {
        const bool branch_taken_0x4d4e84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d4e84) {
            ctx->pc = 0x4D4E88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4E84u;
            // 0x4d4e88: 0x8e030168  lw          $v1, 0x168($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D4EE0u;
            goto label_4d4ee0;
        }
    }
    ctx->pc = 0x4D4E8Cu;
    // 0x4d4e8c: 0xc040180  jal         func_100600
    ctx->pc = 0x4D4E8Cu;
    SET_GPR_U32(ctx, 31, 0x4D4E94u);
    ctx->pc = 0x4D4E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4E8Cu;
            // 0x4d4e90: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4E94u; }
        if (ctx->pc != 0x4D4E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4E94u; }
        if (ctx->pc != 0x4D4E94u) { return; }
    }
    ctx->pc = 0x4D4E94u;
label_4d4e94:
    // 0x4d4e94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d4e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d4e98: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x4D4E98u;
    {
        const bool branch_taken_0x4d4e98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d4e98) {
            ctx->pc = 0x4D4E9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4E98u;
            // 0x4d4e9c: 0xae040160  sw          $a0, 0x160($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D4EDCu;
            goto label_4d4edc;
        }
    }
    ctx->pc = 0x4D4EA0u;
    // 0x4d4ea0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d4ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4d4ea4: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x4d4ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x4d4ea8: 0x8c470e80  lw          $a3, 0xE80($v0)
    ctx->pc = 0x4d4ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x4d4eac: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4d4eacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4d4eb0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4d4eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4d4eb4: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x4d4eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4d4eb8: 0x26090140  addiu       $t1, $s0, 0x140
    ctx->pc = 0x4d4eb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x4d4ebc: 0x260a00f0  addiu       $t2, $s0, 0xF0
    ctx->pc = 0x4d4ebcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x4d4ec0: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4d4ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x4d4ec4: 0x24e70738  addiu       $a3, $a3, 0x738
    ctx->pc = 0x4d4ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1848));
    // 0x4d4ec8: 0x3445abd8  ori         $a1, $v0, 0xABD8
    ctx->pc = 0x4d4ec8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43992);
    // 0x4d4ecc: 0xc13d944  jal         func_4F6510
    ctx->pc = 0x4D4ECCu;
    SET_GPR_U32(ctx, 31, 0x4D4ED4u);
    ctx->pc = 0x4D4ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4ECCu;
            // 0x4d4ed0: 0x240b0004  addiu       $t3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F6510u;
    if (runtime->hasFunction(0x4F6510u)) {
        auto targetFn = runtime->lookupFunction(0x4F6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4ED4u; }
        if (ctx->pc != 0x4D4ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F6510_0x4f6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4ED4u; }
        if (ctx->pc != 0x4D4ED4u) { return; }
    }
    ctx->pc = 0x4D4ED4u;
label_4d4ed4:
    // 0x4d4ed4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d4ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d4ed8: 0xae040160  sw          $a0, 0x160($s0)
    ctx->pc = 0x4d4ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 4));
label_4d4edc:
    // 0x4d4edc: 0x8e030168  lw          $v1, 0x168($s0)
    ctx->pc = 0x4d4edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
label_4d4ee0:
    // 0x4d4ee0: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4D4EE0u;
    {
        const bool branch_taken_0x4d4ee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d4ee0) {
            ctx->pc = 0x4D4EE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4EE0u;
            // 0x4d4ee4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D4F14u;
            goto label_4d4f14;
        }
    }
    ctx->pc = 0x4D4EE8u;
    // 0x4d4ee8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d4ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4d4eec: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4d4eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d4ef0: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x4d4ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x4d4ef4: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x4d4ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x4d4ef8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4d4ef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d4efc: 0x26070140  addiu       $a3, $s0, 0x140
    ctx->pc = 0x4d4efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x4d4f00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4d4f00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d4f04: 0xc0bb0e8  jal         func_2EC3A0
    ctx->pc = 0x4D4F04u;
    SET_GPR_U32(ctx, 31, 0x4D4F0Cu);
    ctx->pc = 0x4D4F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4F04u;
            // 0x4d4f08: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC3A0u;
    if (runtime->hasFunction(0x2EC3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4F0Cu; }
        if (ctx->pc != 0x4D4F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC3A0_0x2ec3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4F0Cu; }
        if (ctx->pc != 0x4D4F0Cu) { return; }
    }
    ctx->pc = 0x4D4F0Cu;
label_4d4f0c:
    // 0x4d4f0c: 0xae020168  sw          $v0, 0x168($s0)
    ctx->pc = 0x4d4f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 2));
label_4d4f10:
    // 0x4d4f10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d4f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d4f14:
    // 0x4d4f14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d4f14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d4f18: 0x3e00008  jr          $ra
    ctx->pc = 0x4D4F18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D4F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4F18u;
            // 0x4d4f1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D4F20u;
}
