#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00385DE0
// Address: 0x385de0 - 0x386110
void sub_00385DE0_0x385de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385DE0_0x385de0");
#endif

    switch (ctx->pc) {
        case 0x385de0u: goto label_385de0;
        case 0x385de4u: goto label_385de4;
        case 0x385de8u: goto label_385de8;
        case 0x385decu: goto label_385dec;
        case 0x385df0u: goto label_385df0;
        case 0x385df4u: goto label_385df4;
        case 0x385df8u: goto label_385df8;
        case 0x385dfcu: goto label_385dfc;
        case 0x385e00u: goto label_385e00;
        case 0x385e04u: goto label_385e04;
        case 0x385e08u: goto label_385e08;
        case 0x385e0cu: goto label_385e0c;
        case 0x385e10u: goto label_385e10;
        case 0x385e14u: goto label_385e14;
        case 0x385e18u: goto label_385e18;
        case 0x385e1cu: goto label_385e1c;
        case 0x385e20u: goto label_385e20;
        case 0x385e24u: goto label_385e24;
        case 0x385e28u: goto label_385e28;
        case 0x385e2cu: goto label_385e2c;
        case 0x385e30u: goto label_385e30;
        case 0x385e34u: goto label_385e34;
        case 0x385e38u: goto label_385e38;
        case 0x385e3cu: goto label_385e3c;
        case 0x385e40u: goto label_385e40;
        case 0x385e44u: goto label_385e44;
        case 0x385e48u: goto label_385e48;
        case 0x385e4cu: goto label_385e4c;
        case 0x385e50u: goto label_385e50;
        case 0x385e54u: goto label_385e54;
        case 0x385e58u: goto label_385e58;
        case 0x385e5cu: goto label_385e5c;
        case 0x385e60u: goto label_385e60;
        case 0x385e64u: goto label_385e64;
        case 0x385e68u: goto label_385e68;
        case 0x385e6cu: goto label_385e6c;
        case 0x385e70u: goto label_385e70;
        case 0x385e74u: goto label_385e74;
        case 0x385e78u: goto label_385e78;
        case 0x385e7cu: goto label_385e7c;
        case 0x385e80u: goto label_385e80;
        case 0x385e84u: goto label_385e84;
        case 0x385e88u: goto label_385e88;
        case 0x385e8cu: goto label_385e8c;
        case 0x385e90u: goto label_385e90;
        case 0x385e94u: goto label_385e94;
        case 0x385e98u: goto label_385e98;
        case 0x385e9cu: goto label_385e9c;
        case 0x385ea0u: goto label_385ea0;
        case 0x385ea4u: goto label_385ea4;
        case 0x385ea8u: goto label_385ea8;
        case 0x385eacu: goto label_385eac;
        case 0x385eb0u: goto label_385eb0;
        case 0x385eb4u: goto label_385eb4;
        case 0x385eb8u: goto label_385eb8;
        case 0x385ebcu: goto label_385ebc;
        case 0x385ec0u: goto label_385ec0;
        case 0x385ec4u: goto label_385ec4;
        case 0x385ec8u: goto label_385ec8;
        case 0x385eccu: goto label_385ecc;
        case 0x385ed0u: goto label_385ed0;
        case 0x385ed4u: goto label_385ed4;
        case 0x385ed8u: goto label_385ed8;
        case 0x385edcu: goto label_385edc;
        case 0x385ee0u: goto label_385ee0;
        case 0x385ee4u: goto label_385ee4;
        case 0x385ee8u: goto label_385ee8;
        case 0x385eecu: goto label_385eec;
        case 0x385ef0u: goto label_385ef0;
        case 0x385ef4u: goto label_385ef4;
        case 0x385ef8u: goto label_385ef8;
        case 0x385efcu: goto label_385efc;
        case 0x385f00u: goto label_385f00;
        case 0x385f04u: goto label_385f04;
        case 0x385f08u: goto label_385f08;
        case 0x385f0cu: goto label_385f0c;
        case 0x385f10u: goto label_385f10;
        case 0x385f14u: goto label_385f14;
        case 0x385f18u: goto label_385f18;
        case 0x385f1cu: goto label_385f1c;
        case 0x385f20u: goto label_385f20;
        case 0x385f24u: goto label_385f24;
        case 0x385f28u: goto label_385f28;
        case 0x385f2cu: goto label_385f2c;
        case 0x385f30u: goto label_385f30;
        case 0x385f34u: goto label_385f34;
        case 0x385f38u: goto label_385f38;
        case 0x385f3cu: goto label_385f3c;
        case 0x385f40u: goto label_385f40;
        case 0x385f44u: goto label_385f44;
        case 0x385f48u: goto label_385f48;
        case 0x385f4cu: goto label_385f4c;
        case 0x385f50u: goto label_385f50;
        case 0x385f54u: goto label_385f54;
        case 0x385f58u: goto label_385f58;
        case 0x385f5cu: goto label_385f5c;
        case 0x385f60u: goto label_385f60;
        case 0x385f64u: goto label_385f64;
        case 0x385f68u: goto label_385f68;
        case 0x385f6cu: goto label_385f6c;
        case 0x385f70u: goto label_385f70;
        case 0x385f74u: goto label_385f74;
        case 0x385f78u: goto label_385f78;
        case 0x385f7cu: goto label_385f7c;
        case 0x385f80u: goto label_385f80;
        case 0x385f84u: goto label_385f84;
        case 0x385f88u: goto label_385f88;
        case 0x385f8cu: goto label_385f8c;
        case 0x385f90u: goto label_385f90;
        case 0x385f94u: goto label_385f94;
        case 0x385f98u: goto label_385f98;
        case 0x385f9cu: goto label_385f9c;
        case 0x385fa0u: goto label_385fa0;
        case 0x385fa4u: goto label_385fa4;
        case 0x385fa8u: goto label_385fa8;
        case 0x385facu: goto label_385fac;
        case 0x385fb0u: goto label_385fb0;
        case 0x385fb4u: goto label_385fb4;
        case 0x385fb8u: goto label_385fb8;
        case 0x385fbcu: goto label_385fbc;
        case 0x385fc0u: goto label_385fc0;
        case 0x385fc4u: goto label_385fc4;
        case 0x385fc8u: goto label_385fc8;
        case 0x385fccu: goto label_385fcc;
        case 0x385fd0u: goto label_385fd0;
        case 0x385fd4u: goto label_385fd4;
        case 0x385fd8u: goto label_385fd8;
        case 0x385fdcu: goto label_385fdc;
        case 0x385fe0u: goto label_385fe0;
        case 0x385fe4u: goto label_385fe4;
        case 0x385fe8u: goto label_385fe8;
        case 0x385fecu: goto label_385fec;
        case 0x385ff0u: goto label_385ff0;
        case 0x385ff4u: goto label_385ff4;
        case 0x385ff8u: goto label_385ff8;
        case 0x385ffcu: goto label_385ffc;
        case 0x386000u: goto label_386000;
        case 0x386004u: goto label_386004;
        case 0x386008u: goto label_386008;
        case 0x38600cu: goto label_38600c;
        case 0x386010u: goto label_386010;
        case 0x386014u: goto label_386014;
        case 0x386018u: goto label_386018;
        case 0x38601cu: goto label_38601c;
        case 0x386020u: goto label_386020;
        case 0x386024u: goto label_386024;
        case 0x386028u: goto label_386028;
        case 0x38602cu: goto label_38602c;
        case 0x386030u: goto label_386030;
        case 0x386034u: goto label_386034;
        case 0x386038u: goto label_386038;
        case 0x38603cu: goto label_38603c;
        case 0x386040u: goto label_386040;
        case 0x386044u: goto label_386044;
        case 0x386048u: goto label_386048;
        case 0x38604cu: goto label_38604c;
        case 0x386050u: goto label_386050;
        case 0x386054u: goto label_386054;
        case 0x386058u: goto label_386058;
        case 0x38605cu: goto label_38605c;
        case 0x386060u: goto label_386060;
        case 0x386064u: goto label_386064;
        case 0x386068u: goto label_386068;
        case 0x38606cu: goto label_38606c;
        case 0x386070u: goto label_386070;
        case 0x386074u: goto label_386074;
        case 0x386078u: goto label_386078;
        case 0x38607cu: goto label_38607c;
        case 0x386080u: goto label_386080;
        case 0x386084u: goto label_386084;
        case 0x386088u: goto label_386088;
        case 0x38608cu: goto label_38608c;
        case 0x386090u: goto label_386090;
        case 0x386094u: goto label_386094;
        case 0x386098u: goto label_386098;
        case 0x38609cu: goto label_38609c;
        case 0x3860a0u: goto label_3860a0;
        case 0x3860a4u: goto label_3860a4;
        case 0x3860a8u: goto label_3860a8;
        case 0x3860acu: goto label_3860ac;
        case 0x3860b0u: goto label_3860b0;
        case 0x3860b4u: goto label_3860b4;
        case 0x3860b8u: goto label_3860b8;
        case 0x3860bcu: goto label_3860bc;
        case 0x3860c0u: goto label_3860c0;
        case 0x3860c4u: goto label_3860c4;
        case 0x3860c8u: goto label_3860c8;
        case 0x3860ccu: goto label_3860cc;
        case 0x3860d0u: goto label_3860d0;
        case 0x3860d4u: goto label_3860d4;
        case 0x3860d8u: goto label_3860d8;
        case 0x3860dcu: goto label_3860dc;
        case 0x3860e0u: goto label_3860e0;
        case 0x3860e4u: goto label_3860e4;
        case 0x3860e8u: goto label_3860e8;
        case 0x3860ecu: goto label_3860ec;
        case 0x3860f0u: goto label_3860f0;
        case 0x3860f4u: goto label_3860f4;
        case 0x3860f8u: goto label_3860f8;
        case 0x3860fcu: goto label_3860fc;
        case 0x386100u: goto label_386100;
        case 0x386104u: goto label_386104;
        case 0x386108u: goto label_386108;
        case 0x38610cu: goto label_38610c;
        default: break;
    }

    ctx->pc = 0x385de0u;

