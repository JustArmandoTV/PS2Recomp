#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00567DA0
// Address: 0x567da0 - 0x567fa0
void sub_00567DA0_0x567da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00567DA0_0x567da0");
#endif

    switch (ctx->pc) {
        case 0x567dbcu: goto label_567dbc;
        case 0x567ddcu: goto label_567ddc;
        case 0x567e44u: goto label_567e44;
        case 0x567e60u: goto label_567e60;
        case 0x567e94u: goto label_567e94;
        case 0x567eb4u: goto label_567eb4;
        case 0x567ed0u: goto label_567ed0;
        case 0x567f30u: goto label_567f30;
        case 0x567f3cu: goto label_567f3c;
        case 0x567f48u: goto label_567f48;
        case 0x567f54u: goto label_567f54;
        case 0x567f60u: goto label_567f60;
        case 0x567f6cu: goto label_567f6c;
        case 0x567f84u: goto label_567f84;
        default: break;
    }

    ctx->pc = 0x567da0u;

    // 0x567da0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x567da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x567da4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x567da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x567da8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x567da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x567dac: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x567dacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x567db0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x567db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x567db4: 0xc15a020  jal         func_568080
    ctx->pc = 0x567DB4u;
    SET_GPR_U32(ctx, 31, 0x567DBCu);
    ctx->pc = 0x567DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567DB4u;
            // 0x567db8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x568080u;
    if (runtime->hasFunction(0x568080u)) {
        auto targetFn = runtime->lookupFunction(0x568080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567DBCu; }
        if (ctx->pc != 0x567DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00568080_0x568080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567DBCu; }
        if (ctx->pc != 0x567DBCu) { return; }
    }
    ctx->pc = 0x567DBCu;
label_567dbc:
    // 0x567dbc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x567dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x567dc0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x567dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x567dc4: 0x24638160  addiu       $v1, $v1, -0x7EA0
    ctx->pc = 0x567dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934880));
    // 0x567dc8: 0x24428198  addiu       $v0, $v0, -0x7E68
    ctx->pc = 0x567dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934936));
    // 0x567dcc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x567dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x567dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x567dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x567dd4: 0xc15a01c  jal         func_568070
    ctx->pc = 0x567DD4u;
    SET_GPR_U32(ctx, 31, 0x567DDCu);
    ctx->pc = 0x567DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567DD4u;
            // 0x567dd8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x568070u;
    if (runtime->hasFunction(0x568070u)) {
        auto targetFn = runtime->lookupFunction(0x568070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567DDCu; }
        if (ctx->pc != 0x567DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00568070_0x568070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567DDCu; }
        if (ctx->pc != 0x567DDCu) { return; }
    }
    ctx->pc = 0x567DDCu;
label_567ddc:
    // 0x567ddc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x567ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x567de0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x567de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x567de4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x567de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x567de8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x567de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x567dec: 0x24422720  addiu       $v0, $v0, 0x2720
    ctx->pc = 0x567decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10016));
    // 0x567df0: 0x24848090  addiu       $a0, $a0, -0x7F70
    ctx->pc = 0x567df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934672));
    // 0x567df4: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x567df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x567df8: 0x246380c8  addiu       $v1, $v1, -0x7F38
    ctx->pc = 0x567df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934728));
    // 0x567dfc: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x567dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x567e00: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x567e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x567e04: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x567e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x567e08: 0x244280d8  addiu       $v0, $v0, -0x7F28
    ctx->pc = 0x567e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934744));
    // 0x567e0c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x567e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x567e10: 0x3c074040  lui         $a3, 0x4040
    ctx->pc = 0x567e10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16448 << 16));
    // 0x567e14: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x567e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x567e18: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x567e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x567e1c: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x567e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x567e20: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x567e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x567e24: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x567e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x567e28: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x567e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x567e2c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x567e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x567e30: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x567e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x567e34: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x567e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x567e38: 0xafa70034  sw          $a3, 0x34($sp)
    ctx->pc = 0x567e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 7));
    // 0x567e3c: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x567E3Cu;
    SET_GPR_U32(ctx, 31, 0x567E44u);
    ctx->pc = 0x567E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567E3Cu;
            // 0x567e40: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567E44u; }
        if (ctx->pc != 0x567E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567E44u; }
        if (ctx->pc != 0x567E44u) { return; }
    }
    ctx->pc = 0x567E44u;
