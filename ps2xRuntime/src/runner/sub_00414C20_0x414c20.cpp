#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00414C20
// Address: 0x414c20 - 0x414e20
void sub_00414C20_0x414c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414C20_0x414c20");
#endif

    switch (ctx->pc) {
        case 0x414c3cu: goto label_414c3c;
        case 0x414c5cu: goto label_414c5c;
        case 0x414cc4u: goto label_414cc4;
        case 0x414ce0u: goto label_414ce0;
        case 0x414d14u: goto label_414d14;
        case 0x414d34u: goto label_414d34;
        case 0x414d50u: goto label_414d50;
        case 0x414db0u: goto label_414db0;
        case 0x414dbcu: goto label_414dbc;
        case 0x414dc8u: goto label_414dc8;
        case 0x414dd4u: goto label_414dd4;
        case 0x414de0u: goto label_414de0;
        case 0x414decu: goto label_414dec;
        case 0x414e04u: goto label_414e04;
        default: break;
    }

    ctx->pc = 0x414c20u;

    // 0x414c20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x414c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x414c24: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x414c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x414c28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x414c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x414c2c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x414c2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x414c30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x414c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x414c34: 0xc1053c0  jal         func_414F00
    ctx->pc = 0x414C34u;
    SET_GPR_U32(ctx, 31, 0x414C3Cu);
    ctx->pc = 0x414C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414C34u;
            // 0x414c38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x414F00u;
    if (runtime->hasFunction(0x414F00u)) {
        auto targetFn = runtime->lookupFunction(0x414F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414C3Cu; }
        if (ctx->pc != 0x414C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00414F00_0x414f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414C3Cu; }
        if (ctx->pc != 0x414C3Cu) { return; }
    }
    ctx->pc = 0x414C3Cu;
label_414c3c:
    // 0x414c3c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x414c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x414c40: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x414c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x414c44: 0x2463b170  addiu       $v1, $v1, -0x4E90
    ctx->pc = 0x414c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947184));
    // 0x414c48: 0x2442b1a8  addiu       $v0, $v0, -0x4E58
    ctx->pc = 0x414c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947240));
    // 0x414c4c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x414c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x414c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x414c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x414c54: 0xc1053bc  jal         func_414EF0
    ctx->pc = 0x414C54u;
    SET_GPR_U32(ctx, 31, 0x414C5Cu);
    ctx->pc = 0x414C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414C54u;
            // 0x414c58: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x414EF0u;
    if (runtime->hasFunction(0x414EF0u)) {
        auto targetFn = runtime->lookupFunction(0x414EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414C5Cu; }
        if (ctx->pc != 0x414C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00414EF0_0x414ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414C5Cu; }
        if (ctx->pc != 0x414C5Cu) { return; }
    }
    ctx->pc = 0x414C5Cu;
label_414c5c:
    // 0x414c5c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x414c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x414c60: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x414c60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x414c64: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x414c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x414c68: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x414c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x414c6c: 0x24422720  addiu       $v0, $v0, 0x2720
    ctx->pc = 0x414c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10016));
    // 0x414c70: 0x2484b090  addiu       $a0, $a0, -0x4F70
    ctx->pc = 0x414c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946960));
    // 0x414c74: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x414c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x414c78: 0x2463b0c8  addiu       $v1, $v1, -0x4F38
    ctx->pc = 0x414c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947016));
    // 0x414c7c: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x414c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x414c80: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x414c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x414c84: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x414c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x414c88: 0x2442b0d8  addiu       $v0, $v0, -0x4F28
    ctx->pc = 0x414c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947032));
    // 0x414c8c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x414c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x414c90: 0x3c074040  lui         $a3, 0x4040
    ctx->pc = 0x414c90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16448 << 16));
    // 0x414c94: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x414c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x414c98: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x414c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x414c9c: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x414c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x414ca0: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x414ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x414ca4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x414ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x414ca8: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x414ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x414cac: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x414cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x414cb0: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x414cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x414cb4: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x414cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x414cb8: 0xafa70034  sw          $a3, 0x34($sp)
    ctx->pc = 0x414cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 7));
    // 0x414cbc: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x414CBCu;
    SET_GPR_U32(ctx, 31, 0x414CC4u);
    ctx->pc = 0x414CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414CBCu;
            // 0x414cc0: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414CC4u; }
        if (ctx->pc != 0x414CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414CC4u; }
        if (ctx->pc != 0x414CC4u) { return; }
    }
    ctx->pc = 0x414CC4u;
