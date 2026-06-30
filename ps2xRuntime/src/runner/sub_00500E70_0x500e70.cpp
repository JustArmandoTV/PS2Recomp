#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00500E70
// Address: 0x500e70 - 0x501120
void sub_00500E70_0x500e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00500E70_0x500e70");
#endif

    switch (ctx->pc) {
        case 0x500e70u: goto label_500e70;
        case 0x500e74u: goto label_500e74;
        case 0x500e78u: goto label_500e78;
        case 0x500e7cu: goto label_500e7c;
        case 0x500e80u: goto label_500e80;
        case 0x500e84u: goto label_500e84;
        case 0x500e88u: goto label_500e88;
        case 0x500e8cu: goto label_500e8c;
        case 0x500e90u: goto label_500e90;
        case 0x500e94u: goto label_500e94;
        case 0x500e98u: goto label_500e98;
        case 0x500e9cu: goto label_500e9c;
        case 0x500ea0u: goto label_500ea0;
        case 0x500ea4u: goto label_500ea4;
        case 0x500ea8u: goto label_500ea8;
        case 0x500eacu: goto label_500eac;
        case 0x500eb0u: goto label_500eb0;
        case 0x500eb4u: goto label_500eb4;
        case 0x500eb8u: goto label_500eb8;
        case 0x500ebcu: goto label_500ebc;
        case 0x500ec0u: goto label_500ec0;
        case 0x500ec4u: goto label_500ec4;
        case 0x500ec8u: goto label_500ec8;
        case 0x500eccu: goto label_500ecc;
        case 0x500ed0u: goto label_500ed0;
        case 0x500ed4u: goto label_500ed4;
        case 0x500ed8u: goto label_500ed8;
        case 0x500edcu: goto label_500edc;
        case 0x500ee0u: goto label_500ee0;
        case 0x500ee4u: goto label_500ee4;
        case 0x500ee8u: goto label_500ee8;
        case 0x500eecu: goto label_500eec;
        case 0x500ef0u: goto label_500ef0;
        case 0x500ef4u: goto label_500ef4;
        case 0x500ef8u: goto label_500ef8;
        case 0x500efcu: goto label_500efc;
        case 0x500f00u: goto label_500f00;
        case 0x500f04u: goto label_500f04;
        case 0x500f08u: goto label_500f08;
        case 0x500f0cu: goto label_500f0c;
        case 0x500f10u: goto label_500f10;
        case 0x500f14u: goto label_500f14;
        case 0x500f18u: goto label_500f18;
        case 0x500f1cu: goto label_500f1c;
        case 0x500f20u: goto label_500f20;
        case 0x500f24u: goto label_500f24;
        case 0x500f28u: goto label_500f28;
        case 0x500f2cu: goto label_500f2c;
        case 0x500f30u: goto label_500f30;
        case 0x500f34u: goto label_500f34;
        case 0x500f38u: goto label_500f38;
        case 0x500f3cu: goto label_500f3c;
        case 0x500f40u: goto label_500f40;
        case 0x500f44u: goto label_500f44;
        case 0x500f48u: goto label_500f48;
        case 0x500f4cu: goto label_500f4c;
        case 0x500f50u: goto label_500f50;
        case 0x500f54u: goto label_500f54;
        case 0x500f58u: goto label_500f58;
        case 0x500f5cu: goto label_500f5c;
        case 0x500f60u: goto label_500f60;
        case 0x500f64u: goto label_500f64;
        case 0x500f68u: goto label_500f68;
        case 0x500f6cu: goto label_500f6c;
        case 0x500f70u: goto label_500f70;
        case 0x500f74u: goto label_500f74;
        case 0x500f78u: goto label_500f78;
        case 0x500f7cu: goto label_500f7c;
        case 0x500f80u: goto label_500f80;
        case 0x500f84u: goto label_500f84;
        case 0x500f88u: goto label_500f88;
        case 0x500f8cu: goto label_500f8c;
        case 0x500f90u: goto label_500f90;
        case 0x500f94u: goto label_500f94;
        case 0x500f98u: goto label_500f98;
        case 0x500f9cu: goto label_500f9c;
        case 0x500fa0u: goto label_500fa0;
        case 0x500fa4u: goto label_500fa4;
        case 0x500fa8u: goto label_500fa8;
        case 0x500facu: goto label_500fac;
        case 0x500fb0u: goto label_500fb0;
        case 0x500fb4u: goto label_500fb4;
        case 0x500fb8u: goto label_500fb8;
        case 0x500fbcu: goto label_500fbc;
        case 0x500fc0u: goto label_500fc0;
        case 0x500fc4u: goto label_500fc4;
        case 0x500fc8u: goto label_500fc8;
        case 0x500fccu: goto label_500fcc;
        case 0x500fd0u: goto label_500fd0;
        case 0x500fd4u: goto label_500fd4;
        case 0x500fd8u: goto label_500fd8;
        case 0x500fdcu: goto label_500fdc;
        case 0x500fe0u: goto label_500fe0;
        case 0x500fe4u: goto label_500fe4;
        case 0x500fe8u: goto label_500fe8;
        case 0x500fecu: goto label_500fec;
        case 0x500ff0u: goto label_500ff0;
        case 0x500ff4u: goto label_500ff4;
        case 0x500ff8u: goto label_500ff8;
        case 0x500ffcu: goto label_500ffc;
        case 0x501000u: goto label_501000;
        case 0x501004u: goto label_501004;
        case 0x501008u: goto label_501008;
        case 0x50100cu: goto label_50100c;
        case 0x501010u: goto label_501010;
        case 0x501014u: goto label_501014;
        case 0x501018u: goto label_501018;
        case 0x50101cu: goto label_50101c;
        case 0x501020u: goto label_501020;
        case 0x501024u: goto label_501024;
        case 0x501028u: goto label_501028;
        case 0x50102cu: goto label_50102c;
        case 0x501030u: goto label_501030;
        case 0x501034u: goto label_501034;
        case 0x501038u: goto label_501038;
        case 0x50103cu: goto label_50103c;
        case 0x501040u: goto label_501040;
        case 0x501044u: goto label_501044;
        case 0x501048u: goto label_501048;
        case 0x50104cu: goto label_50104c;
        case 0x501050u: goto label_501050;
        case 0x501054u: goto label_501054;
        case 0x501058u: goto label_501058;
        case 0x50105cu: goto label_50105c;
        case 0x501060u: goto label_501060;
        case 0x501064u: goto label_501064;
        case 0x501068u: goto label_501068;
        case 0x50106cu: goto label_50106c;
        case 0x501070u: goto label_501070;
        case 0x501074u: goto label_501074;
        case 0x501078u: goto label_501078;
        case 0x50107cu: goto label_50107c;
        case 0x501080u: goto label_501080;
        case 0x501084u: goto label_501084;
        case 0x501088u: goto label_501088;
        case 0x50108cu: goto label_50108c;
        case 0x501090u: goto label_501090;
        case 0x501094u: goto label_501094;
        case 0x501098u: goto label_501098;
        case 0x50109cu: goto label_50109c;
        case 0x5010a0u: goto label_5010a0;
        case 0x5010a4u: goto label_5010a4;
        case 0x5010a8u: goto label_5010a8;
        case 0x5010acu: goto label_5010ac;
        case 0x5010b0u: goto label_5010b0;
        case 0x5010b4u: goto label_5010b4;
        case 0x5010b8u: goto label_5010b8;
        case 0x5010bcu: goto label_5010bc;
        case 0x5010c0u: goto label_5010c0;
        case 0x5010c4u: goto label_5010c4;
        case 0x5010c8u: goto label_5010c8;
        case 0x5010ccu: goto label_5010cc;
        case 0x5010d0u: goto label_5010d0;
        case 0x5010d4u: goto label_5010d4;
        case 0x5010d8u: goto label_5010d8;
        case 0x5010dcu: goto label_5010dc;
        case 0x5010e0u: goto label_5010e0;
        case 0x5010e4u: goto label_5010e4;
        case 0x5010e8u: goto label_5010e8;
        case 0x5010ecu: goto label_5010ec;
        case 0x5010f0u: goto label_5010f0;
        case 0x5010f4u: goto label_5010f4;
        case 0x5010f8u: goto label_5010f8;
        case 0x5010fcu: goto label_5010fc;
        case 0x501100u: goto label_501100;
        case 0x501104u: goto label_501104;
        case 0x501108u: goto label_501108;
        case 0x50110cu: goto label_50110c;
        case 0x501110u: goto label_501110;
        case 0x501114u: goto label_501114;
        case 0x501118u: goto label_501118;
        case 0x50111cu: goto label_50111c;
        default: break;
    }

    ctx->pc = 0x500e70u;

