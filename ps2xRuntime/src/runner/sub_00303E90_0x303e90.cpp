#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00303E90
// Address: 0x303e90 - 0x304150
void sub_00303E90_0x303e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303E90_0x303e90");
#endif

    switch (ctx->pc) {
        case 0x303e90u: goto label_303e90;
        case 0x303e94u: goto label_303e94;
        case 0x303e98u: goto label_303e98;
        case 0x303e9cu: goto label_303e9c;
        case 0x303ea0u: goto label_303ea0;
        case 0x303ea4u: goto label_303ea4;
        case 0x303ea8u: goto label_303ea8;
        case 0x303eacu: goto label_303eac;
        case 0x303eb0u: goto label_303eb0;
        case 0x303eb4u: goto label_303eb4;
        case 0x303eb8u: goto label_303eb8;
        case 0x303ebcu: goto label_303ebc;
        case 0x303ec0u: goto label_303ec0;
        case 0x303ec4u: goto label_303ec4;
        case 0x303ec8u: goto label_303ec8;
        case 0x303eccu: goto label_303ecc;
        case 0x303ed0u: goto label_303ed0;
        case 0x303ed4u: goto label_303ed4;
        case 0x303ed8u: goto label_303ed8;
        case 0x303edcu: goto label_303edc;
        case 0x303ee0u: goto label_303ee0;
        case 0x303ee4u: goto label_303ee4;
        case 0x303ee8u: goto label_303ee8;
        case 0x303eecu: goto label_303eec;
        case 0x303ef0u: goto label_303ef0;
        case 0x303ef4u: goto label_303ef4;
        case 0x303ef8u: goto label_303ef8;
        case 0x303efcu: goto label_303efc;
        case 0x303f00u: goto label_303f00;
        case 0x303f04u: goto label_303f04;
        case 0x303f08u: goto label_303f08;
        case 0x303f0cu: goto label_303f0c;
        case 0x303f10u: goto label_303f10;
        case 0x303f14u: goto label_303f14;
        case 0x303f18u: goto label_303f18;
        case 0x303f1cu: goto label_303f1c;
        case 0x303f20u: goto label_303f20;
        case 0x303f24u: goto label_303f24;
        case 0x303f28u: goto label_303f28;
        case 0x303f2cu: goto label_303f2c;
        case 0x303f30u: goto label_303f30;
        case 0x303f34u: goto label_303f34;
        case 0x303f38u: goto label_303f38;
        case 0x303f3cu: goto label_303f3c;
        case 0x303f40u: goto label_303f40;
        case 0x303f44u: goto label_303f44;
        case 0x303f48u: goto label_303f48;
        case 0x303f4cu: goto label_303f4c;
        case 0x303f50u: goto label_303f50;
        case 0x303f54u: goto label_303f54;
        case 0x303f58u: goto label_303f58;
        case 0x303f5cu: goto label_303f5c;
        case 0x303f60u: goto label_303f60;
        case 0x303f64u: goto label_303f64;
        case 0x303f68u: goto label_303f68;
        case 0x303f6cu: goto label_303f6c;
        case 0x303f70u: goto label_303f70;
        case 0x303f74u: goto label_303f74;
        case 0x303f78u: goto label_303f78;
        case 0x303f7cu: goto label_303f7c;
        case 0x303f80u: goto label_303f80;
        case 0x303f84u: goto label_303f84;
        case 0x303f88u: goto label_303f88;
        case 0x303f8cu: goto label_303f8c;
        case 0x303f90u: goto label_303f90;
        case 0x303f94u: goto label_303f94;
        case 0x303f98u: goto label_303f98;
        case 0x303f9cu: goto label_303f9c;
        case 0x303fa0u: goto label_303fa0;
        case 0x303fa4u: goto label_303fa4;
        case 0x303fa8u: goto label_303fa8;
        case 0x303facu: goto label_303fac;
        case 0x303fb0u: goto label_303fb0;
        case 0x303fb4u: goto label_303fb4;
        case 0x303fb8u: goto label_303fb8;
        case 0x303fbcu: goto label_303fbc;
        case 0x303fc0u: goto label_303fc0;
        case 0x303fc4u: goto label_303fc4;
        case 0x303fc8u: goto label_303fc8;
        case 0x303fccu: goto label_303fcc;
        case 0x303fd0u: goto label_303fd0;
        case 0x303fd4u: goto label_303fd4;
        case 0x303fd8u: goto label_303fd8;
        case 0x303fdcu: goto label_303fdc;
        case 0x303fe0u: goto label_303fe0;
        case 0x303fe4u: goto label_303fe4;
        case 0x303fe8u: goto label_303fe8;
        case 0x303fecu: goto label_303fec;
        case 0x303ff0u: goto label_303ff0;
        case 0x303ff4u: goto label_303ff4;
        case 0x303ff8u: goto label_303ff8;
        case 0x303ffcu: goto label_303ffc;
        case 0x304000u: goto label_304000;
        case 0x304004u: goto label_304004;
        case 0x304008u: goto label_304008;
        case 0x30400cu: goto label_30400c;
        case 0x304010u: goto label_304010;
        case 0x304014u: goto label_304014;
        case 0x304018u: goto label_304018;
        case 0x30401cu: goto label_30401c;
        case 0x304020u: goto label_304020;
        case 0x304024u: goto label_304024;
        case 0x304028u: goto label_304028;
        case 0x30402cu: goto label_30402c;
        case 0x304030u: goto label_304030;
        case 0x304034u: goto label_304034;
        case 0x304038u: goto label_304038;
        case 0x30403cu: goto label_30403c;
        case 0x304040u: goto label_304040;
        case 0x304044u: goto label_304044;
        case 0x304048u: goto label_304048;
        case 0x30404cu: goto label_30404c;
        case 0x304050u: goto label_304050;
        case 0x304054u: goto label_304054;
        case 0x304058u: goto label_304058;
        case 0x30405cu: goto label_30405c;
        case 0x304060u: goto label_304060;
        case 0x304064u: goto label_304064;
        case 0x304068u: goto label_304068;
        case 0x30406cu: goto label_30406c;
        case 0x304070u: goto label_304070;
        case 0x304074u: goto label_304074;
        case 0x304078u: goto label_304078;
        case 0x30407cu: goto label_30407c;
        case 0x304080u: goto label_304080;
        case 0x304084u: goto label_304084;
        case 0x304088u: goto label_304088;
        case 0x30408cu: goto label_30408c;
        case 0x304090u: goto label_304090;
        case 0x304094u: goto label_304094;
        case 0x304098u: goto label_304098;
        case 0x30409cu: goto label_30409c;
        case 0x3040a0u: goto label_3040a0;
        case 0x3040a4u: goto label_3040a4;
        case 0x3040a8u: goto label_3040a8;
        case 0x3040acu: goto label_3040ac;
        case 0x3040b0u: goto label_3040b0;
        case 0x3040b4u: goto label_3040b4;
        case 0x3040b8u: goto label_3040b8;
        case 0x3040bcu: goto label_3040bc;
        case 0x3040c0u: goto label_3040c0;
        case 0x3040c4u: goto label_3040c4;
        case 0x3040c8u: goto label_3040c8;
        case 0x3040ccu: goto label_3040cc;
        case 0x3040d0u: goto label_3040d0;
        case 0x3040d4u: goto label_3040d4;
        case 0x3040d8u: goto label_3040d8;
        case 0x3040dcu: goto label_3040dc;
        case 0x3040e0u: goto label_3040e0;
        case 0x3040e4u: goto label_3040e4;
        case 0x3040e8u: goto label_3040e8;
        case 0x3040ecu: goto label_3040ec;
        case 0x3040f0u: goto label_3040f0;
        case 0x3040f4u: goto label_3040f4;
        case 0x3040f8u: goto label_3040f8;
        case 0x3040fcu: goto label_3040fc;
        case 0x304100u: goto label_304100;
        case 0x304104u: goto label_304104;
        case 0x304108u: goto label_304108;
        case 0x30410cu: goto label_30410c;
        case 0x304110u: goto label_304110;
        case 0x304114u: goto label_304114;
        case 0x304118u: goto label_304118;
        case 0x30411cu: goto label_30411c;
        case 0x304120u: goto label_304120;
        case 0x304124u: goto label_304124;
        case 0x304128u: goto label_304128;
        case 0x30412cu: goto label_30412c;
        case 0x304130u: goto label_304130;
        case 0x304134u: goto label_304134;
        case 0x304138u: goto label_304138;
        case 0x30413cu: goto label_30413c;
        case 0x304140u: goto label_304140;
        case 0x304144u: goto label_304144;
        case 0x304148u: goto label_304148;
        case 0x30414cu: goto label_30414c;
        default: break;
    }

    ctx->pc = 0x303e90u;