label_414cc4:
    // 0x414cc4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x414cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x414cc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x414cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x414ccc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x414CCCu;
    {
        const bool branch_taken_0x414ccc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x414CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x414CCCu;
            // 0x414cd0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414ccc) {
            ctx->pc = 0x414CE4u;
            goto label_414ce4;
        }
    }
    ctx->pc = 0x414CD4u;
    // 0x414cd4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x414cd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x414cd8: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x414CD8u;
    SET_GPR_U32(ctx, 31, 0x414CE0u);
    ctx->pc = 0x414CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414CD8u;
            // 0x414cdc: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414CE0u; }
        if (ctx->pc != 0x414CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414CE0u; }
        if (ctx->pc != 0x414CE0u) { return; }
    }
    ctx->pc = 0x414CE0u;
label_414ce0:
    // 0x414ce0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x414ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_414ce4:
    // 0x414ce4: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x414ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x414ce8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x414ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x414cec: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x414cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x414cf0: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x414cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x414cf4: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x414cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x414cf8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x414cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x414cfc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x414cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x414d00: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x414d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x414d04: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x414d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x414d08: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x414d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x414d0c: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x414D0Cu;
    SET_GPR_U32(ctx, 31, 0x414D14u);
    ctx->pc = 0x414D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414D0Cu;
            // 0x414d10: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414D14u; }
        if (ctx->pc != 0x414D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414D14u; }
        if (ctx->pc != 0x414D14u) { return; }
    }
    ctx->pc = 0x414D14u;
label_414d14:
    // 0x414d14: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x414d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x414d18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x414d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x414d1c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x414D1Cu;
    {
        const bool branch_taken_0x414d1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x414D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x414D1Cu;
            // 0x414d20: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414d1c) {
            ctx->pc = 0x414D38u;
            goto label_414d38;
        }
    }
    ctx->pc = 0x414D24u;
    // 0x414d24: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x414d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x414d28: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x414d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x414d2c: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x414D2Cu;
    SET_GPR_U32(ctx, 31, 0x414D34u);
    ctx->pc = 0x414D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414D2Cu;
            // 0x414d30: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414D34u; }
        if (ctx->pc != 0x414D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414D34u; }
        if (ctx->pc != 0x414D34u) { return; }
    }
    ctx->pc = 0x414D34u;
label_414d34:
    // 0x414d34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x414d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_414d38:
    // 0x414d38: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x414d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
    // 0x414d3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x414d3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x414d40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x414d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x414d44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x414d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x414d48: 0x3e00008  jr          $ra
    ctx->pc = 0x414D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x414D48u;
            // 0x414d4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x414D50u;
label_414d50:
    // 0x414d50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x414d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x414d54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x414d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x414d58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x414d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x414d5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x414d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x414d60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x414d60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x414d64: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x414D64u;
    {
        const bool branch_taken_0x414d64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x414D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x414D64u;
            // 0x414d68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414d64) {
            ctx->pc = 0x414E04u;
            goto label_414e04;
        }
    }
    ctx->pc = 0x414D6Cu;
    // 0x414d6c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x414d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x414d70: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x414d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x414d74: 0x2463b170  addiu       $v1, $v1, -0x4E90
    ctx->pc = 0x414d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947184));
    // 0x414d78: 0x2442b1a8  addiu       $v0, $v0, -0x4E58
    ctx->pc = 0x414d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947240));
    // 0x414d7c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x414d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x414d80: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x414D80u;
    {
        const bool branch_taken_0x414d80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x414D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x414D80u;
            // 0x414d84: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414d80) {
            ctx->pc = 0x414DECu;
            goto label_414dec;
        }
    }
    ctx->pc = 0x414D88u;
    // 0x414d88: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x414d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x414d8c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x414d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x414d90: 0x2463b120  addiu       $v1, $v1, -0x4EE0
    ctx->pc = 0x414d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947104));
    // 0x414d94: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x414d94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x414d98: 0x2442b158  addiu       $v0, $v0, -0x4EA8
    ctx->pc = 0x414d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947160));
    // 0x414d9c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x414d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x414da0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x414da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x414da4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x414da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x414da8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x414DA8u;
    SET_GPR_U32(ctx, 31, 0x414DB0u);
    ctx->pc = 0x414DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414DA8u;
            // 0x414dac: 0x24a54710  addiu       $a1, $a1, 0x4710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414DB0u; }
        if (ctx->pc != 0x414DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414DB0u; }
        if (ctx->pc != 0x414DB0u) { return; }
    }
    ctx->pc = 0x414DB0u;