label_500e70:
    // 0x500e70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x500e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_500e74:
    // 0x500e74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x500e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_500e78:
    // 0x500e78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x500e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_500e7c:
    // 0x500e7c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x500e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_500e80:
    // 0x500e80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x500e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_500e84:
    // 0x500e84: 0xafa5002c  sw          $a1, 0x2C($sp)
    ctx->pc = 0x500e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 5));
label_500e88:
    // 0x500e88: 0x2490007c  addiu       $s0, $a0, 0x7C
    ctx->pc = 0x500e88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 124));
label_500e8c:
    // 0x500e8c: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x500e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_500e90:
    // 0x500e90: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x500e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_500e94:
    // 0x500e94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x500e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_500e98:
    // 0x500e98: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x500e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_500e9c:
    // 0x500e9c: 0xc0b4904  jal         func_2D2410
label_500ea0:
    if (ctx->pc == 0x500EA0u) {
        ctx->pc = 0x500EA0u;
            // 0x500ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x500EA4u;
        goto label_500ea4;
    }
    ctx->pc = 0x500E9Cu;
    SET_GPR_U32(ctx, 31, 0x500EA4u);
    ctx->pc = 0x500EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x500E9Cu;
            // 0x500ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2410u;
    if (runtime->hasFunction(0x2D2410u)) {
        auto targetFn = runtime->lookupFunction(0x2D2410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500EA4u; }
        if (ctx->pc != 0x500EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2410_0x2d2410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500EA4u; }
        if (ctx->pc != 0x500EA4u) { return; }
    }
    ctx->pc = 0x500EA4u;