label_303e90:
    // 0x303e90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x303e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_303e94:
    // 0x303e94: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x303e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_303e98:
    // 0x303e98: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x303e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_303e9c:
    // 0x303e9c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x303e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_303ea0:
    // 0x303ea0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x303ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_303ea4:
    // 0x303ea4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x303ea4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_303ea8:
    // 0x303ea8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x303ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_303eac:
    // 0x303eac: 0x26a40440  addiu       $a0, $s5, 0x440
    ctx->pc = 0x303eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1088));
label_303eb0:
    // 0x303eb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x303eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_303eb4:
    // 0x303eb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x303eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_303eb8:
    // 0x303eb8: 0xc0754b4  jal         func_1D52D0
label_303ebc:
    if (ctx->pc == 0x303EBCu) {
        ctx->pc = 0x303EBCu;
            // 0x303ebc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x303EC0u;
        goto label_303ec0;
    }
    ctx->pc = 0x303EB8u;
    SET_GPR_U32(ctx, 31, 0x303EC0u);
    ctx->pc = 0x303EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303EB8u;
            // 0x303ebc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303EC0u; }
        if (ctx->pc != 0x303EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303EC0u; }
        if (ctx->pc != 0x303EC0u) { return; }
    }
    ctx->pc = 0x303EC0u;