label_414db0:
    // 0x414db0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x414db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x414db4: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x414DB4u;
    SET_GPR_U32(ctx, 31, 0x414DBCu);
    ctx->pc = 0x414DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414DB4u;
            // 0x414db8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414DBCu; }
        if (ctx->pc != 0x414DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414DBCu; }
        if (ctx->pc != 0x414DBCu) { return; }
    }
    ctx->pc = 0x414DBCu;
label_414dbc:
    // 0x414dbc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x414dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x414dc0: 0xc1053a0  jal         func_414E80
    ctx->pc = 0x414DC0u;
    SET_GPR_U32(ctx, 31, 0x414DC8u);
    ctx->pc = 0x414DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414DC0u;
            // 0x414dc4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x414E80u;
    if (runtime->hasFunction(0x414E80u)) {
        auto targetFn = runtime->lookupFunction(0x414E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414DC8u; }
        if (ctx->pc != 0x414DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00414E80_0x414e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414DC8u; }
        if (ctx->pc != 0x414DC8u) { return; }
    }
    ctx->pc = 0x414DC8u;
label_414dc8:
    // 0x414dc8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x414dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x414dcc: 0xc1053a0  jal         func_414E80
    ctx->pc = 0x414DCCu;
    SET_GPR_U32(ctx, 31, 0x414DD4u);
    ctx->pc = 0x414DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414DCCu;
            // 0x414dd0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x414E80u;
    if (runtime->hasFunction(0x414E80u)) {
        auto targetFn = runtime->lookupFunction(0x414E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414DD4u; }
        if (ctx->pc != 0x414DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00414E80_0x414e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414DD4u; }
        if (ctx->pc != 0x414DD4u) { return; }
    }
    ctx->pc = 0x414DD4u;
label_414dd4:
    // 0x414dd4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x414dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x414dd8: 0xc105388  jal         func_414E20
    ctx->pc = 0x414DD8u;
    SET_GPR_U32(ctx, 31, 0x414DE0u);
    ctx->pc = 0x414DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414DD8u;
            // 0x414ddc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x414E20u;
    if (runtime->hasFunction(0x414E20u)) {
        auto targetFn = runtime->lookupFunction(0x414E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414DE0u; }
        if (ctx->pc != 0x414DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00414E20_0x414e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414DE0u; }
        if (ctx->pc != 0x414DE0u) { return; }
    }
    ctx->pc = 0x414DE0u;
label_414de0:
    // 0x414de0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x414de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x414de4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x414DE4u;
    SET_GPR_U32(ctx, 31, 0x414DECu);
    ctx->pc = 0x414DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414DE4u;
            // 0x414de8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414DECu; }
        if (ctx->pc != 0x414DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414DECu; }
        if (ctx->pc != 0x414DECu) { return; }
    }
    ctx->pc = 0x414DECu;
label_414dec:
    // 0x414dec: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x414decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x414df0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x414df0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x414df4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x414DF4u;
    {
        const bool branch_taken_0x414df4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x414df4) {
            ctx->pc = 0x414DF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x414DF4u;
            // 0x414df8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x414E08u;
            goto label_414e08;
        }
    }
    ctx->pc = 0x414DFCu;
    // 0x414dfc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x414DFCu;
    SET_GPR_U32(ctx, 31, 0x414E04u);
    ctx->pc = 0x414E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x414DFCu;
            // 0x414e00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414E04u; }
        if (ctx->pc != 0x414E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x414E04u; }
        if (ctx->pc != 0x414E04u) { return; }
    }
    ctx->pc = 0x414E04u;
label_414e04:
    // 0x414e04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x414e04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_414e08:
    // 0x414e08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x414e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x414e0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x414e0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x414e10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x414e10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x414e14: 0x3e00008  jr          $ra
    ctx->pc = 0x414E14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x414E14u;
            // 0x414e18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x414E1Cu;
    // 0x414e1c: 0x0  nop
    ctx->pc = 0x414e1cu;
    // NOP
}
