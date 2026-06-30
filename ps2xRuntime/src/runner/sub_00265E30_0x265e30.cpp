#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00265E30
// Address: 0x265e30 - 0x2661e0
void sub_00265E30_0x265e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265E30_0x265e30");
#endif

    switch (ctx->pc) {
        case 0x265e30u: goto label_265e30;
        case 0x265e34u: goto label_265e34;
        case 0x265e38u: goto label_265e38;
        case 0x265e3cu: goto label_265e3c;
        case 0x265e40u: goto label_265e40;
        case 0x265e44u: goto label_265e44;
        case 0x265e48u: goto label_265e48;
        case 0x265e4cu: goto label_265e4c;
        case 0x265e50u: goto label_265e50;
        case 0x265e54u: goto label_265e54;
        case 0x265e58u: goto label_265e58;
        case 0x265e5cu: goto label_265e5c;
        case 0x265e60u: goto label_265e60;
        case 0x265e64u: goto label_265e64;
        case 0x265e68u: goto label_265e68;
        case 0x265e6cu: goto label_265e6c;
        case 0x265e70u: goto label_265e70;
        case 0x265e74u: goto label_265e74;
        case 0x265e78u: goto label_265e78;
        case 0x265e7cu: goto label_265e7c;
        case 0x265e80u: goto label_265e80;
        case 0x265e84u: goto label_265e84;
        case 0x265e88u: goto label_265e88;
        case 0x265e8cu: goto label_265e8c;
        case 0x265e90u: goto label_265e90;
        case 0x265e94u: goto label_265e94;
        case 0x265e98u: goto label_265e98;
        case 0x265e9cu: goto label_265e9c;
        case 0x265ea0u: goto label_265ea0;
        case 0x265ea4u: goto label_265ea4;
        case 0x265ea8u: goto label_265ea8;
        case 0x265eacu: goto label_265eac;
        case 0x265eb0u: goto label_265eb0;
        case 0x265eb4u: goto label_265eb4;
        case 0x265eb8u: goto label_265eb8;
        case 0x265ebcu: goto label_265ebc;
        case 0x265ec0u: goto label_265ec0;
        case 0x265ec4u: goto label_265ec4;
        case 0x265ec8u: goto label_265ec8;
        case 0x265eccu: goto label_265ecc;
        case 0x265ed0u: goto label_265ed0;
        case 0x265ed4u: goto label_265ed4;
        case 0x265ed8u: goto label_265ed8;
        case 0x265edcu: goto label_265edc;
        case 0x265ee0u: goto label_265ee0;
        case 0x265ee4u: goto label_265ee4;
        case 0x265ee8u: goto label_265ee8;
        case 0x265eecu: goto label_265eec;
        case 0x265ef0u: goto label_265ef0;
        case 0x265ef4u: goto label_265ef4;
        case 0x265ef8u: goto label_265ef8;
        case 0x265efcu: goto label_265efc;
        case 0x265f00u: goto label_265f00;
        case 0x265f04u: goto label_265f04;
        case 0x265f08u: goto label_265f08;
        case 0x265f0cu: goto label_265f0c;
        case 0x265f10u: goto label_265f10;
        case 0x265f14u: goto label_265f14;
        case 0x265f18u: goto label_265f18;
        case 0x265f1cu: goto label_265f1c;
        case 0x265f20u: goto label_265f20;
        case 0x265f24u: goto label_265f24;
        case 0x265f28u: goto label_265f28;
        case 0x265f2cu: goto label_265f2c;
        case 0x265f30u: goto label_265f30;
        case 0x265f34u: goto label_265f34;
        case 0x265f38u: goto label_265f38;
        case 0x265f3cu: goto label_265f3c;
        case 0x265f40u: goto label_265f40;
        case 0x265f44u: goto label_265f44;
        case 0x265f48u: goto label_265f48;
        case 0x265f4cu: goto label_265f4c;
        case 0x265f50u: goto label_265f50;
        case 0x265f54u: goto label_265f54;
        case 0x265f58u: goto label_265f58;
        case 0x265f5cu: goto label_265f5c;
        case 0x265f60u: goto label_265f60;
        case 0x265f64u: goto label_265f64;
        case 0x265f68u: goto label_265f68;
        case 0x265f6cu: goto label_265f6c;
        case 0x265f70u: goto label_265f70;
        case 0x265f74u: goto label_265f74;
        case 0x265f78u: goto label_265f78;
        case 0x265f7cu: goto label_265f7c;
        case 0x265f80u: goto label_265f80;
        case 0x265f84u: goto label_265f84;
        case 0x265f88u: goto label_265f88;
        case 0x265f8cu: goto label_265f8c;
        case 0x265f90u: goto label_265f90;
        case 0x265f94u: goto label_265f94;
        case 0x265f98u: goto label_265f98;
        case 0x265f9cu: goto label_265f9c;
        case 0x265fa0u: goto label_265fa0;
        case 0x265fa4u: goto label_265fa4;
        case 0x265fa8u: goto label_265fa8;
        case 0x265facu: goto label_265fac;
        case 0x265fb0u: goto label_265fb0;
        case 0x265fb4u: goto label_265fb4;
        case 0x265fb8u: goto label_265fb8;
        case 0x265fbcu: goto label_265fbc;
        case 0x265fc0u: goto label_265fc0;
        case 0x265fc4u: goto label_265fc4;
        case 0x265fc8u: goto label_265fc8;
        case 0x265fccu: goto label_265fcc;
        case 0x265fd0u: goto label_265fd0;
        case 0x265fd4u: goto label_265fd4;
        case 0x265fd8u: goto label_265fd8;
        case 0x265fdcu: goto label_265fdc;
        case 0x265fe0u: goto label_265fe0;
        case 0x265fe4u: goto label_265fe4;
        case 0x265fe8u: goto label_265fe8;
        case 0x265fecu: goto label_265fec;
        case 0x265ff0u: goto label_265ff0;
        case 0x265ff4u: goto label_265ff4;
        case 0x265ff8u: goto label_265ff8;
        case 0x265ffcu: goto label_265ffc;
        case 0x266000u: goto label_266000;
        case 0x266004u: goto label_266004;
        case 0x266008u: goto label_266008;
        case 0x26600cu: goto label_26600c;
        case 0x266010u: goto label_266010;
        case 0x266014u: goto label_266014;
        case 0x266018u: goto label_266018;
        case 0x26601cu: goto label_26601c;
        case 0x266020u: goto label_266020;
        case 0x266024u: goto label_266024;
        case 0x266028u: goto label_266028;
        case 0x26602cu: goto label_26602c;
        case 0x266030u: goto label_266030;
        case 0x266034u: goto label_266034;
        case 0x266038u: goto label_266038;
        case 0x26603cu: goto label_26603c;
        case 0x266040u: goto label_266040;
        case 0x266044u: goto label_266044;
        case 0x266048u: goto label_266048;
        case 0x26604cu: goto label_26604c;
        case 0x266050u: goto label_266050;
        case 0x266054u: goto label_266054;
        case 0x266058u: goto label_266058;
        case 0x26605cu: goto label_26605c;
        case 0x266060u: goto label_266060;
        case 0x266064u: goto label_266064;
        case 0x266068u: goto label_266068;
        case 0x26606cu: goto label_26606c;
        case 0x266070u: goto label_266070;
        case 0x266074u: goto label_266074;
        case 0x266078u: goto label_266078;
        case 0x26607cu: goto label_26607c;
        case 0x266080u: goto label_266080;
        case 0x266084u: goto label_266084;
        case 0x266088u: goto label_266088;
        case 0x26608cu: goto label_26608c;
        case 0x266090u: goto label_266090;
        case 0x266094u: goto label_266094;
        case 0x266098u: goto label_266098;
        case 0x26609cu: goto label_26609c;
        case 0x2660a0u: goto label_2660a0;
        case 0x2660a4u: goto label_2660a4;
        case 0x2660a8u: goto label_2660a8;
        case 0x2660acu: goto label_2660ac;
        case 0x2660b0u: goto label_2660b0;
        case 0x2660b4u: goto label_2660b4;
        case 0x2660b8u: goto label_2660b8;
        case 0x2660bcu: goto label_2660bc;
        case 0x2660c0u: goto label_2660c0;
        case 0x2660c4u: goto label_2660c4;
        case 0x2660c8u: goto label_2660c8;
        case 0x2660ccu: goto label_2660cc;
        case 0x2660d0u: goto label_2660d0;
        case 0x2660d4u: goto label_2660d4;
        case 0x2660d8u: goto label_2660d8;
        case 0x2660dcu: goto label_2660dc;
        case 0x2660e0u: goto label_2660e0;
        case 0x2660e4u: goto label_2660e4;
        case 0x2660e8u: goto label_2660e8;
        case 0x2660ecu: goto label_2660ec;
        case 0x2660f0u: goto label_2660f0;
        case 0x2660f4u: goto label_2660f4;
        case 0x2660f8u: goto label_2660f8;
        case 0x2660fcu: goto label_2660fc;
        case 0x266100u: goto label_266100;
        case 0x266104u: goto label_266104;
        case 0x266108u: goto label_266108;
        case 0x26610cu: goto label_26610c;
        case 0x266110u: goto label_266110;
        case 0x266114u: goto label_266114;
        case 0x266118u: goto label_266118;
        case 0x26611cu: goto label_26611c;
        case 0x266120u: goto label_266120;
        case 0x266124u: goto label_266124;
        case 0x266128u: goto label_266128;
        case 0x26612cu: goto label_26612c;
        case 0x266130u: goto label_266130;
        case 0x266134u: goto label_266134;
        case 0x266138u: goto label_266138;
        case 0x26613cu: goto label_26613c;
        case 0x266140u: goto label_266140;
        case 0x266144u: goto label_266144;
        case 0x266148u: goto label_266148;
        case 0x26614cu: goto label_26614c;
        case 0x266150u: goto label_266150;
        case 0x266154u: goto label_266154;
        case 0x266158u: goto label_266158;
        case 0x26615cu: goto label_26615c;
        case 0x266160u: goto label_266160;
        case 0x266164u: goto label_266164;
        case 0x266168u: goto label_266168;
        case 0x26616cu: goto label_26616c;
        case 0x266170u: goto label_266170;
        case 0x266174u: goto label_266174;
        case 0x266178u: goto label_266178;
        case 0x26617cu: goto label_26617c;
        case 0x266180u: goto label_266180;
        case 0x266184u: goto label_266184;
        case 0x266188u: goto label_266188;
        case 0x26618cu: goto label_26618c;
        case 0x266190u: goto label_266190;
        case 0x266194u: goto label_266194;
        case 0x266198u: goto label_266198;
        case 0x26619cu: goto label_26619c;
        case 0x2661a0u: goto label_2661a0;
        case 0x2661a4u: goto label_2661a4;
        case 0x2661a8u: goto label_2661a8;
        case 0x2661acu: goto label_2661ac;
        case 0x2661b0u: goto label_2661b0;
        case 0x2661b4u: goto label_2661b4;
        case 0x2661b8u: goto label_2661b8;
        case 0x2661bcu: goto label_2661bc;
        case 0x2661c0u: goto label_2661c0;
        case 0x2661c4u: goto label_2661c4;
        case 0x2661c8u: goto label_2661c8;
        case 0x2661ccu: goto label_2661cc;
        case 0x2661d0u: goto label_2661d0;
        case 0x2661d4u: goto label_2661d4;
        case 0x2661d8u: goto label_2661d8;
        case 0x2661dcu: goto label_2661dc;
        default: break;
    }

    ctx->pc = 0x265e30u;