label_500ea4:
    // 0x500ea4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x500ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_500ea8:
    // 0x500ea8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x500ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_500eac:
    // 0x500eac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x500eacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_500eb0:
    // 0x500eb0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x500eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_500eb4:
    // 0x500eb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x500eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_500eb8:
    // 0x500eb8: 0x3e00008  jr          $ra
label_500ebc:
    if (ctx->pc == 0x500EBCu) {
        ctx->pc = 0x500EBCu;
            // 0x500ebc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x500EC0u;
        goto label_500ec0;
    }
    ctx->pc = 0x500EB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x500EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x500EB8u;
            // 0x500ebc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x500EC0u;
label_500ec0:
    // 0x500ec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x500ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_500ec4:
    // 0x500ec4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x500ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_500ec8:
    // 0x500ec8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x500ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_500ecc:
    // 0x500ecc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x500eccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_500ed0:
    // 0x500ed0: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x500ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_500ed4:
    // 0x500ed4: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_500ed8:
    if (ctx->pc == 0x500ED8u) {
        ctx->pc = 0x500ED8u;
            // 0x500ed8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x500EDCu;
        goto label_500edc;
    }
    ctx->pc = 0x500ED4u;
    {
        const bool branch_taken_0x500ed4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x500ed4) {
            ctx->pc = 0x500ED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x500ED4u;
            // 0x500ed8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x500EFCu;
            goto label_500efc;
        }
    }
    ctx->pc = 0x500EDCu;
label_500edc:
    // 0x500edc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_500ee0:
    if (ctx->pc == 0x500EE0u) {
        ctx->pc = 0x500EE0u;
            // 0x500ee0: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x500EE4u;
        goto label_500ee4;
    }
    ctx->pc = 0x500EDCu;
    {
        const bool branch_taken_0x500edc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x500edc) {
            ctx->pc = 0x500EE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x500EDCu;
            // 0x500ee0: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x500EF8u;
            goto label_500ef8;
        }
    }
    ctx->pc = 0x500EE4u;
label_500ee4:
    // 0x500ee4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x500ee4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_500ee8:
    // 0x500ee8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x500ee8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_500eec:
    // 0x500eec: 0x320f809  jalr        $t9