label_303ec0:
    // 0x303ec0: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x303ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_303ec4:
    // 0x303ec4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x303ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_303ec8:
    // 0x303ec8: 0x50400097  beql        $v0, $zero, . + 4 + (0x97 << 2)
label_303ecc:
    if (ctx->pc == 0x303ECCu) {
        ctx->pc = 0x303ECCu;
            // 0x303ecc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x303ED0u;
        goto label_303ed0;
    }
    ctx->pc = 0x303EC8u;
    {
        const bool branch_taken_0x303ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x303ec8) {
            ctx->pc = 0x303ECCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x303EC8u;
            // 0x303ecc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x304128u;
            goto label_304128;
        }
    }
    ctx->pc = 0x303ED0u;
label_303ed0:
    // 0x303ed0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x303ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_303ed4:
    // 0x303ed4: 0x82b611a8  lb          $s6, 0x11A8($s5)
    ctx->pc = 0x303ed4u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 4520)));
label_303ed8:
    // 0x303ed8: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x303ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_303edc:
    // 0x303edc: 0x8c50000c  lw          $s0, 0xC($v0)
    ctx->pc = 0x303edcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_303ee0:
    // 0x303ee0: 0x12000090  beqz        $s0, . + 4 + (0x90 << 2)
label_303ee4:
    if (ctx->pc == 0x303EE4u) {
        ctx->pc = 0x303EE4u;
            // 0x303ee4: 0x26b10bf0  addiu       $s1, $s5, 0xBF0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 3056));
        ctx->pc = 0x303EE8u;
        goto label_303ee8;
    }
    ctx->pc = 0x303EE0u;
    {
        const bool branch_taken_0x303ee0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x303EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303EE0u;
            // 0x303ee4: 0x26b10bf0  addiu       $s1, $s5, 0xBF0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 3056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303ee0) {
            ctx->pc = 0x304124u;
            goto label_304124;
        }
    }
    ctx->pc = 0x303EE8u;
label_303ee8:
    // 0x303ee8: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x303ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
label_303eec:
    // 0x303eec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x303eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_303ef0:
    // 0x303ef0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x303ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_303ef4:
    // 0x303ef4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x303ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_303ef8:
    // 0x303ef8: 0x26a602c0  addiu       $a2, $s5, 0x2C0
    ctx->pc = 0x303ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 704));
label_303efc:
    // 0x303efc: 0x26a70820  addiu       $a3, $s5, 0x820
    ctx->pc = 0x303efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 2080));
label_303f00:
    // 0x303f00: 0xc0b884c  jal         func_2E2130
label_303f04:
    if (ctx->pc == 0x303F04u) {
        ctx->pc = 0x303F04u;
            // 0x303f04: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x303F08u;
        goto label_303f08;
    }
    ctx->pc = 0x303F00u;
    SET_GPR_U32(ctx, 31, 0x303F08u);
    ctx->pc = 0x303F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303F00u;
            // 0x303f04: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2130u;
    if (runtime->hasFunction(0x2E2130u)) {
        auto targetFn = runtime->lookupFunction(0x2E2130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303F08u; }
        if (ctx->pc != 0x303F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2130_0x2e2130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303F08u; }
        if (ctx->pc != 0x303F08u) { return; }
    }
    ctx->pc = 0x303F08u;
label_303f08:
    // 0x303f08: 0x96220056  lhu         $v0, 0x56($s1)
    ctx->pc = 0x303f08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 86)));
label_303f0c:
    // 0x303f0c: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
label_303f10:
    if (ctx->pc == 0x303F10u) {
        ctx->pc = 0x303F14u;
        goto label_303f14;
    }
    ctx->pc = 0x303F0Cu;
    {
        const bool branch_taken_0x303f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x303f0c) {
            ctx->pc = 0x304124u;
            goto label_304124;
        }
    }
    ctx->pc = 0x303F14u;
label_303f14:
    // 0x303f14: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x303f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_303f18:
    // 0x303f18: 0x86240054  lh          $a0, 0x54($s1)
    ctx->pc = 0x303f18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