label_265e30:
    // 0x265e30: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x265e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_265e34:
    // 0x265e34: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x265e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_265e38:
    // 0x265e38: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x265e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_265e3c:
    // 0x265e3c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x265e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_265e40:
    // 0x265e40: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x265e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_265e44:
    // 0x265e44: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x265e44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_265e48:
    // 0x265e48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x265e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_265e4c:
    // 0x265e4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x265e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_265e50:
    // 0x265e50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x265e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_265e54:
    // 0x265e54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x265e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_265e58:
    // 0x265e58: 0x90c20017  lbu         $v0, 0x17($a2)
    ctx->pc = 0x265e58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 23)));
label_265e5c:
    // 0x265e5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_265e60:
    if (ctx->pc == 0x265E60u) {
        ctx->pc = 0x265E60u;
            // 0x265e60: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x265E64u;
        goto label_265e64;
    }
    ctx->pc = 0x265E5Cu;
    {
        const bool branch_taken_0x265e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265E5Cu;
            // 0x265e60: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265e5c) {
            ctx->pc = 0x265E78u;
            goto label_265e78;
        }
    }
    ctx->pc = 0x265E64u;
label_265e64:
    // 0x265e64: 0xc099878  jal         func_2661E0
label_265e68:
    if (ctx->pc == 0x265E68u) {
        ctx->pc = 0x265E6Cu;
        goto label_265e6c;
    }
    ctx->pc = 0x265E64u;
    SET_GPR_U32(ctx, 31, 0x265E6Cu);
    ctx->pc = 0x2661E0u;
    if (runtime->hasFunction(0x2661E0u)) {
        auto targetFn = runtime->lookupFunction(0x2661E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265E6Cu; }
        if (ctx->pc != 0x265E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002661E0_0x2661e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265E6Cu; }
        if (ctx->pc != 0x265E6Cu) { return; }
    }
    ctx->pc = 0x265E6Cu;