label_385de0:
    // 0x385de0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x385de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_385de4:
    // 0x385de4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x385de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_385de8:
    // 0x385de8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x385de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_385dec:
    // 0x385dec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x385decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_385df0:
    // 0x385df0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x385df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_385df4:
    // 0x385df4: 0xc04f278  jal         func_13C9E0
label_385df8:
    if (ctx->pc == 0x385DF8u) {
        ctx->pc = 0x385DF8u;
            // 0x385df8: 0x260501f0  addiu       $a1, $s0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
        ctx->pc = 0x385DFCu;
        goto label_385dfc;
    }
    ctx->pc = 0x385DF4u;
    SET_GPR_U32(ctx, 31, 0x385DFCu);
    ctx->pc = 0x385DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385DF4u;
            // 0x385df8: 0x260501f0  addiu       $a1, $s0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385DFCu; }
        if (ctx->pc != 0x385DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385DFCu; }
        if (ctx->pc != 0x385DFCu) { return; }
    }
    ctx->pc = 0x385DFCu;
label_385dfc:
    // 0x385dfc: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x385dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_385e00:
    // 0x385e00: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x385e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_385e04:
    // 0x385e04: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x385e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_385e08:
    // 0x385e08: 0xc04cca0  jal         func_133280
label_385e0c:
    if (ctx->pc == 0x385E0Cu) {
        ctx->pc = 0x385E0Cu;
            // 0x385e0c: 0x24c65d40  addiu       $a2, $a2, 0x5D40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23872));
        ctx->pc = 0x385E10u;
        goto label_385e10;
    }
    ctx->pc = 0x385E08u;
    SET_GPR_U32(ctx, 31, 0x385E10u);
    ctx->pc = 0x385E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385E08u;
            // 0x385e0c: 0x24c65d40  addiu       $a2, $a2, 0x5D40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385E10u; }
        if (ctx->pc != 0x385E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385E10u; }
        if (ctx->pc != 0x385E10u) { return; }
    }
    ctx->pc = 0x385E10u;