label_303f1c:
    // 0x303f1c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x303f1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_303f20:
    // 0x303f20: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x303f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_303f24:
    // 0x303f24: 0x3443f000  ori         $v1, $v0, 0xF000
    ctx->pc = 0x303f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_303f28:
    // 0x303f28: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x303f28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_303f2c:
    // 0x303f2c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x303f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_303f30:
    // 0x303f30: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x303f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_303f34:
    // 0x303f34: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x303f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_303f38:
    // 0x303f38: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x303f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_303f3c:
    // 0x303f3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x303f3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_303f40:
    // 0x303f40: 0xc6200048  lwc1        $f0, 0x48($s1)
    ctx->pc = 0x303f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_303f44:
    // 0x303f44: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x303f44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_303f48:
    // 0x303f48: 0x84820020  lh          $v0, 0x20($a0)
    ctx->pc = 0x303f48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
label_303f4c:
    // 0x303f4c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x303f4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_303f50:
    // 0x303f50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x303f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_303f54:
    // 0x303f54: 0x0  nop
    ctx->pc = 0x303f54u;
    // NOP
label_303f58:
    // 0x303f58: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x303f58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_303f5c:
    // 0x303f5c: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x303f5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_303f60:
    // 0x303f60: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x303f60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_303f64:
    // 0x303f64: 0x0  nop
    ctx->pc = 0x303f64u;
    // NOP
label_303f68:
    // 0x303f68: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x303f68u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
label_303f6c:
    // 0x303f6c: 0x0  nop
    ctx->pc = 0x303f6cu;
    // NOP
label_303f70:
    // 0x303f70: 0x0  nop
    ctx->pc = 0x303f70u;
    // NOP
label_303f74:
    // 0x303f74: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x303f74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_303f78:
    // 0x303f78: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_303f7c:
    if (ctx->pc == 0x303F7Cu) {
        ctx->pc = 0x303F80u;
        goto label_303f80;
    }
    ctx->pc = 0x303F78u;
    {
        const bool branch_taken_0x303f78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x303f78) {
            ctx->pc = 0x303F88u;
            goto label_303f88;
        }
    }
    ctx->pc = 0x303F80u;
label_303f80:
    // 0x303f80: 0x10000069  b           . + 4 + (0x69 << 2)
label_303f84:
    if (ctx->pc == 0x303F84u) {
        ctx->pc = 0x303F84u;
            // 0x303f84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x303F88u;
        goto label_303f88;
    }
    ctx->pc = 0x303F80u;
    {
        const bool branch_taken_0x303f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303F80u;
            // 0x303f84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303f80) {
            ctx->pc = 0x304128u;
            goto label_304128;
        }
    }
    ctx->pc = 0x303F88u;
label_303f88:
    // 0x303f88: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x303f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_303f8c:
    // 0x303f8c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x303f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_303f90:
    // 0x303f90: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x303f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_303f94:
    // 0x303f94: 0x8c420968  lw          $v0, 0x968($v0)
    ctx->pc = 0x303f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_303f98:
    // 0x303f98: 0x5443001e  bnel        $v0, $v1, . + 4 + (0x1E << 2)
label_303f9c:
    if (ctx->pc == 0x303F9Cu) {
        ctx->pc = 0x303F9Cu;
            // 0x303f9c: 0x26a405d0  addiu       $a0, $s5, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1488));
        ctx->pc = 0x303FA0u;
        goto label_303fa0;
    }
    ctx->pc = 0x303F98u;
    {
        const bool branch_taken_0x303f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x303f98) {
            ctx->pc = 0x303F9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x303F98u;
            // 0x303f9c: 0x26a405d0  addiu       $a0, $s5, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1488));
        ctx->in_delay_slot = false;
            ctx->pc = 0x304014u;
            goto label_304014;
        }
    }
    ctx->pc = 0x303FA0u;
label_303fa0:
    // 0x303fa0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x303fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_303fa4:
    // 0x303fa4: 0x8c421d98  lw          $v0, 0x1D98($v0)
    ctx->pc = 0x303fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7576)));
label_303fa8:
    // 0x303fa8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_303fac:
    if (ctx->pc == 0x303FACu) {
        ctx->pc = 0x303FACu;
            // 0x303fac: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x303FB0u;
        goto label_303fb0;
    }
    ctx->pc = 0x303FA8u;
    {
        const bool branch_taken_0x303fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303FA8u;
            // 0x303fac: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303fa8) {
            ctx->pc = 0x304010u;
            goto label_304010;
        }
    }
    ctx->pc = 0x303FB0u;
label_303fb0:
    // 0x303fb0: 0x8c500070  lw          $s0, 0x70($v0)
    ctx->pc = 0x303fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_303fb4:
    // 0x303fb4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x303fb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_303fb8:
    // 0x303fb8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x303fb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_303fbc:
    // 0x303fbc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x303fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_303fc0:
    // 0x303fc0: 0x8c421d98  lw          $v0, 0x1D98($v0)
    ctx->pc = 0x303fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7576)));