label_265e6c:
    // 0x265e6c: 0x100000d0  b           . + 4 + (0xD0 << 2)
label_265e70:
    if (ctx->pc == 0x265E70u) {
        ctx->pc = 0x265E74u;
        goto label_265e74;
    }
    ctx->pc = 0x265E6Cu;
    {
        const bool branch_taken_0x265e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265e6c) {
            ctx->pc = 0x2661B0u;
            goto label_2661b0;
        }
    }
    ctx->pc = 0x265E74u;
label_265e74:
    // 0x265e74: 0x0  nop
    ctx->pc = 0x265e74u;
    // NOP
label_265e78:
    // 0x265e78: 0x24c20020  addiu       $v0, $a2, 0x20
    ctx->pc = 0x265e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_265e7c:
    // 0x265e7c: 0x24500020  addiu       $s0, $v0, 0x20
    ctx->pc = 0x265e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_265e80:
    // 0x265e80: 0xa6a00002  sh          $zero, 0x2($s5)
    ctx->pc = 0x265e80u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 2), (uint16_t)GPR_U32(ctx, 0));
label_265e84:
    // 0x265e84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x265e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_265e88:
    // 0x265e88: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x265e88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_265e8c:
    // 0x265e8c: 0xa6a20004  sh          $v0, 0x4($s5)
    ctx->pc = 0x265e8cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 4), (uint16_t)GPR_U32(ctx, 2));