label_385e10:
    // 0x385e10: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x385e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_385e14:
    // 0x385e14: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x385e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_385e18:
    // 0x385e18: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x385e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_385e1c:
    // 0x385e1c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x385e1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_385e20:
    // 0x385e20: 0x260402d0  addiu       $a0, $s0, 0x2D0
    ctx->pc = 0x385e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
label_385e24:
    // 0x385e24: 0x260601e0  addiu       $a2, $s0, 0x1E0
    ctx->pc = 0x385e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
label_385e28:
    // 0x385e28: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x385e28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_385e2c:
    // 0x385e2c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x385e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_385e30:
    // 0x385e30: 0xc0b838c  jal         func_2E0E30
label_385e34:
    if (ctx->pc == 0x385E34u) {
        ctx->pc = 0x385E34u;
            // 0x385e34: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x385E38u;
        goto label_385e38;
    }
    ctx->pc = 0x385E30u;
    SET_GPR_U32(ctx, 31, 0x385E38u);
    ctx->pc = 0x385E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385E30u;
            // 0x385e34: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0E30u;
    if (runtime->hasFunction(0x2E0E30u)) {
        auto targetFn = runtime->lookupFunction(0x2E0E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385E38u; }
        if (ctx->pc != 0x385E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0E30_0x2e0e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385E38u; }
        if (ctx->pc != 0x385E38u) { return; }
    }
    ctx->pc = 0x385E38u;
label_385e38:
    // 0x385e38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x385e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_385e3c:
    // 0x385e3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x385e3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_385e40:
    // 0x385e40: 0x3e00008  jr          $ra
label_385e44:
    if (ctx->pc == 0x385E44u) {
        ctx->pc = 0x385E44u;
            // 0x385e44: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x385E48u;
        goto label_385e48;
    }
    ctx->pc = 0x385E40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x385E40u;
            // 0x385e44: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x385E48u;
label_385e48:
    // 0x385e48: 0x0  nop
    ctx->pc = 0x385e48u;
    // NOP
label_385e4c:
    // 0x385e4c: 0x0  nop
    ctx->pc = 0x385e4cu;
    // NOP
label_385e50:
    // 0x385e50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x385e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_385e54:
    // 0x385e54: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x385e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_385e58:
    // 0x385e58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x385e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_385e5c:
    // 0x385e5c: 0x8ca60550  lw          $a2, 0x550($a1)
    ctx->pc = 0x385e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1360)));
label_385e60:
    // 0x385e60: 0x80c6010f  lb          $a2, 0x10F($a2)
    ctx->pc = 0x385e60u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 271)));