label_303fc4:
    // 0x303fc4: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x303fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_303fc8:
    // 0x303fc8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x303fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_303fcc:
    // 0x303fcc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x303fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_303fd0:
    // 0x303fd0: 0xc135fd4  jal         func_4D7F50
label_303fd4:
    if (ctx->pc == 0x303FD4u) {
        ctx->pc = 0x303FD4u;
            // 0x303fd4: 0x86250054  lh          $a1, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->pc = 0x303FD8u;
        goto label_303fd8;
    }
    ctx->pc = 0x303FD0u;
    SET_GPR_U32(ctx, 31, 0x303FD8u);
    ctx->pc = 0x303FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303FD0u;
            // 0x303fd4: 0x86250054  lh          $a1, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D7F50u;
    if (runtime->hasFunction(0x4D7F50u)) {
        auto targetFn = runtime->lookupFunction(0x4D7F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303FD8u; }
        if (ctx->pc != 0x303FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D7F50_0x4d7f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303FD8u; }
        if (ctx->pc != 0x303FD8u) { return; }
    }
    ctx->pc = 0x303FD8u;
label_303fd8:
    // 0x303fd8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x303fd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_303fdc:
    // 0x303fdc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x303fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_303fe0:
    // 0x303fe0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_303fe4:
    if (ctx->pc == 0x303FE4u) {
        ctx->pc = 0x303FE4u;
            // 0x303fe4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x303FE8u;
        goto label_303fe8;
    }
    ctx->pc = 0x303FE0u;
    {
        const bool branch_taken_0x303fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303fe0) {
            ctx->pc = 0x303FE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x303FE0u;
            // 0x303fe4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x303FF0u;
            goto label_303ff0;
        }
    }
    ctx->pc = 0x303FE8u;
label_303fe8:
    // 0x303fe8: 0x10000005  b           . + 4 + (0x5 << 2)
label_303fec:
    if (ctx->pc == 0x303FECu) {
        ctx->pc = 0x303FECu;
            // 0x303fec: 0x64130001  daddiu      $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x303FF0u;
        goto label_303ff0;
    }
    ctx->pc = 0x303FE8u;
    {
        const bool branch_taken_0x303fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303FE8u;
            // 0x303fec: 0x64130001  daddiu      $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x303fe8) {
            ctx->pc = 0x304000u;
            goto label_304000;
        }
    }
    ctx->pc = 0x303FF0u;
label_303ff0:
    // 0x303ff0: 0x290102b  sltu        $v0, $s4, $s0
    ctx->pc = 0x303ff0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_303ff4:
    // 0x303ff4: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_303ff8:
    if (ctx->pc == 0x303FF8u) {
        ctx->pc = 0x303FF8u;
            // 0x303ff8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x303FFCu;
        goto label_303ffc;
    }
    ctx->pc = 0x303FF4u;
    {
        const bool branch_taken_0x303ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303FF4u;
            // 0x303ff8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303ff4) {
            ctx->pc = 0x303FBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_303fbc;
        }
    }
    ctx->pc = 0x303FFCu;
label_303ffc:
    // 0x303ffc: 0x0  nop
    ctx->pc = 0x303ffcu;
    // NOP
label_304000:
    // 0x304000: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_304004:
    if (ctx->pc == 0x304004u) {
        ctx->pc = 0x304008u;
        goto label_304008;
    }
    ctx->pc = 0x304000u;
    {
        const bool branch_taken_0x304000 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x304000) {
            ctx->pc = 0x304010u;
            goto label_304010;
        }
    }
    ctx->pc = 0x304008u;
label_304008:
    // 0x304008: 0x10000047  b           . + 4 + (0x47 << 2)
label_30400c:
    if (ctx->pc == 0x30400Cu) {
        ctx->pc = 0x30400Cu;
            // 0x30400c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x304010u;
        goto label_304010;
    }
    ctx->pc = 0x304008u;
    {
        const bool branch_taken_0x304008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30400Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304008u;
            // 0x30400c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304008) {
            ctx->pc = 0x304128u;
            goto label_304128;
        }
    }
    ctx->pc = 0x304010u;
label_304010:
    // 0x304010: 0x26a405d0  addiu       $a0, $s5, 0x5D0
    ctx->pc = 0x304010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1488));
label_304014:
    // 0x304014: 0xc04cc08  jal         func_133020
label_304018:
    if (ctx->pc == 0x304018u) {
        ctx->pc = 0x304018u;
            // 0x304018: 0x26a503d0  addiu       $a1, $s5, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 976));
        ctx->pc = 0x30401Cu;
        goto label_30401c;
    }
    ctx->pc = 0x304014u;
    SET_GPR_U32(ctx, 31, 0x30401Cu);
    ctx->pc = 0x304018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304014u;
            // 0x304018: 0x26a503d0  addiu       $a1, $s5, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30401Cu; }
        if (ctx->pc != 0x30401Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30401Cu; }
        if (ctx->pc != 0x30401Cu) { return; }
    }
    ctx->pc = 0x30401Cu;