label_265e90:
    // 0x265e90: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x265e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_265e94:
    // 0x265e94: 0xa6b10006  sh          $s1, 0x6($s5)
    ctx->pc = 0x265e94u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 6), (uint16_t)GPR_U32(ctx, 17));
label_265e98:
    // 0x265e98: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x265e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_265e9c:
    // 0x265e9c: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x265e9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_265ea0:
    // 0x265ea0: 0x27b800a0  addiu       $t8, $sp, 0xA0
    ctx->pc = 0x265ea0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_265ea4:
    // 0x265ea4: 0x27b60090  addiu       $s6, $sp, 0x90
    ctx->pc = 0x265ea4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_265ea8:
    // 0x265ea8: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x265ea8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_265eac:
    // 0x265eac: 0x27ae00d0  addiu       $t6, $sp, 0xD0
    ctx->pc = 0x265eacu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_265eb0:
    // 0x265eb0: 0x27ad00e0  addiu       $t5, $sp, 0xE0
    ctx->pc = 0x265eb0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_265eb4:
    // 0x265eb4: 0x27ac00f0  addiu       $t4, $sp, 0xF0
    ctx->pc = 0x265eb4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_265eb8:
    // 0x265eb8: 0x27ab00d4  addiu       $t3, $sp, 0xD4
    ctx->pc = 0x265eb8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_265ebc:
    // 0x265ebc: 0x40782d  daddu       $t7, $v0, $zero
    ctx->pc = 0x265ebcu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_265ec0:
    // 0x265ec0: 0x27aa00c4  addiu       $t2, $sp, 0xC4
    ctx->pc = 0x265ec0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
label_265ec4:
    // 0x265ec4: 0x27a900e4  addiu       $t1, $sp, 0xE4
    ctx->pc = 0x265ec4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_265ec8:
    // 0x265ec8: 0x27a800f4  addiu       $t0, $sp, 0xF4
    ctx->pc = 0x265ec8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
label_265ecc:
    // 0x265ecc: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x265eccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_265ed0:
    // 0x265ed0: 0x27a600d8  addiu       $a2, $sp, 0xD8
    ctx->pc = 0x265ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_265ed4:
    // 0x265ed4: 0x78f30010  lq          $s3, 0x10($a3)
    ctx->pc = 0x265ed4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 7), 16)));
label_265ed8:
    // 0x265ed8: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x265ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_265edc:
    // 0x265edc: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x265edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_265ee0:
    // 0x265ee0: 0x27a300f8  addiu       $v1, $sp, 0xF8
    ctx->pc = 0x265ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_265ee4:
    // 0x265ee4: 0x7f130000  sq          $s3, 0x0($t8)
    ctx->pc = 0x265ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 24), 0), GPR_VEC(ctx, 19));
label_265ee8:
    // 0x265ee8: 0x78f30020  lq          $s3, 0x20($a3)
    ctx->pc = 0x265ee8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 7), 32)));
label_265eec:
    // 0x265eec: 0x7ed30000  sq          $s3, 0x0($s6)
    ctx->pc = 0x265eecu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 19));
label_265ef0:
    // 0x265ef0: 0x78e70030  lq          $a3, 0x30($a3)
    ctx->pc = 0x265ef0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 48)));
label_265ef4:
    // 0x265ef4: 0x7e470000  sq          $a3, 0x0($s2)
    ctx->pc = 0x265ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 7));
label_265ef8:
    // 0x265ef8: 0xc7a400b0  lwc1        $f4, 0xB0($sp)
    ctx->pc = 0x265ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_265efc:
    // 0x265efc: 0xc7a300b4  lwc1        $f3, 0xB4($sp)
    ctx->pc = 0x265efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_265f00:
    // 0x265f00: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x265f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_265f04:
    // 0x265f04: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x265f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_265f08:
    // 0x265f08: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x265f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265f0c:
    // 0x265f0c: 0xe7a400c0  swc1        $f4, 0xC0($sp)
    ctx->pc = 0x265f0cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_265f10:
    // 0x265f10: 0xe7a300c4  swc1        $f3, 0xC4($sp)
    ctx->pc = 0x265f10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_265f14:
    // 0x265f14: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x265f14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_265f18:
    // 0x265f18: 0xe7a100cc  swc1        $f1, 0xCC($sp)
    ctx->pc = 0x265f18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_265f1c:
    // 0x265f1c: 0xe5c00000  swc1        $f0, 0x0($t6)
    ctx->pc = 0x265f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
label_265f20:
    // 0x265f20: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x265f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265f24:
    // 0x265f24: 0xe5c00004  swc1        $f0, 0x4($t6)
    ctx->pc = 0x265f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
label_265f28:
    // 0x265f28: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x265f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265f2c:
    // 0x265f2c: 0xe5c00008  swc1        $f0, 0x8($t6)
    ctx->pc = 0x265f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