label_567e44:
    // 0x567e44: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x567e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x567e48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x567e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x567e4c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x567E4Cu;
    {
        const bool branch_taken_0x567e4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x567E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567E4Cu;
            // 0x567e50: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x567e4c) {
            ctx->pc = 0x567E64u;
            goto label_567e64;
        }
    }
    ctx->pc = 0x567E54u;
    // 0x567e54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x567e54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x567e58: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x567E58u;
    SET_GPR_U32(ctx, 31, 0x567E60u);
    ctx->pc = 0x567E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567E58u;
            // 0x567e5c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567E60u; }
        if (ctx->pc != 0x567E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567E60u; }
        if (ctx->pc != 0x567E60u) { return; }
    }
    ctx->pc = 0x567E60u;
label_567e60:
    // 0x567e60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x567e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_567e64:
    // 0x567e64: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x567e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x567e68: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x567e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x567e6c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x567e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x567e70: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x567e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x567e74: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x567e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x567e78: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x567e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x567e7c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x567e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x567e80: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x567e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x567e84: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x567e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x567e88: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x567e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x567e8c: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x567E8Cu;
    SET_GPR_U32(ctx, 31, 0x567E94u);
    ctx->pc = 0x567E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567E8Cu;
            // 0x567e90: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567E94u; }
        if (ctx->pc != 0x567E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567E94u; }
        if (ctx->pc != 0x567E94u) { return; }
    }
    ctx->pc = 0x567E94u;
label_567e94:
    // 0x567e94: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x567e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x567e98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x567e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x567e9c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x567E9Cu;
    {
        const bool branch_taken_0x567e9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x567EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567E9Cu;
            // 0x567ea0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x567e9c) {
            ctx->pc = 0x567EB8u;
            goto label_567eb8;
        }
    }
    ctx->pc = 0x567EA4u;
    // 0x567ea4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x567ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x567ea8: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x567ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x567eac: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x567EACu;
    SET_GPR_U32(ctx, 31, 0x567EB4u);
    ctx->pc = 0x567EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567EACu;
            // 0x567eb0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567EB4u; }
        if (ctx->pc != 0x567EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567EB4u; }
        if (ctx->pc != 0x567EB4u) { return; }
    }
    ctx->pc = 0x567EB4u;
label_567eb4:
    // 0x567eb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x567eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_567eb8:
    // 0x567eb8: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x567eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
    // 0x567ebc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x567ebcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x567ec0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x567ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x567ec4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x567ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x567ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x567EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x567ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567EC8u;
            // 0x567ecc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x567ED0u;
label_567ed0:
    // 0x567ed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x567ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x567ed4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x567ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x567ed8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x567ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x567edc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x567edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x567ee0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x567ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x567ee4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x567EE4u;
    {
        const bool branch_taken_0x567ee4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x567EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567EE4u;
            // 0x567ee8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x567ee4) {
            ctx->pc = 0x567F84u;
            goto label_567f84;
        }
    }
    ctx->pc = 0x567EECu;
    // 0x567eec: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x567eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x567ef0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x567ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x567ef4: 0x24638160  addiu       $v1, $v1, -0x7EA0
    ctx->pc = 0x567ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934880));
    // 0x567ef8: 0x24428198  addiu       $v0, $v0, -0x7E68
    ctx->pc = 0x567ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934936));
    // 0x567efc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x567efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x567f00: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x567F00u;
    {
        const bool branch_taken_0x567f00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x567F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567F00u;
            // 0x567f04: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x567f00) {
            ctx->pc = 0x567F6Cu;
            goto label_567f6c;
        }
    }
    ctx->pc = 0x567F08u;
    // 0x567f08: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x567f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x567f0c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x567f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x567f10: 0x24638110  addiu       $v1, $v1, -0x7EF0
    ctx->pc = 0x567f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934800));
    // 0x567f14: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x567f14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x567f18: 0x24428148  addiu       $v0, $v0, -0x7EB8
    ctx->pc = 0x567f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934856));
    // 0x567f1c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x567f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x567f20: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x567f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x567f24: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x567f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x567f28: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x567F28u;
    SET_GPR_U32(ctx, 31, 0x567F30u);
    ctx->pc = 0x567F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567F28u;
            // 0x567f2c: 0x24a55b00  addiu       $a1, $a1, 0x5B00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567F30u; }
        if (ctx->pc != 0x567F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567F30u; }
        if (ctx->pc != 0x567F30u) { return; }
    }
    ctx->pc = 0x567F30u;