label_30401c:
    // 0x30401c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x30401cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_304020:
    // 0x304020: 0x0  nop
    ctx->pc = 0x304020u;
    // NOP
label_304024:
    // 0x304024: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x304024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_304028:
    // 0x304028: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_30402c:
    if (ctx->pc == 0x30402Cu) {
        ctx->pc = 0x30402Cu;
            // 0x30402c: 0x8eb90000  lw          $t9, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x304030u;
        goto label_304030;
    }
    ctx->pc = 0x304028u;
    {
        const bool branch_taken_0x304028 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x304028) {
            ctx->pc = 0x30402Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304028u;
            // 0x30402c: 0x8eb90000  lw          $t9, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x304040u;
            goto label_304040;
        }
    }
    ctx->pc = 0x304030u;
label_304030:
    // 0x304030: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x304030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_304034:
    // 0x304034: 0x56c2003c  bnel        $s6, $v0, . + 4 + (0x3C << 2)
label_304038:
    if (ctx->pc == 0x304038u) {
        ctx->pc = 0x304038u;
            // 0x304038: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x30403Cu;
        goto label_30403c;
    }
    ctx->pc = 0x304034u;
    {
        const bool branch_taken_0x304034 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x304034) {
            ctx->pc = 0x304038u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304034u;
            // 0x304038: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x304128u;
            goto label_304128;
        }
    }
    ctx->pc = 0x30403Cu;
label_30403c:
    // 0x30403c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x30403cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_304040:
    // 0x304040: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x304040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_304044:
    // 0x304044: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x304044u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_304048:
    // 0x304048: 0x320f809  jalr        $t9
label_30404c:
    if (ctx->pc == 0x30404Cu) {
        ctx->pc = 0x30404Cu;
            // 0x30404c: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->pc = 0x304050u;
        goto label_304050;
    }
    ctx->pc = 0x304048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x304050u);
        ctx->pc = 0x30404Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304048u;
            // 0x30404c: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x304050u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x304050u; }
            if (ctx->pc != 0x304050u) { return; }
        }
        }
    }
    ctx->pc = 0x304050u;
label_304050:
    // 0x304050: 0x86230054  lh          $v1, 0x54($s1)
    ctx->pc = 0x304050u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
label_304054:
    // 0x304054: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x304054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_304058:
    // 0x304058: 0x16c20004  bne         $s6, $v0, . + 4 + (0x4 << 2)
label_30405c:
    if (ctx->pc == 0x30405Cu) {
        ctx->pc = 0x30405Cu;
            // 0x30405c: 0xa2a311a8  sb          $v1, 0x11A8($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 4520), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x304060u;
        goto label_304060;
    }
    ctx->pc = 0x304058u;
    {
        const bool branch_taken_0x304058 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x30405Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304058u;
            // 0x30405c: 0xa2a311a8  sb          $v1, 0x11A8($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 4520), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304058) {
            ctx->pc = 0x30406Cu;
            goto label_30406c;
        }
    }
    ctx->pc = 0x304060u;
label_304060:
    // 0x304060: 0xaea00e0c  sw          $zero, 0xE0C($s5)
    ctx->pc = 0x304060u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3596), GPR_U32(ctx, 0));
label_304064:
    // 0x304064: 0x10000029  b           . + 4 + (0x29 << 2)
label_304068:
    if (ctx->pc == 0x304068u) {
        ctx->pc = 0x304068u;
            // 0x304068: 0xaea00a80  sw          $zero, 0xA80($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 2688), GPR_U32(ctx, 0));
        ctx->pc = 0x30406Cu;
        goto label_30406c;
    }
    ctx->pc = 0x304064u;
    {
        const bool branch_taken_0x304064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304064u;
            // 0x304068: 0xaea00a80  sw          $zero, 0xA80($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 2688), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304064) {
            ctx->pc = 0x30410Cu;
            goto label_30410c;
        }
    }
    ctx->pc = 0x30406Cu;
label_30406c:
    // 0x30406c: 0x86220054  lh          $v0, 0x54($s1)
    ctx->pc = 0x30406cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
label_304070:
    // 0x304070: 0x52c20027  beql        $s6, $v0, . + 4 + (0x27 << 2)
label_304074:
    if (ctx->pc == 0x304074u) {
        ctx->pc = 0x304074u;
            // 0x304074: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x304078u;
        goto label_304078;
    }
    ctx->pc = 0x304070u;
    {
        const bool branch_taken_0x304070 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x304070) {
            ctx->pc = 0x304074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304070u;
            // 0x304074: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x304110u;
            goto label_304110;
        }
    }
    ctx->pc = 0x304078u;