label_265f30:
    // 0x265f30: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x265f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265f34:
    // 0x265f34: 0xe5c0000c  swc1        $f0, 0xC($t6)
    ctx->pc = 0x265f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 12), bits); }
label_265f38:
    // 0x265f38: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x265f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265f3c:
    // 0x265f3c: 0xe5a00000  swc1        $f0, 0x0($t5)
    ctx->pc = 0x265f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
label_265f40:
    // 0x265f40: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x265f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265f44:
    // 0x265f44: 0xe5a00004  swc1        $f0, 0x4($t5)
    ctx->pc = 0x265f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
label_265f48:
    // 0x265f48: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x265f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265f4c:
    // 0x265f4c: 0xe5a00008  swc1        $f0, 0x8($t5)
    ctx->pc = 0x265f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
label_265f50:
    // 0x265f50: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x265f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265f54:
    // 0x265f54: 0xe5a0000c  swc1        $f0, 0xC($t5)
    ctx->pc = 0x265f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 12), bits); }
label_265f58:
    // 0x265f58: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x265f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265f5c:
    // 0x265f5c: 0xe5800000  swc1        $f0, 0x0($t4)
    ctx->pc = 0x265f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
label_265f60:
    // 0x265f60: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x265f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265f64:
    // 0x265f64: 0xe5800004  swc1        $f0, 0x4($t4)
    ctx->pc = 0x265f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
label_265f68:
    // 0x265f68: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x265f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265f6c:
    // 0x265f6c: 0xe5800008  swc1        $f0, 0x8($t4)
    ctx->pc = 0x265f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 8), bits); }
label_265f70:
    // 0x265f70: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x265f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265f74:
    // 0x265f74: 0xe580000c  swc1        $f0, 0xC($t4)
    ctx->pc = 0x265f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 12), bits); }
label_265f78:
    // 0x265f78: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x265f78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_265f7c:
    // 0x265f7c: 0x0  nop
    ctx->pc = 0x265f7cu;
    // NOP
label_265f80:
    // 0x265f80: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x265f80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_265f84:
    // 0x265f84: 0xc6070000  lwc1        $f7, 0x0($s0)
    ctx->pc = 0x265f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_265f88:
    // 0x265f88: 0xc7a300c0  lwc1        $f3, 0xC0($sp)
    ctx->pc = 0x265f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_265f8c:
    // 0x265f8c: 0xc6060004  lwc1        $f6, 0x4($s0)
    ctx->pc = 0x265f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_265f90:
    // 0x265f90: 0xc5c20000  lwc1        $f2, 0x0($t6)
    ctx->pc = 0x265f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_265f94:
    // 0x265f94: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x265f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_265f98:
    // 0x265f98: 0xc5a10000  lwc1        $f1, 0x0($t5)
    ctx->pc = 0x265f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_265f9c:
    // 0x265f9c: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x265f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265fa0:
    // 0x265fa0: 0x460338c2  mul.s       $f3, $f7, $f3
    ctx->pc = 0x265fa0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
label_265fa4:
    // 0x265fa4: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x265fa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
label_265fa8:
    // 0x265fa8: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x265fa8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_265fac:
    // 0x265fac: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x265facu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_265fb0:
    // 0x265fb0: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x265fb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_265fb4:
    // 0x265fb4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x265fb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_265fb8:
    // 0x265fb8: 0xe5e00000  swc1        $f0, 0x0($t7)
    ctx->pc = 0x265fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
label_265fbc:
    // 0x265fbc: 0xc5430000  lwc1        $f3, 0x0($t2)
    ctx->pc = 0x265fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_265fc0:
    // 0x265fc0: 0xc5620000  lwc1        $f2, 0x0($t3)
    ctx->pc = 0x265fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_265fc4:
    // 0x265fc4: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x265fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_265fc8:
    // 0x265fc8: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x265fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265fcc:
    // 0x265fcc: 0x460338c2  mul.s       $f3, $f7, $f3
    ctx->pc = 0x265fccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
label_265fd0:
    // 0x265fd0: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x265fd0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_265fd4:
    // 0x265fd4: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x265fd4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_265fd8:
    // 0x265fd8: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x265fd8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_265fdc:
    // 0x265fdc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x265fdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_265fe0:
    // 0x265fe0: 0xe5e00004  swc1        $f0, 0x4($t7)
    ctx->pc = 0x265fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
label_265fe4:
    // 0x265fe4: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x265fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_265fe8:
    // 0x265fe8: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x265fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_265fec:
    // 0x265fec: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x265fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_265ff0:
    // 0x265ff0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x265ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265ff4:
    // 0x265ff4: 0x460338c2  mul.s       $f3, $f7, $f3
    ctx->pc = 0x265ff4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
label_265ff8:
    // 0x265ff8: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x265ff8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_265ffc:
    // 0x265ffc: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x265ffcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_266000:
    // 0x266000: 0x4601205c  madd.s      $f1, $f4, $f1
    ctx->pc = 0x266000u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_266004:
    // 0x266004: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x266004u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_266008:
    // 0x266008: 0xe5e00008  swc1        $f0, 0x8($t7)
    ctx->pc = 0x266008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