label_385e64:
    // 0x385e64: 0x54c30004  bnel        $a2, $v1, . + 4 + (0x4 << 2)
label_385e68:
    if (ctx->pc == 0x385E68u) {
        ctx->pc = 0x385E68u;
            // 0x385e68: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x385E6Cu;
        goto label_385e6c;
    }
    ctx->pc = 0x385E64u;
    {
        const bool branch_taken_0x385e64 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x385e64) {
            ctx->pc = 0x385E68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x385E64u;
            // 0x385e68: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x385E78u;
            goto label_385e78;
        }
    }
    ctx->pc = 0x385E6Cu;
label_385e6c:
    // 0x385e6c: 0xc0e13f0  jal         func_384FC0
label_385e70:
    if (ctx->pc == 0x385E70u) {
        ctx->pc = 0x385E70u;
            // 0x385e70: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->pc = 0x385E74u;
        goto label_385e74;
    }
    ctx->pc = 0x385E6Cu;
    SET_GPR_U32(ctx, 31, 0x385E74u);
    ctx->pc = 0x385E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385E6Cu;
            // 0x385e70: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384FC0u;
    if (runtime->hasFunction(0x384FC0u)) {
        auto targetFn = runtime->lookupFunction(0x384FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385E74u; }
        if (ctx->pc != 0x385E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384FC0_0x384fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385E74u; }
        if (ctx->pc != 0x385E74u) { return; }
    }
    ctx->pc = 0x385E74u;
label_385e74:
    // 0x385e74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x385e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_385e78:
    // 0x385e78: 0x3e00008  jr          $ra
label_385e7c:
    if (ctx->pc == 0x385E7Cu) {
        ctx->pc = 0x385E7Cu;
            // 0x385e7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x385E80u;
        goto label_385e80;
    }
    ctx->pc = 0x385E78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x385E78u;
            // 0x385e7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x385E80u;
label_385e80:
    // 0x385e80: 0x3e00008  jr          $ra
label_385e84:
    if (ctx->pc == 0x385E84u) {
        ctx->pc = 0x385E84u;
            // 0x385e84: 0x24022f26  addiu       $v0, $zero, 0x2F26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12070));
        ctx->pc = 0x385E88u;
        goto label_385e88;
    }
    ctx->pc = 0x385E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x385E80u;
            // 0x385e84: 0x24022f26  addiu       $v0, $zero, 0x2F26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12070));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x385E88u;
label_385e88:
    // 0x385e88: 0x0  nop
    ctx->pc = 0x385e88u;
    // NOP
label_385e8c:
    // 0x385e8c: 0x0  nop
    ctx->pc = 0x385e8cu;
    // NOP
label_385e90:
    // 0x385e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x385e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_385e94:
    // 0x385e94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x385e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_385e98:
    // 0x385e98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x385e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_385e9c:
    // 0x385e9c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x385e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_385ea0:
    // 0x385ea0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x385ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_385ea4:
    // 0x385ea4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x385ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_385ea8:
    // 0x385ea8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x385ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_385eac:
    // 0x385eac: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x385eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_385eb0:
    // 0x385eb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x385eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_385eb4:
    // 0x385eb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x385eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_385eb8:
    // 0x385eb8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x385eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_385ebc:
    // 0x385ebc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x385ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_385ec0:
    // 0x385ec0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x385ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_385ec4:
    // 0x385ec4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x385ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_385ec8:
    // 0x385ec8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x385ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_385ecc:
    // 0x385ecc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x385eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_385ed0:
    // 0x385ed0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x385ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_385ed4:
    // 0x385ed4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x385ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_385ed8:
    // 0x385ed8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x385ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_385edc:
    // 0x385edc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x385edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_385ee0:
    // 0x385ee0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x385ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_385ee4:
    // 0x385ee4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x385ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_385ee8:
    // 0x385ee8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x385ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_385eec:
    // 0x385eec: 0xc0a997c  jal         func_2A65F0
label_385ef0:
    if (ctx->pc == 0x385EF0u) {
        ctx->pc = 0x385EF0u;
            // 0x385ef0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x385EF4u;
        goto label_385ef4;
    }
    ctx->pc = 0x385EECu;
    SET_GPR_U32(ctx, 31, 0x385EF4u);
    ctx->pc = 0x385EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385EECu;
            // 0x385ef0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385EF4u; }
        if (ctx->pc != 0x385EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385EF4u; }
        if (ctx->pc != 0x385EF4u) { return; }
    }
    ctx->pc = 0x385EF4u;
label_385ef4:
    // 0x385ef4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x385ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_385ef8:
    // 0x385ef8: 0xc0d879c  jal         func_361E70