label_500ef0:
    if (ctx->pc == 0x500EF0u) {
        ctx->pc = 0x500EF0u;
            // 0x500ef0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x500EF4u;
        goto label_500ef4;
    }
    ctx->pc = 0x500EECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x500EF4u);
        ctx->pc = 0x500EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x500EECu;
            // 0x500ef0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x500EF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x500EF4u; }
            if (ctx->pc != 0x500EF4u) { return; }
        }
        }
    }
    ctx->pc = 0x500EF4u;
label_500ef4:
    // 0x500ef4: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x500ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_500ef8:
    // 0x500ef8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x500ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_500efc:
    // 0x500efc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x500efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_500f00:
    // 0x500f00: 0x3e00008  jr          $ra
label_500f04:
    if (ctx->pc == 0x500F04u) {
        ctx->pc = 0x500F04u;
            // 0x500f04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x500F08u;
        goto label_500f08;
    }
    ctx->pc = 0x500F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x500F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x500F00u;
            // 0x500f04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x500F08u;
label_500f08:
    // 0x500f08: 0x0  nop
    ctx->pc = 0x500f08u;
    // NOP
label_500f0c:
    // 0x500f0c: 0x0  nop
    ctx->pc = 0x500f0cu;
    // NOP
label_500f10:
    // 0x500f10: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x500f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_500f14:
    // 0x500f14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x500f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_500f18:
    // 0x500f18: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x500f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_500f1c:
    // 0x500f1c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x500f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_500f20:
    // 0x500f20: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x500f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_500f24:
    // 0x500f24: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x500f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_500f28:
    // 0x500f28: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x500f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_500f2c:
    // 0x500f2c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x500f2cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_500f30:
    // 0x500f30: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x500f30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_500f34:
    // 0x500f34: 0x8c50e3e0  lw          $s0, -0x1C20($v0)
    ctx->pc = 0x500f34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_500f38:
    // 0x500f38: 0xc48c0038  lwc1        $f12, 0x38($a0)
    ctx->pc = 0x500f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_500f3c:
    // 0x500f3c: 0xc049514  jal         func_125450
label_500f40:
    if (ctx->pc == 0x500F40u) {
        ctx->pc = 0x500F40u;
            // 0x500f40: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x500F44u;
        goto label_500f44;
    }
    ctx->pc = 0x500F3Cu;
    SET_GPR_U32(ctx, 31, 0x500F44u);
    ctx->pc = 0x500F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x500F3Cu;
            // 0x500f40: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500F44u; }
        if (ctx->pc != 0x500F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500F44u; }
        if (ctx->pc != 0x500F44u) { return; }
    }
    ctx->pc = 0x500F44u;
label_500f44:
    // 0x500f44: 0xc0474b6  jal         func_11D2D8
label_500f48:
    if (ctx->pc == 0x500F48u) {
        ctx->pc = 0x500F48u;
            // 0x500f48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x500F4Cu;
        goto label_500f4c;
    }
    ctx->pc = 0x500F44u;
    SET_GPR_U32(ctx, 31, 0x500F4Cu);
    ctx->pc = 0x500F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x500F44u;
            // 0x500f48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500F4Cu; }
        if (ctx->pc != 0x500F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500F4Cu; }
        if (ctx->pc != 0x500F4Cu) { return; }
    }
    ctx->pc = 0x500F4Cu;
label_500f4c:
    // 0x500f4c: 0xc0497dc  jal         func_125F70
label_500f50:
    if (ctx->pc == 0x500F50u) {
        ctx->pc = 0x500F50u;
            // 0x500f50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x500F54u;
        goto label_500f54;
    }
    ctx->pc = 0x500F4Cu;
    SET_GPR_U32(ctx, 31, 0x500F54u);
    ctx->pc = 0x500F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x500F4Cu;
            // 0x500f50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500F54u; }
        if (ctx->pc != 0x500F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500F54u; }
        if (ctx->pc != 0x500F54u) { return; }
    }
    ctx->pc = 0x500F54u;
label_500f54:
    // 0x500f54: 0xc66c0034  lwc1        $f12, 0x34($s3)
    ctx->pc = 0x500f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_500f58:
    // 0x500f58: 0xc049514  jal         func_125450