label_26600c:
    // 0x26600c: 0xade0000c  sw          $zero, 0xC($t7)
    ctx->pc = 0x26600cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 0));
label_266010:
    // 0x266010: 0x621ffdb  bgez        $s1, . + 4 + (-0x25 << 2)
label_266014:
    if (ctx->pc == 0x266014u) {
        ctx->pc = 0x266014u;
            // 0x266014: 0x25effff0  addiu       $t7, $t7, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967280));
        ctx->pc = 0x266018u;
        goto label_266018;
    }
    ctx->pc = 0x266010u;
    {
        const bool branch_taken_0x266010 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x266014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266010u;
            // 0x266014: 0x25effff0  addiu       $t7, $t7, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266010) {
            ctx->pc = 0x265F80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_265f80;
        }
    }
    ctx->pc = 0x266018u;
label_266018:
    // 0x266018: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x266018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26601c:
    // 0x26601c: 0x27b30134  addiu       $s3, $sp, 0x134
    ctx->pc = 0x26601cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_266020:
    // 0x266020: 0xc7a80140  lwc1        $f8, 0x140($sp)
    ctx->pc = 0x266020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_266024:
    // 0x266024: 0x27b20138  addiu       $s2, $sp, 0x138
    ctx->pc = 0x266024u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_266028:
    // 0x266028: 0xc7a40130  lwc1        $f4, 0x130($sp)
    ctx->pc = 0x266028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_26602c:
    // 0x26602c: 0x27b10124  addiu       $s1, $sp, 0x124
    ctx->pc = 0x26602cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
label_266030:
    // 0x266030: 0xc7a70144  lwc1        $f7, 0x144($sp)
    ctx->pc = 0x266030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_266034:
    // 0x266034: 0x27b00128  addiu       $s0, $sp, 0x128
    ctx->pc = 0x266034u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
label_266038:
    // 0x266038: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x266038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26603c:
    // 0x26603c: 0x27b6012c  addiu       $s6, $sp, 0x12C
    ctx->pc = 0x26603cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
label_266040:
    // 0x266040: 0xc7a10154  lwc1        $f1, 0x154($sp)
    ctx->pc = 0x266040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_266044:
    // 0x266044: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x266044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_266048:
    // 0x266048: 0xc7a60148  lwc1        $f6, 0x148($sp)
    ctx->pc = 0x266048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_26604c:
    // 0x26604c: 0x27a5016e  addiu       $a1, $sp, 0x16E
    ctx->pc = 0x26604cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 366));
label_266050:
    // 0x266050: 0x46080241  sub.s       $f9, $f0, $f8
    ctx->pc = 0x266050u;
    ctx->f[9] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
label_266054:
    // 0x266054: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x266054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_266058:
    // 0x266058: 0x46044201  sub.s       $f8, $f8, $f4
    ctx->pc = 0x266058u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[4]);
label_26605c:
    // 0x26605c: 0x46033901  sub.s       $f4, $f7, $f3
    ctx->pc = 0x26605cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[7], ctx->f[3]);
label_266060:
    // 0x266060: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x266060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_266064:
    // 0x266064: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x266064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_266068:
    // 0x266068: 0x460708c1  sub.s       $f3, $f1, $f7
    ctx->pc = 0x266068u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
label_26606c:
    // 0x26606c: 0x46023081  sub.s       $f2, $f6, $f2
    ctx->pc = 0x26606cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
label_266070:
    // 0x266070: 0x46060041  sub.s       $f1, $f0, $f6
    ctx->pc = 0x266070u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
label_266074:
    // 0x266074: 0x4601201a  mula.s      $f4, $f1
    ctx->pc = 0x266074u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_266078:
    // 0x266078: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x266078u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_26607c:
    // 0x26607c: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x26607cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_266080:
    // 0x266080: 0x4609101a  mula.s      $f2, $f9
    ctx->pc = 0x266080u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
label_266084:
    // 0x266084: 0x4601401d  msub.s      $f0, $f8, $f1
    ctx->pc = 0x266084u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[1]));
label_266088:
    // 0x266088: 0x4603401a  mula.s      $f8, $f3
    ctx->pc = 0x266088u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
label_26608c:
    // 0x26608c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x26608cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_266090:
    // 0x266090: 0x4609201d  msub.s      $f0, $f4, $f9
    ctx->pc = 0x266090u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[9]));
label_266094:
    // 0x266094: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x266094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_266098:
    // 0x266098: 0xe6c50000  swc1        $f5, 0x0($s6)
    ctx->pc = 0x266098u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_26609c:
    // 0x26609c: 0xa7a0016e  sh          $zero, 0x16E($sp)
    ctx->pc = 0x26609cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 366), (uint16_t)GPR_U32(ctx, 0));
label_2660a0:
    // 0x2660a0: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x2660a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2660a4:
    // 0x2660a4: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x2660a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_2660a8:
    // 0x2660a8: 0x320f809  jalr        $t9