label_385efc:
    if (ctx->pc == 0x385EFCu) {
        ctx->pc = 0x385EFCu;
            // 0x385efc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x385F00u;
        goto label_385f00;
    }
    ctx->pc = 0x385EF8u;
    SET_GPR_U32(ctx, 31, 0x385F00u);
    ctx->pc = 0x385EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385EF8u;
            // 0x385efc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385F00u; }
        if (ctx->pc != 0x385F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385F00u; }
        if (ctx->pc != 0x385F00u) { return; }
    }
    ctx->pc = 0x385F00u;
label_385f00:
    // 0x385f00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x385f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_385f04:
    // 0x385f04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x385f04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_385f08:
    // 0x385f08: 0x3e00008  jr          $ra
label_385f0c:
    if (ctx->pc == 0x385F0Cu) {
        ctx->pc = 0x385F0Cu;
            // 0x385f0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x385F10u;
        goto label_385f10;
    }
    ctx->pc = 0x385F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x385F08u;
            // 0x385f0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x385F10u;
label_385f10:
    // 0x385f10: 0x80e1314  j           func_384C50
label_385f14:
    if (ctx->pc == 0x385F14u) {
        ctx->pc = 0x385F14u;
            // 0x385f14: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x385F18u;
        goto label_385f18;
    }
    ctx->pc = 0x385F10u;
    ctx->pc = 0x385F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385F10u;
            // 0x385f14: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384C50u;
    {
        auto targetFn = runtime->lookupFunction(0x384C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x385F18u;
label_385f18:
    // 0x385f18: 0x0  nop
    ctx->pc = 0x385f18u;
    // NOP
label_385f1c:
    // 0x385f1c: 0x0  nop
    ctx->pc = 0x385f1cu;
    // NOP
label_385f20:
    // 0x385f20: 0x80e0d24  j           func_383490
label_385f24:
    if (ctx->pc == 0x385F24u) {
        ctx->pc = 0x385F24u;
            // 0x385f24: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->pc = 0x385F28u;
        goto label_385f28;
    }
    ctx->pc = 0x385F20u;
    ctx->pc = 0x385F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385F20u;
            // 0x385f24: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x383490u;
    {
        auto targetFn = runtime->lookupFunction(0x383490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x385F28u;
label_385f28:
    // 0x385f28: 0x0  nop
    ctx->pc = 0x385f28u;
    // NOP
label_385f2c:
    // 0x385f2c: 0x0  nop
    ctx->pc = 0x385f2cu;
    // NOP
label_385f30:
    // 0x385f30: 0x80e0cf0  j           func_3833C0
label_385f34:
    if (ctx->pc == 0x385F34u) {
        ctx->pc = 0x385F34u;
            // 0x385f34: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->pc = 0x385F38u;
        goto label_385f38;
    }
    ctx->pc = 0x385F30u;
    ctx->pc = 0x385F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385F30u;
            // 0x385f34: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3833C0u;
    {
        auto targetFn = runtime->lookupFunction(0x3833C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x385F38u;
label_385f38:
    // 0x385f38: 0x0  nop
    ctx->pc = 0x385f38u;
    // NOP
label_385f3c:
    // 0x385f3c: 0x0  nop
    ctx->pc = 0x385f3cu;
    // NOP
label_385f40:
    // 0x385f40: 0x80e0c34  j           func_3830D0
label_385f44:
    if (ctx->pc == 0x385F44u) {
        ctx->pc = 0x385F44u;
            // 0x385f44: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x385F48u;
        goto label_385f48;
    }
    ctx->pc = 0x385F40u;
    ctx->pc = 0x385F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385F40u;
            // 0x385f44: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3830D0u;
    {
        auto targetFn = runtime->lookupFunction(0x3830D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x385F48u;
label_385f48:
    // 0x385f48: 0x0  nop
    ctx->pc = 0x385f48u;
    // NOP
label_385f4c:
    // 0x385f4c: 0x0  nop
    ctx->pc = 0x385f4cu;
    // NOP
label_385f50:
    // 0x385f50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x385f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_385f54:
    // 0x385f54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x385f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_385f58:
    // 0x385f58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x385f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_385f5c:
    // 0x385f5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x385f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_385f60:
    // 0x385f60: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x385f60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_385f64:
    // 0x385f64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x385f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_385f68:
    // 0x385f68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x385f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_385f6c:
    // 0x385f6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x385f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_385f70:
    // 0x385f70: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x385f70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_385f74:
    // 0x385f74: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_385f78:
    if (ctx->pc == 0x385F78u) {
        ctx->pc = 0x385F78u;
            // 0x385f78: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x385F7Cu;
        goto label_385f7c;
    }
    ctx->pc = 0x385F74u;
    {
        const bool branch_taken_0x385f74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x385F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x385F74u;
            // 0x385f78: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385f74) {
            ctx->pc = 0x385FB8u;
            goto label_385fb8;
        }
    }
    ctx->pc = 0x385F7Cu;
label_385f7c:
    // 0x385f7c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x385f7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_385f80:
    // 0x385f80: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x385f80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_385f84:
    // 0x385f84: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x385f84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_385f88:
    // 0x385f88: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x385f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_385f8c:
    // 0x385f8c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x385f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_385f90:
    // 0x385f90: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x385f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_385f94:
    // 0x385f94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x385f94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_385f98:
    // 0x385f98: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x385f98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_385f9c:
    // 0x385f9c: 0x320f809  jalr        $t9
label_385fa0:
    if (ctx->pc == 0x385FA0u) {
        ctx->pc = 0x385FA4u;
        goto label_385fa4;
    }
    ctx->pc = 0x385F9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x385FA4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x385FA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x385FA4u; }
            if (ctx->pc != 0x385FA4u) { return; }
        }
        }
    }
    ctx->pc = 0x385FA4u;
label_385fa4:
    // 0x385fa4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x385fa4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_385fa8:
    // 0x385fa8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x385fa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_385fac:
    // 0x385fac: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x385facu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_385fb0:
    // 0x385fb0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_385fb4:
    if (ctx->pc == 0x385FB4u) {
        ctx->pc = 0x385FB4u;
            // 0x385fb4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x385FB8u;
        goto label_385fb8;
    }
    ctx->pc = 0x385FB0u;
    {
        const bool branch_taken_0x385fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x385FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x385FB0u;
            // 0x385fb4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385fb0) {
            ctx->pc = 0x385F88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_385f88;
        }
    }
    ctx->pc = 0x385FB8u;
label_385fb8:
    // 0x385fb8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x385fb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_385fbc:
    // 0x385fbc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x385fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_385fc0:
    // 0x385fc0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x385fc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_385fc4:
    // 0x385fc4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x385fc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_385fc8:
    // 0x385fc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x385fc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_385fcc:
    // 0x385fcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x385fccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_385fd0:
    // 0x385fd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x385fd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_385fd4:
    // 0x385fd4: 0x3e00008  jr          $ra
label_385fd8:
    if (ctx->pc == 0x385FD8u) {
        ctx->pc = 0x385FD8u;
            // 0x385fd8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x385FDCu;
        goto label_385fdc;
    }
    ctx->pc = 0x385FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x385FD4u;
            // 0x385fd8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x385FDCu;
label_385fdc:
    // 0x385fdc: 0x0  nop
    ctx->pc = 0x385fdcu;
    // NOP
label_385fe0:
    // 0x385fe0: 0x3e00008  jr          $ra
label_385fe4:
    if (ctx->pc == 0x385FE4u) {
        ctx->pc = 0x385FE4u;
            // 0x385fe4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x385FE8u;
        goto label_385fe8;
    }
    ctx->pc = 0x385FE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x385FE0u;
            // 0x385fe4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x385FE8u;
label_385fe8:
    // 0x385fe8: 0x0  nop
    ctx->pc = 0x385fe8u;
    // NOP
label_385fec:
    // 0x385fec: 0x0  nop
    ctx->pc = 0x385fecu;
    // NOP
label_385ff0:
    // 0x385ff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x385ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_385ff4:
    // 0x385ff4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x385ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_385ff8:
    // 0x385ff8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x385ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_385ffc:
    // 0x385ffc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x385ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_386000:
    // 0x386000: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x386000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_386004:
    // 0x386004: 0x12200039  beqz        $s1, . + 4 + (0x39 << 2)
label_386008:
    if (ctx->pc == 0x386008u) {
        ctx->pc = 0x386008u;
            // 0x386008: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38600Cu;
        goto label_38600c;
    }
    ctx->pc = 0x386004u;
    {
        const bool branch_taken_0x386004 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x386008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x386004u;
            // 0x386008: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386004) {
            ctx->pc = 0x3860ECu;
            goto label_3860ec;
        }
    }
    ctx->pc = 0x38600Cu;
label_38600c:
    // 0x38600c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x38600cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_386010:
    // 0x386010: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x386010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_386014:
    // 0x386014: 0x246379c0  addiu       $v1, $v1, 0x79C0
    ctx->pc = 0x386014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31168));