label_500f5c:
    if (ctx->pc == 0x500F5Cu) {
        ctx->pc = 0x500F5Cu;
            // 0x500f5c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x500F60u;
        goto label_500f60;
    }
    ctx->pc = 0x500F58u;
    SET_GPR_U32(ctx, 31, 0x500F60u);
    ctx->pc = 0x500F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x500F58u;
            // 0x500f5c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500F60u; }
        if (ctx->pc != 0x500F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500F60u; }
        if (ctx->pc != 0x500F60u) { return; }
    }
    ctx->pc = 0x500F60u;
label_500f60:
    // 0x500f60: 0xc0474b6  jal         func_11D2D8
label_500f64:
    if (ctx->pc == 0x500F64u) {
        ctx->pc = 0x500F64u;
            // 0x500f64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x500F68u;
        goto label_500f68;
    }
    ctx->pc = 0x500F60u;
    SET_GPR_U32(ctx, 31, 0x500F68u);
    ctx->pc = 0x500F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x500F60u;
            // 0x500f64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500F68u; }
        if (ctx->pc != 0x500F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500F68u; }
        if (ctx->pc != 0x500F68u) { return; }
    }
    ctx->pc = 0x500F68u;
label_500f68:
    // 0x500f68: 0xc0497dc  jal         func_125F70
label_500f6c:
    if (ctx->pc == 0x500F6Cu) {
        ctx->pc = 0x500F6Cu;
            // 0x500f6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x500F70u;
        goto label_500f70;
    }
    ctx->pc = 0x500F68u;
    SET_GPR_U32(ctx, 31, 0x500F70u);
    ctx->pc = 0x500F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x500F68u;
            // 0x500f6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500F70u; }
        if (ctx->pc != 0x500F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500F70u; }
        if (ctx->pc != 0x500F70u) { return; }
    }
    ctx->pc = 0x500F70u;
label_500f70:
    // 0x500f70: 0xc66c0030  lwc1        $f12, 0x30($s3)
    ctx->pc = 0x500f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_500f74:
    // 0x500f74: 0xc049514  jal         func_125450
label_500f78:
    if (ctx->pc == 0x500F78u) {
        ctx->pc = 0x500F78u;
            // 0x500f78: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x500F7Cu;
        goto label_500f7c;
    }
    ctx->pc = 0x500F74u;
    SET_GPR_U32(ctx, 31, 0x500F7Cu);
    ctx->pc = 0x500F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x500F74u;
            // 0x500f78: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500F7Cu; }
        if (ctx->pc != 0x500F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500F7Cu; }
        if (ctx->pc != 0x500F7Cu) { return; }
    }
    ctx->pc = 0x500F7Cu;
label_500f7c:
    // 0x500f7c: 0xc0474b6  jal         func_11D2D8
label_500f80:
    if (ctx->pc == 0x500F80u) {
        ctx->pc = 0x500F80u;
            // 0x500f80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x500F84u;
        goto label_500f84;
    }
    ctx->pc = 0x500F7Cu;
    SET_GPR_U32(ctx, 31, 0x500F84u);
    ctx->pc = 0x500F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x500F7Cu;
            // 0x500f80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500F84u; }
        if (ctx->pc != 0x500F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500F84u; }
        if (ctx->pc != 0x500F84u) { return; }
    }
    ctx->pc = 0x500F84u;
label_500f84:
    // 0x500f84: 0xc0497dc  jal         func_125F70
label_500f88:
    if (ctx->pc == 0x500F88u) {
        ctx->pc = 0x500F88u;
            // 0x500f88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x500F8Cu;
        goto label_500f8c;
    }
    ctx->pc = 0x500F84u;
    SET_GPR_U32(ctx, 31, 0x500F8Cu);
    ctx->pc = 0x500F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x500F84u;
            // 0x500f88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500F8Cu; }
        if (ctx->pc != 0x500F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500F8Cu; }
        if (ctx->pc != 0x500F8Cu) { return; }
    }
    ctx->pc = 0x500F8Cu;
label_500f8c:
    // 0x500f8c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x500f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_500f90:
    // 0x500f90: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x500f90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_500f94:
    // 0x500f94: 0xe7b40074  swc1        $f20, 0x74($sp)
    ctx->pc = 0x500f94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_500f98:
    // 0x500f98: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x500f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_500f9c:
    // 0x500f9c: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x500f9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_500fa0:
    // 0x500fa0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x500fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_500fa4:
    // 0x500fa4: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x500fa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_500fa8:
    // 0x500fa8: 0x0  nop
    ctx->pc = 0x500fa8u;
    // NOP