label_2660ac:
    if (ctx->pc == 0x2660ACu) {
        ctx->pc = 0x2660ACu;
            // 0x2660ac: 0x27a70110  addiu       $a3, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x2660B0u;
        goto label_2660b0;
    }
    ctx->pc = 0x2660A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2660B0u);
        ctx->pc = 0x2660ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2660A8u;
            // 0x2660ac: 0x27a70110  addiu       $a3, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2660B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2660B0u; }
            if (ctx->pc != 0x2660B0u) { return; }
        }
        }
    }
    ctx->pc = 0x2660B0u;
label_2660b0:
    // 0x2660b0: 0xc6650000  lwc1        $f5, 0x0($s3)
    ctx->pc = 0x2660b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2660b4:
    // 0x2660b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2660b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2660b8:
    // 0x2660b8: 0xc7a60114  lwc1        $f6, 0x114($sp)
    ctx->pc = 0x2660b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2660bc:
    // 0x2660bc: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x2660bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2660c0:
    // 0x2660c0: 0xc7a90110  lwc1        $f9, 0x110($sp)
    ctx->pc = 0x2660c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_2660c4:
    // 0x2660c4: 0xc7a80130  lwc1        $f8, 0x130($sp)
    ctx->pc = 0x2660c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_2660c8:
    // 0x2660c8: 0xc7a70120  lwc1        $f7, 0x120($sp)
    ctx->pc = 0x2660c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2660cc:
    // 0x2660cc: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x2660ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2660d0:
    // 0x2660d0: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x2660d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2660d4:
    // 0x2660d4: 0xc7a30118  lwc1        $f3, 0x118($sp)
    ctx->pc = 0x2660d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2660d8:
    // 0x2660d8: 0x46053141  sub.s       $f5, $f6, $f5
    ctx->pc = 0x2660d8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
label_2660dc:
    // 0x2660dc: 0x46084a01  sub.s       $f8, $f9, $f8
    ctx->pc = 0x2660dcu;
    ctx->f[8] = FPU_SUB_S(ctx->f[9], ctx->f[8]);
label_2660e0:
    // 0x2660e0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2660e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2660e4:
    // 0x2660e4: 0x460741c2  mul.s       $f7, $f8, $f7
    ctx->pc = 0x2660e4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
label_2660e8:
    // 0x2660e8: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x2660e8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_2660ec:
    // 0x2660ec: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x2660ecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_2660f0:
    // 0x2660f0: 0x46043818  adda.s      $f7, $f4
    ctx->pc = 0x2660f0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
label_2660f4:
    // 0x2660f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2660f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2660f8:
    // 0x2660f8: 0x0  nop
    ctx->pc = 0x2660f8u;
    // NOP
label_2660fc:
    // 0x2660fc: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x2660fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_266100:
    // 0x266100: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x266100u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_266104:
    // 0x266104: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_266108:
    if (ctx->pc == 0x266108u) {
        ctx->pc = 0x266108u;
            // 0x266108: 0xc7aa0120  lwc1        $f10, 0x120($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
        ctx->pc = 0x26610Cu;
        goto label_26610c;
    }
    ctx->pc = 0x266104u;
    {
        const bool branch_taken_0x266104 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x266108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266104u;
            // 0x266108: 0xc7aa0120  lwc1        $f10, 0x120($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x266104) {
            ctx->pc = 0x266114u;
            goto label_266114;
        }
    }
    ctx->pc = 0x26610Cu;
label_26610c:
    // 0x26610c: 0x10000002  b           . + 4 + (0x2 << 2)
label_266110:
    if (ctx->pc == 0x266110u) {
        ctx->pc = 0x266110u;
            // 0x266110: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x266114u;
        goto label_266114;
    }
    ctx->pc = 0x26610Cu;
    {
        const bool branch_taken_0x26610c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26610Cu;
            // 0x266110: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26610c) {
            ctx->pc = 0x266118u;
            goto label_266118;
        }
    }
    ctx->pc = 0x266114u;
label_266114:
    // 0x266114: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x266114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_266118:
    // 0x266118: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_26611c:
    if (ctx->pc == 0x26611Cu) {
        ctx->pc = 0x26611Cu;
            // 0x26611c: 0x46005007  neg.s       $f0, $f10 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[10]);
        ctx->pc = 0x266120u;
        goto label_266120;
    }
    ctx->pc = 0x266118u;
    {
        const bool branch_taken_0x266118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26611Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266118u;
            // 0x26611c: 0x46005007  neg.s       $f0, $f10 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266118) {
            ctx->pc = 0x266148u;
            goto label_266148;
        }
    }
    ctx->pc = 0x266120u;