label_386018:
    // 0x386018: 0x244279f8  addiu       $v0, $v0, 0x79F8
    ctx->pc = 0x386018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31224));
label_38601c:
    // 0x38601c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x38601cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_386020:
    // 0x386020: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x386020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_386024:
    // 0x386024: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x386024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_386028:
    // 0x386028: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x386028u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_38602c:
    // 0x38602c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_386030:
    if (ctx->pc == 0x386030u) {
        ctx->pc = 0x386034u;
        goto label_386034;
    }
    ctx->pc = 0x38602Cu;
    {
        const bool branch_taken_0x38602c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38602c) {
            ctx->pc = 0x386068u;
            goto label_386068;
        }
    }
    ctx->pc = 0x386034u;
label_386034:
    // 0x386034: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x386034u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_386038:
    // 0x386038: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x386038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_38603c:
    // 0x38603c: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x38603cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_386040:
    // 0x386040: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x386040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_386044:
    // 0x386044: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x386044u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_386048:
    // 0x386048: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_38604c:
    if (ctx->pc == 0x38604Cu) {
        ctx->pc = 0x386050u;
        goto label_386050;
    }
    ctx->pc = 0x386048u;
    {
        const bool branch_taken_0x386048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x386048) {
            ctx->pc = 0x386068u;
            goto label_386068;
        }
    }
    ctx->pc = 0x386050u;