label_304078:
    // 0x304078: 0x8ea20e0c  lw          $v0, 0xE0C($s5)
    ctx->pc = 0x304078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3596)));
label_30407c:
    // 0x30407c: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x30407cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_304080:
    // 0x304080: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x304080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_304084:
    // 0x304084: 0xaea20e0c  sw          $v0, 0xE0C($s5)
    ctx->pc = 0x304084u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3596), GPR_U32(ctx, 2));
label_304088:
    // 0x304088: 0x8ea20e34  lw          $v0, 0xE34($s5)
    ctx->pc = 0x304088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
label_30408c:
    // 0x30408c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_304090:
    if (ctx->pc == 0x304090u) {
        ctx->pc = 0x304090u;
            // 0x304090: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x304094u;
        goto label_304094;
    }
    ctx->pc = 0x30408Cu;
    {
        const bool branch_taken_0x30408c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x304090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30408Cu;
            // 0x304090: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30408c) {
            ctx->pc = 0x3040A4u;
            goto label_3040a4;
        }
    }
    ctx->pc = 0x304094u;
label_304094:
    // 0x304094: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x304094u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_304098:
    // 0x304098: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_30409c:
    if (ctx->pc == 0x30409Cu) {
        ctx->pc = 0x3040A0u;
        goto label_3040a0;
    }
    ctx->pc = 0x304098u;
    {
        const bool branch_taken_0x304098 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x304098) {
            ctx->pc = 0x3040A4u;
            goto label_3040a4;
        }
    }
    ctx->pc = 0x3040A0u;
label_3040a0:
    // 0x3040a0: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x3040a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3040a4:
    // 0x3040a4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_3040a8:
    if (ctx->pc == 0x3040A8u) {
        ctx->pc = 0x3040ACu;
        goto label_3040ac;
    }
    ctx->pc = 0x3040A4u;
    {
        const bool branch_taken_0x3040a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3040a4) {
            ctx->pc = 0x3040C0u;
            goto label_3040c0;
        }
    }
    ctx->pc = 0x3040ACu;
label_3040ac:
    // 0x3040ac: 0xc075eb4  jal         func_1D7AD0
label_3040b0:
    if (ctx->pc == 0x3040B0u) {
        ctx->pc = 0x3040B0u;
            // 0x3040b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3040B4u;
        goto label_3040b4;
    }
    ctx->pc = 0x3040ACu;
    SET_GPR_U32(ctx, 31, 0x3040B4u);
    ctx->pc = 0x3040B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3040ACu;
            // 0x3040b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3040B4u; }
        if (ctx->pc != 0x3040B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3040B4u; }
        if (ctx->pc != 0x3040B4u) { return; }
    }
    ctx->pc = 0x3040B4u;
label_3040b4:
    // 0x3040b4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3040b8:
    if (ctx->pc == 0x3040B8u) {
        ctx->pc = 0x3040BCu;
        goto label_3040bc;
    }
    ctx->pc = 0x3040B4u;
    {
        const bool branch_taken_0x3040b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3040b4) {
            ctx->pc = 0x3040C0u;
            goto label_3040c0;
        }
    }
    ctx->pc = 0x3040BCu;
label_3040bc:
    // 0x3040bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3040bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3040c0:
    // 0x3040c0: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
label_3040c4:
    if (ctx->pc == 0x3040C4u) {
        ctx->pc = 0x3040C4u;
            // 0x3040c4: 0x8ea30e0c  lw          $v1, 0xE0C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3596)));
        ctx->pc = 0x3040C8u;
        goto label_3040c8;
    }
    ctx->pc = 0x3040C0u;
    {
        const bool branch_taken_0x3040c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3040c0) {
            ctx->pc = 0x3040C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3040C0u;
            // 0x3040c4: 0x8ea30e0c  lw          $v1, 0xE0C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3596)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3040DCu;
            goto label_3040dc;
        }
    }
    ctx->pc = 0x3040C8u;
label_3040c8:
    // 0x3040c8: 0x8ea30e34  lw          $v1, 0xE34($s5)
    ctx->pc = 0x3040c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
label_3040cc:
    // 0x3040cc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3040ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3040d0:
    // 0x3040d0: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_3040d4:
    if (ctx->pc == 0x3040D4u) {
        ctx->pc = 0x3040D8u;
        goto label_3040d8;
    }
    ctx->pc = 0x3040D0u;
    {
        const bool branch_taken_0x3040d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3040d0) {
            ctx->pc = 0x30410Cu;
            goto label_30410c;
        }
    }
    ctx->pc = 0x3040D8u;
label_3040d8:
    // 0x3040d8: 0x8ea30e0c  lw          $v1, 0xE0C($s5)
    ctx->pc = 0x3040d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3596)));