label_266120:
    // 0x266120: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x266120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_266124:
    // 0x266124: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x266124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_266128:
    // 0x266128: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x266128u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_26612c:
    // 0x26612c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x26612cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_266130:
    // 0x266130: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x266130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_266134:
    // 0x266134: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x266134u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_266138:
    // 0x266138: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x266138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_26613c:
    // 0x26613c: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x26613cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_266140:
    // 0x266140: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x266140u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_266144:
    // 0x266144: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x266144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_266148:
    // 0x266148: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x266148u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_26614c:
    // 0x26614c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26614cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_266150:
    // 0x266150: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x266150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_266154:
    // 0x266154: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x266154u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_266158:
    // 0x266158: 0x320f809  jalr        $t9
label_26615c:
    if (ctx->pc == 0x26615Cu) {
        ctx->pc = 0x26615Cu;
            // 0x26615c: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x266160u;
        goto label_266160;
    }
    ctx->pc = 0x266158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x266160u);
        ctx->pc = 0x26615Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266158u;
            // 0x26615c: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x266160u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x266160u; }
            if (ctx->pc != 0x266160u) { return; }
        }
        }
    }
    ctx->pc = 0x266160u;
label_266160:
    // 0x266160: 0x8fa5010c  lw          $a1, 0x10C($sp)
    ctx->pc = 0x266160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_266164:
    // 0x266164: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x266164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_266168:
    // 0x266168: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x266168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26616c:
    // 0x26616c: 0xa6a50000  sh          $a1, 0x0($s5)
    ctx->pc = 0x26616cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 5));
label_266170:
    // 0x266170: 0xa2a30008  sb          $v1, 0x8($s5)
    ctx->pc = 0x266170u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 8), (uint8_t)GPR_U32(ctx, 3));
label_266174:
    // 0x266174: 0xa2a20009  sb          $v0, 0x9($s5)
    ctx->pc = 0x266174u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 9), (uint8_t)GPR_U32(ctx, 2));
label_266178:
    // 0x266178: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x266178u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_26617c:
    // 0x26617c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x26617cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_266180:
    // 0x266180: 0x320f809  jalr        $t9
label_266184:
    if (ctx->pc == 0x266184u) {
        ctx->pc = 0x266184u;
            // 0x266184: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x266188u;
        goto label_266188;
    }
    ctx->pc = 0x266180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x266188u);
        ctx->pc = 0x266184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266180u;
            // 0x266184: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x266188u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x266188u; }
            if (ctx->pc != 0x266188u) { return; }
        }
        }
    }
    ctx->pc = 0x266188u;
label_266188:
    // 0x266188: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x266188u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26618c:
    // 0x26618c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x26618cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_266190:
    // 0x266190: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_266194:
    if (ctx->pc == 0x266194u) {
        ctx->pc = 0x266198u;
        goto label_266198;
    }
    ctx->pc = 0x266190u;
    {
        const bool branch_taken_0x266190 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x266190) {
            ctx->pc = 0x2661A0u;
            goto label_2661a0;
        }
    }
    ctx->pc = 0x266198u;
label_266198:
    // 0x266198: 0x10000003  b           . + 4 + (0x3 << 2)
label_26619c:
    if (ctx->pc == 0x26619Cu) {
        ctx->pc = 0x26619Cu;
            // 0x26619c: 0xa2a3000a  sb          $v1, 0xA($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 10), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2661A0u;
        goto label_2661a0;
    }
    ctx->pc = 0x266198u;
    {
        const bool branch_taken_0x266198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26619Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266198u;
            // 0x26619c: 0xa2a3000a  sb          $v1, 0xA($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 10), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266198) {
            ctx->pc = 0x2661A8u;
            goto label_2661a8;
        }
    }
    ctx->pc = 0x2661A0u;
label_2661a0:
    // 0x2661a0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2661a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2661a4:
    // 0x2661a4: 0xa2a3000a  sb          $v1, 0xA($s5)
    ctx->pc = 0x2661a4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 10), (uint8_t)GPR_U32(ctx, 3));
label_2661a8:
    // 0x2661a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2661a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2661ac:
    // 0x2661ac: 0xa2a3000b  sb          $v1, 0xB($s5)
    ctx->pc = 0x2661acu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 11), (uint8_t)GPR_U32(ctx, 3));
label_2661b0:
    // 0x2661b0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2661b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2661b4:
    // 0x2661b4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2661b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2661b8:
    // 0x2661b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2661b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2661bc:
    // 0x2661bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2661bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2661c0:
    // 0x2661c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2661c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2661c4:
    // 0x2661c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2661c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2661c8:
    // 0x2661c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2661c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2661cc:
    // 0x2661cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2661ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2661d0:
    // 0x2661d0: 0x3e00008  jr          $ra
label_2661d4:
    if (ctx->pc == 0x2661D4u) {
        ctx->pc = 0x2661D4u;
            // 0x2661d4: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x2661D8u;
        goto label_2661d8;
    }
    ctx->pc = 0x2661D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2661D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2661D0u;
            // 0x2661d4: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2661D8u;
label_2661d8:
    // 0x2661d8: 0x0  nop
    ctx->pc = 0x2661d8u;
    // NOP
label_2661dc:
    // 0x2661dc: 0x0  nop
    ctx->pc = 0x2661dcu;
    // NOP
}