label_567f30:
    // 0x567f30: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x567f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x567f34: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x567F34u;
    SET_GPR_U32(ctx, 31, 0x567F3Cu);
    ctx->pc = 0x567F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567F34u;
            // 0x567f38: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567F3Cu; }
        if (ctx->pc != 0x567F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567F3Cu; }
        if (ctx->pc != 0x567F3Cu) { return; }
    }
    ctx->pc = 0x567F3Cu;
label_567f3c:
    // 0x567f3c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x567f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x567f40: 0xc15a000  jal         func_568000
    ctx->pc = 0x567F40u;
    SET_GPR_U32(ctx, 31, 0x567F48u);
    ctx->pc = 0x567F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567F40u;
            // 0x567f44: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x568000u;
    if (runtime->hasFunction(0x568000u)) {
        auto targetFn = runtime->lookupFunction(0x568000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567F48u; }
        if (ctx->pc != 0x567F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00568000_0x568000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567F48u; }
        if (ctx->pc != 0x567F48u) { return; }
    }
    ctx->pc = 0x567F48u;
label_567f48:
    // 0x567f48: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x567f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x567f4c: 0xc15a000  jal         func_568000
    ctx->pc = 0x567F4Cu;
    SET_GPR_U32(ctx, 31, 0x567F54u);
    ctx->pc = 0x567F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567F4Cu;
            // 0x567f50: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x568000u;
    if (runtime->hasFunction(0x568000u)) {
        auto targetFn = runtime->lookupFunction(0x568000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567F54u; }
        if (ctx->pc != 0x567F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00568000_0x568000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567F54u; }
        if (ctx->pc != 0x567F54u) { return; }
    }
    ctx->pc = 0x567F54u;
label_567f54:
    // 0x567f54: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x567f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x567f58: 0xc159fe8  jal         func_567FA0
    ctx->pc = 0x567F58u;
    SET_GPR_U32(ctx, 31, 0x567F60u);
    ctx->pc = 0x567F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567F58u;
            // 0x567f5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x567FA0u;
    if (runtime->hasFunction(0x567FA0u)) {
        auto targetFn = runtime->lookupFunction(0x567FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567F60u; }
        if (ctx->pc != 0x567F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00567FA0_0x567fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567F60u; }
        if (ctx->pc != 0x567F60u) { return; }
    }
    ctx->pc = 0x567F60u;
label_567f60:
    // 0x567f60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x567f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x567f64: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x567F64u;
    SET_GPR_U32(ctx, 31, 0x567F6Cu);
    ctx->pc = 0x567F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567F64u;
            // 0x567f68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567F6Cu; }
        if (ctx->pc != 0x567F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567F6Cu; }
        if (ctx->pc != 0x567F6Cu) { return; }
    }
    ctx->pc = 0x567F6Cu;
label_567f6c:
    // 0x567f6c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x567f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x567f70: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x567f70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x567f74: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x567F74u;
    {
        const bool branch_taken_0x567f74 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x567f74) {
            ctx->pc = 0x567F78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x567F74u;
            // 0x567f78: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x567F88u;
            goto label_567f88;
        }
    }
    ctx->pc = 0x567F7Cu;
    // 0x567f7c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x567F7Cu;
    SET_GPR_U32(ctx, 31, 0x567F84u);
    ctx->pc = 0x567F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567F7Cu;
            // 0x567f80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567F84u; }
        if (ctx->pc != 0x567F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567F84u; }
        if (ctx->pc != 0x567F84u) { return; }
    }
    ctx->pc = 0x567F84u;
label_567f84:
    // 0x567f84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x567f84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_567f88:
    // 0x567f88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x567f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x567f8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x567f8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x567f90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x567f90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x567f94: 0x3e00008  jr          $ra
    ctx->pc = 0x567F94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x567F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567F94u;
            // 0x567f98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x567F9Cu;
    // 0x567f9c: 0x0  nop
    ctx->pc = 0x567f9cu;
    // NOP
}