label_386050:
    // 0x386050: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_386054:
    if (ctx->pc == 0x386054u) {
        ctx->pc = 0x386058u;
        goto label_386058;
    }
    ctx->pc = 0x386050u;
    {
        const bool branch_taken_0x386050 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x386050) {
            ctx->pc = 0x386068u;
            goto label_386068;
        }
    }
    ctx->pc = 0x386058u;
label_386058:
    // 0x386058: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x386058u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_38605c:
    // 0x38605c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x38605cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_386060:
    // 0x386060: 0x320f809  jalr        $t9
label_386064:
    if (ctx->pc == 0x386064u) {
        ctx->pc = 0x386064u;
            // 0x386064: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x386068u;
        goto label_386068;
    }
    ctx->pc = 0x386060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x386068u);
        ctx->pc = 0x386064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x386060u;
            // 0x386064: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x386068u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x386068u; }
            if (ctx->pc != 0x386068u) { return; }
        }
        }
    }
    ctx->pc = 0x386068u;
label_386068:
    // 0x386068: 0x5220001b  beql        $s1, $zero, . + 4 + (0x1B << 2)
label_38606c:
    if (ctx->pc == 0x38606Cu) {
        ctx->pc = 0x38606Cu;
            // 0x38606c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x386070u;
        goto label_386070;
    }
    ctx->pc = 0x386068u;
    {
        const bool branch_taken_0x386068 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x386068) {
            ctx->pc = 0x38606Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x386068u;
            // 0x38606c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3860D8u;
            goto label_3860d8;
        }
    }
    ctx->pc = 0x386070u;
label_386070:
    // 0x386070: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x386070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_386074:
    // 0x386074: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x386074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_386078:
    // 0x386078: 0x24637ac0  addiu       $v1, $v1, 0x7AC0
    ctx->pc = 0x386078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31424));
label_38607c:
    // 0x38607c: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x38607cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
label_386080:
    // 0x386080: 0x24427af8  addiu       $v0, $v0, 0x7AF8
    ctx->pc = 0x386080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31480));
label_386084:
    // 0x386084: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x386084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_386088:
    // 0x386088: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x386088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_38608c:
    // 0x38608c: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x38608cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_386090:
    // 0x386090: 0xc0407c0  jal         func_101F00
label_386094:
    if (ctx->pc == 0x386094u) {
        ctx->pc = 0x386094u;
            // 0x386094: 0x24a56240  addiu       $a1, $a1, 0x6240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25152));
        ctx->pc = 0x386098u;
        goto label_386098;
    }
    ctx->pc = 0x386090u;
    SET_GPR_U32(ctx, 31, 0x386098u);
    ctx->pc = 0x386094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386090u;
            // 0x386094: 0x24a56240  addiu       $a1, $a1, 0x6240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386098u; }
        if (ctx->pc != 0x386098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386098u; }
        if (ctx->pc != 0x386098u) { return; }
    }
    ctx->pc = 0x386098u;
label_386098:
    // 0x386098: 0x26240084  addiu       $a0, $s1, 0x84
    ctx->pc = 0x386098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_38609c:
    // 0x38609c: 0xc0e1878  jal         func_3861E0
label_3860a0:
    if (ctx->pc == 0x3860A0u) {
        ctx->pc = 0x3860A0u;
            // 0x3860a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3860A4u;
        goto label_3860a4;
    }
    ctx->pc = 0x38609Cu;
    SET_GPR_U32(ctx, 31, 0x3860A4u);
    ctx->pc = 0x3860A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38609Cu;
            // 0x3860a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3861E0u;
    if (runtime->hasFunction(0x3861E0u)) {
        auto targetFn = runtime->lookupFunction(0x3861E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3860A4u; }
        if (ctx->pc != 0x3860A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003861E0_0x3861e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3860A4u; }
        if (ctx->pc != 0x3860A4u) { return; }
    }
    ctx->pc = 0x3860A4u;
label_3860a4:
    // 0x3860a4: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x3860a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_3860a8:
    // 0x3860a8: 0xc0e185c  jal         func_386170
label_3860ac:
    if (ctx->pc == 0x3860ACu) {
        ctx->pc = 0x3860ACu;
            // 0x3860ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3860B0u;
        goto label_3860b0;
    }
    ctx->pc = 0x3860A8u;
    SET_GPR_U32(ctx, 31, 0x3860B0u);
    ctx->pc = 0x3860ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3860A8u;
            // 0x3860ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386170u;
    if (runtime->hasFunction(0x386170u)) {
        auto targetFn = runtime->lookupFunction(0x386170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3860B0u; }
        if (ctx->pc != 0x3860B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386170_0x386170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3860B0u; }
        if (ctx->pc != 0x3860B0u) { return; }
    }
    ctx->pc = 0x3860B0u;