label_500fac:
    // 0x500fac: 0x0  nop
    ctx->pc = 0x500facu;
    // NOP
label_500fb0:
    // 0x500fb0: 0x0  nop
    ctx->pc = 0x500fb0u;
    // NOP
label_500fb4:
    // 0x500fb4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_500fb8:
    if (ctx->pc == 0x500FB8u) {
        ctx->pc = 0x500FBCu;
        goto label_500fbc;
    }
    ctx->pc = 0x500FB4u;
    {
        const bool branch_taken_0x500fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x500fb4) {
            ctx->pc = 0x500FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_500fa0;
        }
    }
    ctx->pc = 0x500FBCu;
label_500fbc:
    // 0x500fbc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x500fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_500fc0:
    // 0x500fc0: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x500fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_500fc4:
    // 0x500fc4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x500fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_500fc8:
    // 0x500fc8: 0xc0a7a88  jal         func_29EA20
label_500fcc:
    if (ctx->pc == 0x500FCCu) {
        ctx->pc = 0x500FCCu;
            // 0x500fcc: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x500FD0u;
        goto label_500fd0;
    }
    ctx->pc = 0x500FC8u;
    SET_GPR_U32(ctx, 31, 0x500FD0u);
    ctx->pc = 0x500FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x500FC8u;
            // 0x500fcc: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500FD0u; }
        if (ctx->pc != 0x500FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500FD0u; }
        if (ctx->pc != 0x500FD0u) { return; }
    }
    ctx->pc = 0x500FD0u;
label_500fd0:
    // 0x500fd0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x500fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_500fd4:
    // 0x500fd4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x500fd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_500fd8:
    // 0x500fd8: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_500fdc:
    if (ctx->pc == 0x500FDCu) {
        ctx->pc = 0x500FDCu;
            // 0x500fdc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x500FE0u;
        goto label_500fe0;
    }
    ctx->pc = 0x500FD8u;
    {
        const bool branch_taken_0x500fd8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x500FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x500FD8u;
            // 0x500fdc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x500fd8) {
            ctx->pc = 0x500FF8u;
            goto label_500ff8;
        }
    }
    ctx->pc = 0x500FE0u;
label_500fe0:
    // 0x500fe0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x500fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_500fe4:
    // 0x500fe4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x500fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_500fe8:
    // 0x500fe8: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x500fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_500fec:
    // 0x500fec: 0xc0804bc  jal         func_2012F0
label_500ff0:
    if (ctx->pc == 0x500FF0u) {
        ctx->pc = 0x500FF0u;
            // 0x500ff0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x500FF4u;
        goto label_500ff4;
    }
    ctx->pc = 0x500FECu;
    SET_GPR_U32(ctx, 31, 0x500FF4u);
    ctx->pc = 0x500FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x500FECu;
            // 0x500ff0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500FF4u; }
        if (ctx->pc != 0x500FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500FF4u; }
        if (ctx->pc != 0x500FF4u) { return; }
    }
    ctx->pc = 0x500FF4u;
label_500ff4:
    // 0x500ff4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x500ff4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_500ff8:
    // 0x500ff8: 0xc6620018  lwc1        $f2, 0x18($s3)
    ctx->pc = 0x500ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_500ffc:
    // 0x500ffc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x500ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_501000:
    // 0x501000: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x501000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_501004:
    // 0x501004: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x501004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_501008:
    // 0x501008: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x501008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50100c:
    // 0x50100c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x50100cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_501010:
    // 0x501010: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x501010u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_501014:
    // 0x501014: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x501014u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_501018:
    // 0x501018: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x501018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
label_50101c:
    // 0x50101c: 0xc663002c  lwc1        $f3, 0x2C($s3)
    ctx->pc = 0x50101cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_501020:
    // 0x501020: 0xc6620028  lwc1        $f2, 0x28($s3)
    ctx->pc = 0x501020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_501024:
    // 0x501024: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x501024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_501028:
    // 0x501028: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x501028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50102c:
    // 0x50102c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x50102cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_501030:
    // 0x501030: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x501030u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_501034:
    // 0x501034: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x501034u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_501038:
    // 0x501038: 0xc0a3830  jal         func_28E0C0