label_3040dc:
    // 0x3040dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3040dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3040e0:
    // 0x3040e0: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_3040e4:
    if (ctx->pc == 0x3040E4u) {
        ctx->pc = 0x3040E8u;
        goto label_3040e8;
    }
    ctx->pc = 0x3040E0u;
    {
        const bool branch_taken_0x3040e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3040e0) {
            ctx->pc = 0x30410Cu;
            goto label_30410c;
        }
    }
    ctx->pc = 0x3040E8u;
label_3040e8:
    // 0x3040e8: 0xc040180  jal         func_100600
label_3040ec:
    if (ctx->pc == 0x3040ECu) {
        ctx->pc = 0x3040ECu;
            // 0x3040ec: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->pc = 0x3040F0u;
        goto label_3040f0;
    }
    ctx->pc = 0x3040E8u;
    SET_GPR_U32(ctx, 31, 0x3040F0u);
    ctx->pc = 0x3040ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3040E8u;
            // 0x3040ec: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3040F0u; }
        if (ctx->pc != 0x3040F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3040F0u; }
        if (ctx->pc != 0x3040F0u) { return; }
    }
    ctx->pc = 0x3040F0u;
label_3040f0:
    // 0x3040f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3040f4:
    if (ctx->pc == 0x3040F4u) {
        ctx->pc = 0x3040F8u;
        goto label_3040f8;
    }
    ctx->pc = 0x3040F0u;
    {
        const bool branch_taken_0x3040f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3040f0) {
            ctx->pc = 0x30410Cu;
            goto label_30410c;
        }
    }
    ctx->pc = 0x3040F8u;
label_3040f8:
    // 0x3040f8: 0x8ea50d98  lw          $a1, 0xD98($s5)
    ctx->pc = 0x3040f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3480)));
label_3040fc:
    // 0x3040fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3040fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_304100:
    // 0x304100: 0x8ea60e0c  lw          $a2, 0xE0C($s5)
    ctx->pc = 0x304100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3596)));
label_304104:
    // 0x304104: 0xc0f3e5c  jal         func_3CF970
label_304108:
    if (ctx->pc == 0x304108u) {
        ctx->pc = 0x304108u;
            // 0x304108: 0x26a70e0c  addiu       $a3, $s5, 0xE0C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 3596));
        ctx->pc = 0x30410Cu;
        goto label_30410c;
    }
    ctx->pc = 0x304104u;
    SET_GPR_U32(ctx, 31, 0x30410Cu);
    ctx->pc = 0x304108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304104u;
            // 0x304108: 0x26a70e0c  addiu       $a3, $s5, 0xE0C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 3596));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3CF970u;
    if (runtime->hasFunction(0x3CF970u)) {
        auto targetFn = runtime->lookupFunction(0x3CF970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30410Cu; }
        if (ctx->pc != 0x30410Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CF970_0x3cf970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30410Cu; }
        if (ctx->pc != 0x30410Cu) { return; }
    }
    ctx->pc = 0x30410Cu;
label_30410c:
    // 0x30410c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x30410cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_304110:
    // 0x304110: 0xc07649c  jal         func_1D9270
label_304114:
    if (ctx->pc == 0x304114u) {
        ctx->pc = 0x304114u;
            // 0x304114: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x304118u;
        goto label_304118;
    }
    ctx->pc = 0x304110u;
    SET_GPR_U32(ctx, 31, 0x304118u);
    ctx->pc = 0x304114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304110u;
            // 0x304114: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304118u; }
        if (ctx->pc != 0x304118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304118u; }
        if (ctx->pc != 0x304118u) { return; }
    }
    ctx->pc = 0x304118u;
label_304118:
    // 0x304118: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x304118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30411c:
    // 0x30411c: 0x10000002  b           . + 4 + (0x2 << 2)
label_304120:
    if (ctx->pc == 0x304120u) {
        ctx->pc = 0x304124u;
        goto label_304124;
    }
    ctx->pc = 0x30411Cu;
    {
        const bool branch_taken_0x30411c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30411c) {
            ctx->pc = 0x304128u;
            goto label_304128;
        }
    }
    ctx->pc = 0x304124u;
label_304124:
    // 0x304124: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x304124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304128:
    // 0x304128: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x304128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_30412c:
    // 0x30412c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x30412cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_304130:
    // 0x304130: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x304130u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_304134:
    // 0x304134: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x304134u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_304138:
    // 0x304138: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x304138u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30413c:
    // 0x30413c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30413cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_304140:
    // 0x304140: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x304140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_304144:
    // 0x304144: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x304144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_304148:
    // 0x304148: 0x3e00008  jr          $ra
label_30414c:
    if (ctx->pc == 0x30414Cu) {
        ctx->pc = 0x30414Cu;
            // 0x30414c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x304150u;
        goto label_fallthrough_0x304148;
    }
    ctx->pc = 0x304148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30414Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304148u;
            // 0x30414c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x304148:
    ctx->pc = 0x304150u;
}