label_3860b0:
    // 0x3860b0: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x3860b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_3860b4:
    // 0x3860b4: 0xc0e185c  jal         func_386170
label_3860b8:
    if (ctx->pc == 0x3860B8u) {
        ctx->pc = 0x3860B8u;
            // 0x3860b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3860BCu;
        goto label_3860bc;
    }
    ctx->pc = 0x3860B4u;
    SET_GPR_U32(ctx, 31, 0x3860BCu);
    ctx->pc = 0x3860B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3860B4u;
            // 0x3860b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386170u;
    if (runtime->hasFunction(0x386170u)) {
        auto targetFn = runtime->lookupFunction(0x386170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3860BCu; }
        if (ctx->pc != 0x3860BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386170_0x386170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3860BCu; }
        if (ctx->pc != 0x3860BCu) { return; }
    }
    ctx->pc = 0x3860BCu;
label_3860bc:
    // 0x3860bc: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x3860bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_3860c0:
    // 0x3860c0: 0xc0e1844  jal         func_386110
label_3860c4:
    if (ctx->pc == 0x3860C4u) {
        ctx->pc = 0x3860C4u;
            // 0x3860c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3860C8u;
        goto label_3860c8;
    }
    ctx->pc = 0x3860C0u;
    SET_GPR_U32(ctx, 31, 0x3860C8u);
    ctx->pc = 0x3860C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3860C0u;
            // 0x3860c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386110u;
    if (runtime->hasFunction(0x386110u)) {
        auto targetFn = runtime->lookupFunction(0x386110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3860C8u; }
        if (ctx->pc != 0x3860C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386110_0x386110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3860C8u; }
        if (ctx->pc != 0x3860C8u) { return; }
    }
    ctx->pc = 0x3860C8u;
label_3860c8:
    // 0x3860c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3860c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3860cc:
    // 0x3860cc: 0xc0ae1c0  jal         func_2B8700
label_3860d0:
    if (ctx->pc == 0x3860D0u) {
        ctx->pc = 0x3860D0u;
            // 0x3860d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3860D4u;
        goto label_3860d4;
    }
    ctx->pc = 0x3860CCu;
    SET_GPR_U32(ctx, 31, 0x3860D4u);
    ctx->pc = 0x3860D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3860CCu;
            // 0x3860d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3860D4u; }
        if (ctx->pc != 0x3860D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3860D4u; }
        if (ctx->pc != 0x3860D4u) { return; }
    }
    ctx->pc = 0x3860D4u;
label_3860d4:
    // 0x3860d4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3860d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3860d8:
    // 0x3860d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3860d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3860dc:
    // 0x3860dc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3860e0:
    if (ctx->pc == 0x3860E0u) {
        ctx->pc = 0x3860E0u;
            // 0x3860e0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3860E4u;
        goto label_3860e4;
    }
    ctx->pc = 0x3860DCu;
    {
        const bool branch_taken_0x3860dc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3860dc) {
            ctx->pc = 0x3860E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3860DCu;
            // 0x3860e0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3860F0u;
            goto label_3860f0;
        }
    }
    ctx->pc = 0x3860E4u;
label_3860e4:
    // 0x3860e4: 0xc0400a8  jal         func_1002A0
label_3860e8:
    if (ctx->pc == 0x3860E8u) {
        ctx->pc = 0x3860E8u;
            // 0x3860e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3860ECu;
        goto label_3860ec;
    }
    ctx->pc = 0x3860E4u;
    SET_GPR_U32(ctx, 31, 0x3860ECu);
    ctx->pc = 0x3860E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3860E4u;
            // 0x3860e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3860ECu; }
        if (ctx->pc != 0x3860ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3860ECu; }
        if (ctx->pc != 0x3860ECu) { return; }
    }
    ctx->pc = 0x3860ECu;
label_3860ec:
    // 0x3860ec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3860ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3860f0:
    // 0x3860f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3860f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3860f4:
    // 0x3860f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3860f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3860f8:
    // 0x3860f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3860f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3860fc:
    // 0x3860fc: 0x3e00008  jr          $ra
label_386100:
    if (ctx->pc == 0x386100u) {
        ctx->pc = 0x386100u;
            // 0x386100: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x386104u;
        goto label_386104;
    }
    ctx->pc = 0x3860FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3860FCu;
            // 0x386100: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x386104u;
label_386104:
    // 0x386104: 0x0  nop
    ctx->pc = 0x386104u;
    // NOP
label_386108:
    // 0x386108: 0x0  nop
    ctx->pc = 0x386108u;
    // NOP
label_38610c:
    // 0x38610c: 0x0  nop
    ctx->pc = 0x38610cu;
    // NOP
}