label_50103c:
    if (ctx->pc == 0x50103Cu) {
        ctx->pc = 0x50103Cu;
            // 0x50103c: 0xe7a3006c  swc1        $f3, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->pc = 0x501040u;
        goto label_501040;
    }
    ctx->pc = 0x501038u;
    SET_GPR_U32(ctx, 31, 0x501040u);
    ctx->pc = 0x50103Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501038u;
            // 0x50103c: 0xe7a3006c  swc1        $f3, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501040u; }
        if (ctx->pc != 0x501040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501040u; }
        if (ctx->pc != 0x501040u) { return; }
    }
    ctx->pc = 0x501040u;
label_501040:
    // 0x501040: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x501040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_501044:
    // 0x501044: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x501044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_501048:
    // 0x501048: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x501048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_50104c:
    // 0x50104c: 0xc0a7a88  jal         func_29EA20
label_501050:
    if (ctx->pc == 0x501050u) {
        ctx->pc = 0x501050u;
            // 0x501050: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x501054u;
        goto label_501054;
    }
    ctx->pc = 0x50104Cu;
    SET_GPR_U32(ctx, 31, 0x501054u);
    ctx->pc = 0x501050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50104Cu;
            // 0x501050: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501054u; }
        if (ctx->pc != 0x501054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x501054u; }
        if (ctx->pc != 0x501054u) { return; }
    }
    ctx->pc = 0x501054u;
label_501054:
    // 0x501054: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x501054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_501058:
    // 0x501058: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x501058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50105c:
    // 0x50105c: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_501060:
    if (ctx->pc == 0x501060u) {
        ctx->pc = 0x501060u;
            // 0x501060: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x501064u;
        goto label_501064;
    }
    ctx->pc = 0x50105Cu;
    {
        const bool branch_taken_0x50105c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x501060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50105Cu;
            // 0x501060: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50105c) {
            ctx->pc = 0x501090u;
            goto label_501090;
        }
    }
    ctx->pc = 0x501064u;
label_501064:
    // 0x501064: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x501064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_501068:
    // 0x501068: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x501068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50106c:
    // 0x50106c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x50106cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_501070:
    // 0x501070: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x501070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_501074:
    // 0x501074: 0xc08afe0  jal         func_22BF80
label_501078:
    if (ctx->pc == 0x501078u) {
        ctx->pc = 0x501078u;
            // 0x501078: 0x34470002  ori         $a3, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->pc = 0x50107Cu;
        goto label_50107c;
    }
    ctx->pc = 0x501074u;
    SET_GPR_U32(ctx, 31, 0x50107Cu);
    ctx->pc = 0x501078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501074u;
            // 0x501078: 0x34470002  ori         $a3, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BF80u;
    if (runtime->hasFunction(0x22BF80u)) {
        auto targetFn = runtime->lookupFunction(0x22BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50107Cu; }
        if (ctx->pc != 0x50107Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BF80_0x22bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50107Cu; }
        if (ctx->pc != 0x50107Cu) { return; }
    }
    ctx->pc = 0x50107Cu;
label_50107c:
    // 0x50107c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x50107cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_501080:
    // 0x501080: 0x244225d0  addiu       $v0, $v0, 0x25D0
    ctx->pc = 0x501080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9680));
label_501084:
    // 0x501084: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x501084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_501088:
    // 0x501088: 0xae200140  sw          $zero, 0x140($s1)
    ctx->pc = 0x501088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 0));
label_50108c:
    // 0x50108c: 0xae33000c  sw          $s3, 0xC($s1)
    ctx->pc = 0x50108cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 19));
label_501090:
    // 0x501090: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x501090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_501094:
    // 0x501094: 0xc08c798  jal         func_231E60
label_501098:
    if (ctx->pc == 0x501098u) {
        ctx->pc = 0x501098u;
            // 0x501098: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50109Cu;
        goto label_50109c;
    }
    ctx->pc = 0x501094u;
    SET_GPR_U32(ctx, 31, 0x50109Cu);
    ctx->pc = 0x501098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x501094u;
            // 0x501098: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50109Cu; }
        if (ctx->pc != 0x50109Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50109Cu; }
        if (ctx->pc != 0x50109Cu) { return; }
    }
    ctx->pc = 0x50109Cu;
label_50109c:
    // 0x50109c: 0xae710050  sw          $s1, 0x50($s3)
    ctx->pc = 0x50109cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 17));
label_5010a0:
    // 0x5010a0: 0x96430004  lhu         $v1, 0x4($s2)
    ctx->pc = 0x5010a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_5010a4:
    // 0x5010a4: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_5010a8:
    if (ctx->pc == 0x5010A8u) {
        ctx->pc = 0x5010A8u;
            // 0x5010a8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x5010ACu;
        goto label_5010ac;
    }
    ctx->pc = 0x5010A4u;
    {
        const bool branch_taken_0x5010a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5010a4) {
            ctx->pc = 0x5010A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5010A4u;
            // 0x5010a8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5010E8u;
            goto label_5010e8;
        }
    }
    ctx->pc = 0x5010ACu;
label_5010ac:
    // 0x5010ac: 0x86430006  lh          $v1, 0x6($s2)
    ctx->pc = 0x5010acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_5010b0:
    // 0x5010b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x5010b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_5010b4:
    // 0x5010b4: 0xa6430006  sh          $v1, 0x6($s2)
    ctx->pc = 0x5010b4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 3));
label_5010b8:
    // 0x5010b8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x5010b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_5010bc:
    // 0x5010bc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x5010bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_5010c0:
    // 0x5010c0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_5010c4:
    if (ctx->pc == 0x5010C4u) {
        ctx->pc = 0x5010C8u;
        goto label_5010c8;
    }
    ctx->pc = 0x5010C0u;
    {
        const bool branch_taken_0x5010c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x5010c0) {
            ctx->pc = 0x5010E4u;
            goto label_5010e4;
        }
    }
    ctx->pc = 0x5010C8u;
label_5010c8:
    // 0x5010c8: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_5010cc:
    if (ctx->pc == 0x5010CCu) {
        ctx->pc = 0x5010D0u;
        goto label_5010d0;
    }
    ctx->pc = 0x5010C8u;
    {
        const bool branch_taken_0x5010c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x5010c8) {
            ctx->pc = 0x5010E4u;
            goto label_5010e4;
        }
    }
    ctx->pc = 0x5010D0u;
label_5010d0:
    // 0x5010d0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x5010d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_5010d4:
    // 0x5010d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x5010d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5010d8:
    // 0x5010d8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x5010d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_5010dc:
    // 0x5010dc: 0x320f809  jalr        $t9
label_5010e0:
    if (ctx->pc == 0x5010E0u) {
        ctx->pc = 0x5010E0u;
            // 0x5010e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5010E4u;
        goto label_5010e4;
    }
    ctx->pc = 0x5010DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5010E4u);
        ctx->pc = 0x5010E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5010DCu;
            // 0x5010e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5010E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5010E4u; }
            if (ctx->pc != 0x5010E4u) { return; }
        }
        }
    }
    ctx->pc = 0x5010E4u;
label_5010e4:
    // 0x5010e4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x5010e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_5010e8:
    // 0x5010e8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x5010e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_5010ec:
    // 0x5010ec: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x5010ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_5010f0:
    // 0x5010f0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x5010f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_5010f4:
    // 0x5010f4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x5010f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5010f8:
    // 0x5010f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x5010f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5010fc:
    // 0x5010fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x5010fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_501100:
    // 0x501100: 0x3e00008  jr          $ra
label_501104:
    if (ctx->pc == 0x501104u) {
        ctx->pc = 0x501104u;
            // 0x501104: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x501108u;
        goto label_501108;
    }
    ctx->pc = 0x501100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x501104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x501100u;
            // 0x501104: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x501108u;
label_501108:
    // 0x501108: 0x0  nop
    ctx->pc = 0x501108u;
    // NOP
label_50110c:
    // 0x50110c: 0x0  nop
    ctx->pc = 0x50110cu;
    // NOP
label_501110:
    // 0x501110: 0x3e00008  jr          $ra
label_501114:
    if (ctx->pc == 0x501114u) {
        ctx->pc = 0x501118u;
        goto label_501118;
    }
    ctx->pc = 0x501110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x501118u;
label_501118:
    // 0x501118: 0x0  nop
    ctx->pc = 0x501118u;
    // NOP
label_50111c:
    // 0x50111c: 0x0  nop
    ctx->pc = 0x50111cu;
    // NOP
}
