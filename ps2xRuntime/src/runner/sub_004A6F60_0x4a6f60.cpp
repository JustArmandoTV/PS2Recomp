#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A6F60
// Address: 0x4a6f60 - 0x4a7190
void sub_004A6F60_0x4a6f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6F60_0x4a6f60");
#endif

    switch (ctx->pc) {
        case 0x4a6f60u: goto label_4a6f60;
        case 0x4a6f64u: goto label_4a6f64;
        case 0x4a6f68u: goto label_4a6f68;
        case 0x4a6f6cu: goto label_4a6f6c;
        case 0x4a6f70u: goto label_4a6f70;
        case 0x4a6f74u: goto label_4a6f74;
        case 0x4a6f78u: goto label_4a6f78;
        case 0x4a6f7cu: goto label_4a6f7c;
        case 0x4a6f80u: goto label_4a6f80;
        case 0x4a6f84u: goto label_4a6f84;
        case 0x4a6f88u: goto label_4a6f88;
        case 0x4a6f8cu: goto label_4a6f8c;
        case 0x4a6f90u: goto label_4a6f90;
        case 0x4a6f94u: goto label_4a6f94;
        case 0x4a6f98u: goto label_4a6f98;
        case 0x4a6f9cu: goto label_4a6f9c;
        case 0x4a6fa0u: goto label_4a6fa0;
        case 0x4a6fa4u: goto label_4a6fa4;
        case 0x4a6fa8u: goto label_4a6fa8;
        case 0x4a6facu: goto label_4a6fac;
        case 0x4a6fb0u: goto label_4a6fb0;
        case 0x4a6fb4u: goto label_4a6fb4;
        case 0x4a6fb8u: goto label_4a6fb8;
        case 0x4a6fbcu: goto label_4a6fbc;
        case 0x4a6fc0u: goto label_4a6fc0;
        case 0x4a6fc4u: goto label_4a6fc4;
        case 0x4a6fc8u: goto label_4a6fc8;
        case 0x4a6fccu: goto label_4a6fcc;
        case 0x4a6fd0u: goto label_4a6fd0;
        case 0x4a6fd4u: goto label_4a6fd4;
        case 0x4a6fd8u: goto label_4a6fd8;
        case 0x4a6fdcu: goto label_4a6fdc;
        case 0x4a6fe0u: goto label_4a6fe0;
        case 0x4a6fe4u: goto label_4a6fe4;
        case 0x4a6fe8u: goto label_4a6fe8;
        case 0x4a6fecu: goto label_4a6fec;
        case 0x4a6ff0u: goto label_4a6ff0;
        case 0x4a6ff4u: goto label_4a6ff4;
        case 0x4a6ff8u: goto label_4a6ff8;
        case 0x4a6ffcu: goto label_4a6ffc;
        case 0x4a7000u: goto label_4a7000;
        case 0x4a7004u: goto label_4a7004;
        case 0x4a7008u: goto label_4a7008;
        case 0x4a700cu: goto label_4a700c;
        case 0x4a7010u: goto label_4a7010;
        case 0x4a7014u: goto label_4a7014;
        case 0x4a7018u: goto label_4a7018;
        case 0x4a701cu: goto label_4a701c;
        case 0x4a7020u: goto label_4a7020;
        case 0x4a7024u: goto label_4a7024;
        case 0x4a7028u: goto label_4a7028;
        case 0x4a702cu: goto label_4a702c;
        case 0x4a7030u: goto label_4a7030;
        case 0x4a7034u: goto label_4a7034;
        case 0x4a7038u: goto label_4a7038;
        case 0x4a703cu: goto label_4a703c;
        case 0x4a7040u: goto label_4a7040;
        case 0x4a7044u: goto label_4a7044;
        case 0x4a7048u: goto label_4a7048;
        case 0x4a704cu: goto label_4a704c;
        case 0x4a7050u: goto label_4a7050;
        case 0x4a7054u: goto label_4a7054;
        case 0x4a7058u: goto label_4a7058;
        case 0x4a705cu: goto label_4a705c;
        case 0x4a7060u: goto label_4a7060;
        case 0x4a7064u: goto label_4a7064;
        case 0x4a7068u: goto label_4a7068;
        case 0x4a706cu: goto label_4a706c;
        case 0x4a7070u: goto label_4a7070;
        case 0x4a7074u: goto label_4a7074;
        case 0x4a7078u: goto label_4a7078;
        case 0x4a707cu: goto label_4a707c;
        case 0x4a7080u: goto label_4a7080;
        case 0x4a7084u: goto label_4a7084;
        case 0x4a7088u: goto label_4a7088;
        case 0x4a708cu: goto label_4a708c;
        case 0x4a7090u: goto label_4a7090;
        case 0x4a7094u: goto label_4a7094;
        case 0x4a7098u: goto label_4a7098;
        case 0x4a709cu: goto label_4a709c;
        case 0x4a70a0u: goto label_4a70a0;
        case 0x4a70a4u: goto label_4a70a4;
        case 0x4a70a8u: goto label_4a70a8;
        case 0x4a70acu: goto label_4a70ac;
        case 0x4a70b0u: goto label_4a70b0;
        case 0x4a70b4u: goto label_4a70b4;
        case 0x4a70b8u: goto label_4a70b8;
        case 0x4a70bcu: goto label_4a70bc;
        case 0x4a70c0u: goto label_4a70c0;
        case 0x4a70c4u: goto label_4a70c4;
        case 0x4a70c8u: goto label_4a70c8;
        case 0x4a70ccu: goto label_4a70cc;
        case 0x4a70d0u: goto label_4a70d0;
        case 0x4a70d4u: goto label_4a70d4;
        case 0x4a70d8u: goto label_4a70d8;
        case 0x4a70dcu: goto label_4a70dc;
        case 0x4a70e0u: goto label_4a70e0;
        case 0x4a70e4u: goto label_4a70e4;
        case 0x4a70e8u: goto label_4a70e8;
        case 0x4a70ecu: goto label_4a70ec;
        case 0x4a70f0u: goto label_4a70f0;
        case 0x4a70f4u: goto label_4a70f4;
        case 0x4a70f8u: goto label_4a70f8;
        case 0x4a70fcu: goto label_4a70fc;
        case 0x4a7100u: goto label_4a7100;
        case 0x4a7104u: goto label_4a7104;
        case 0x4a7108u: goto label_4a7108;
        case 0x4a710cu: goto label_4a710c;
        case 0x4a7110u: goto label_4a7110;
        case 0x4a7114u: goto label_4a7114;
        case 0x4a7118u: goto label_4a7118;
        case 0x4a711cu: goto label_4a711c;
        case 0x4a7120u: goto label_4a7120;
        case 0x4a7124u: goto label_4a7124;
        case 0x4a7128u: goto label_4a7128;
        case 0x4a712cu: goto label_4a712c;
        case 0x4a7130u: goto label_4a7130;
        case 0x4a7134u: goto label_4a7134;
        case 0x4a7138u: goto label_4a7138;
        case 0x4a713cu: goto label_4a713c;
        case 0x4a7140u: goto label_4a7140;
        case 0x4a7144u: goto label_4a7144;
        case 0x4a7148u: goto label_4a7148;
        case 0x4a714cu: goto label_4a714c;
        case 0x4a7150u: goto label_4a7150;
        case 0x4a7154u: goto label_4a7154;
        case 0x4a7158u: goto label_4a7158;
        case 0x4a715cu: goto label_4a715c;
        case 0x4a7160u: goto label_4a7160;
        case 0x4a7164u: goto label_4a7164;
        case 0x4a7168u: goto label_4a7168;
        case 0x4a716cu: goto label_4a716c;
        case 0x4a7170u: goto label_4a7170;
        case 0x4a7174u: goto label_4a7174;
        case 0x4a7178u: goto label_4a7178;
        case 0x4a717cu: goto label_4a717c;
        case 0x4a7180u: goto label_4a7180;
        case 0x4a7184u: goto label_4a7184;
        case 0x4a7188u: goto label_4a7188;
        case 0x4a718cu: goto label_4a718c;
        default: break;
    }

    ctx->pc = 0x4a6f60u;

label_4a6f60:
    // 0x4a6f60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4a6f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4a6f64:
    // 0x4a6f64: 0x3c0241a8  lui         $v0, 0x41A8
    ctx->pc = 0x4a6f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16808 << 16));
label_4a6f68:
    // 0x4a6f68: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4a6f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_4a6f6c:
    // 0x4a6f6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a6f6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a6f70:
    // 0x4a6f70: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4a6f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4a6f74:
    // 0x4a6f74: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4a6f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4a6f78:
    // 0x4a6f78: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4a6f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4a6f7c:
    // 0x4a6f7c: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x4a6f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
label_4a6f80:
    // 0x4a6f80: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4a6f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4a6f84:
    // 0x4a6f84: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4a6f84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a6f88:
    // 0x4a6f88: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4a6f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4a6f8c:
    // 0x4a6f8c: 0x3c130066  lui         $s3, 0x66
    ctx->pc = 0x4a6f8cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)102 << 16));
label_4a6f90:
    // 0x4a6f90: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4a6f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4a6f94:
    // 0x4a6f94: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4a6f94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a6f98:
    // 0x4a6f98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a6f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4a6f9c:
    // 0x4a6f9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4a6f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a6fa0:
    // 0x4a6fa0: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x4a6fa0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_4a6fa4:
    // 0x4a6fa4: 0x26734f80  addiu       $s3, $s3, 0x4F80
    ctx->pc = 0x4a6fa4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20352));
label_4a6fa8:
    // 0x4a6fa8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x4a6fa8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_4a6fac:
    // 0x4a6fac: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4a6facu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4a6fb0:
    // 0x4a6fb0: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x4a6fb0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_4a6fb4:
    // 0x4a6fb4: 0x461505c0  add.s       $f23, $f0, $f21
    ctx->pc = 0x4a6fb4u;
    ctx->f[23] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_4a6fb8:
    // 0x4a6fb8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4a6fb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4a6fbc:
    // 0x4a6fbc: 0x8c5289e0  lw          $s2, -0x7620($v0)
    ctx->pc = 0x4a6fbcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4a6fc0:
    // 0x4a6fc0: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x4a6fc0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
label_4a6fc4:
    // 0x4a6fc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a6fc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a6fc8:
    // 0x4a6fc8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a6fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a6fcc:
    // 0x4a6fcc: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x4a6fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_4a6fd0:
    // 0x4a6fd0: 0xc0506ac  jal         func_141AB0
label_4a6fd4:
    if (ctx->pc == 0x4A6FD4u) {
        ctx->pc = 0x4A6FD4u;
            // 0x4a6fd4: 0x46140580  add.s       $f22, $f0, $f20 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x4A6FD8u;
        goto label_4a6fd8;
    }
    ctx->pc = 0x4A6FD0u;
    SET_GPR_U32(ctx, 31, 0x4A6FD8u);
    ctx->pc = 0x4A6FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6FD0u;
            // 0x4a6fd4: 0x46140580  add.s       $f22, $f0, $f20 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6FD8u; }
        if (ctx->pc != 0x4A6FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6FD8u; }
        if (ctx->pc != 0x4A6FD8u) { return; }
    }
    ctx->pc = 0x4A6FD8u;
label_4a6fd8:
    // 0x4a6fd8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4a6fd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4a6fdc:
    // 0x4a6fdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a6fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a6fe0:
    // 0x4a6fe0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4a6fe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4a6fe4:
    // 0x4a6fe4: 0x320f809  jalr        $t9
label_4a6fe8:
    if (ctx->pc == 0x4A6FE8u) {
        ctx->pc = 0x4A6FE8u;
            // 0x4a6fe8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4A6FECu;
        goto label_4a6fec;
    }
    ctx->pc = 0x4A6FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A6FECu);
        ctx->pc = 0x4A6FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6FE4u;
            // 0x4a6fe8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A6FECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A6FECu; }
            if (ctx->pc != 0x4A6FECu) { return; }
        }
        }
    }
    ctx->pc = 0x4A6FECu;
label_4a6fec:
    // 0x4a6fec: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4a6fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4a6ff0:
    // 0x4a6ff0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4a6ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4a6ff4:
    // 0x4a6ff4: 0x84714e7a  lh          $s1, 0x4E7A($v1)
    ctx->pc = 0x4a6ff4u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20090)));
label_4a6ff8:
    // 0x4a6ff8: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x4a6ff8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_4a6ffc:
    // 0x4a6ffc: 0x84504e78  lh          $s0, 0x4E78($v0)
    ctx->pc = 0x4a6ffcu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20088)));
label_4a7000:
    // 0x4a7000: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a7000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a7004:
    // 0x4a7004: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x4a7004u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_4a7008:
    // 0x4a7008: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4a7008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a700c:
    // 0x4a700c: 0x3c0342f8  lui         $v1, 0x42F8
    ctx->pc = 0x4a700cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17144 << 16));
label_4a7010:
    // 0x4a7010: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4a7010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a7014:
    // 0x4a7014: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a7014u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a7018:
    // 0x4a7018: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a7018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a701c:
    // 0x4a701c: 0x46170380  add.s       $f14, $f0, $f23
    ctx->pc = 0x4a701cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_4a7020:
    // 0x4a7020: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a7020u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a7024:
    // 0x4a7024: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x4a7024u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a7028:
    // 0x4a7028: 0x0  nop
    ctx->pc = 0x4a7028u;
    // NOP
label_4a702c:
    // 0x4a702c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a702cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a7030:
    // 0x4a7030: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4a7030u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a7034:
    // 0x4a7034: 0x0  nop
    ctx->pc = 0x4a7034u;
    // NOP
label_4a7038:
    // 0x4a7038: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a7038u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a703c:
    // 0x4a703c: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x4a703cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a7040:
    // 0x4a7040: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a7040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a7044:
    // 0x4a7044: 0xc0bc284  jal         func_2F0A10
label_4a7048:
    if (ctx->pc == 0x4A7048u) {
        ctx->pc = 0x4A7048u;
            // 0x4a7048: 0x4600b3c0  add.s       $f15, $f22, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->pc = 0x4A704Cu;
        goto label_4a704c;
    }
    ctx->pc = 0x4A7044u;
    SET_GPR_U32(ctx, 31, 0x4A704Cu);
    ctx->pc = 0x4A7048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7044u;
            // 0x4a7048: 0x4600b3c0  add.s       $f15, $f22, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A704Cu; }
        if (ctx->pc != 0x4A704Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A704Cu; }
        if (ctx->pc != 0x4A704Cu) { return; }
    }
    ctx->pc = 0x4A704Cu;
label_4a704c:
    // 0x4a704c: 0x3c02435b  lui         $v0, 0x435B
    ctx->pc = 0x4a704cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17243 << 16));
label_4a7050:
    // 0x4a7050: 0x3c0342f8  lui         $v1, 0x42F8
    ctx->pc = 0x4a7050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17144 << 16));
label_4a7054:
    // 0x4a7054: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a7054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a7058:
    // 0x4a7058: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a7058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a705c:
    // 0x4a705c: 0x46150300  add.s       $f12, $f0, $f21
    ctx->pc = 0x4a705cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_4a7060:
    // 0x4a7060: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a7060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a7064:
    // 0x4a7064: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4a7064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a7068:
    // 0x4a7068: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4a7068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a706c:
    // 0x4a706c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a706cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a7070:
    // 0x4a7070: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a7070u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a7074:
    // 0x4a7074: 0x0  nop
    ctx->pc = 0x4a7074u;
    // NOP
label_4a7078:
    // 0x4a7078: 0x460c0380  add.s       $f14, $f0, $f12
    ctx->pc = 0x4a7078u;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_4a707c:
    // 0x4a707c: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x4a707cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a7080:
    // 0x4a7080: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x4a7080u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4a7084:
    // 0x4a7084: 0x0  nop
    ctx->pc = 0x4a7084u;
    // NOP
label_4a7088:
    // 0x4a7088: 0x46800c20  cvt.s.w     $f16, $f1
    ctx->pc = 0x4a7088u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a708c:
    // 0x4a708c: 0x4600b3c0  add.s       $f15, $f22, $f0
    ctx->pc = 0x4a708cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_4a7090:
    // 0x4a7090: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4a7090u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a7094:
    // 0x4a7094: 0x0  nop
    ctx->pc = 0x4a7094u;
    // NOP
label_4a7098:
    // 0x4a7098: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a7098u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a709c:
    // 0x4a709c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a709cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a70a0:
    // 0x4a70a0: 0xc0bc284  jal         func_2F0A10
label_4a70a4:
    if (ctx->pc == 0x4A70A4u) {
        ctx->pc = 0x4A70A4u;
            // 0x4a70a4: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x4A70A8u;
        goto label_4a70a8;
    }
    ctx->pc = 0x4A70A0u;
    SET_GPR_U32(ctx, 31, 0x4A70A8u);
    ctx->pc = 0x4A70A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A70A0u;
            // 0x4a70a4: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A70A8u; }
        if (ctx->pc != 0x4A70A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A70A8u; }
        if (ctx->pc != 0x4A70A8u) { return; }
    }
    ctx->pc = 0x4A70A8u;
label_4a70a8:
    // 0x4a70a8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x4a70a8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a70ac:
    // 0x4a70ac: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x4a70acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_4a70b0:
    // 0x4a70b0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4a70b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a70b4:
    // 0x4a70b4: 0x3c084337  lui         $t0, 0x4337
    ctx->pc = 0x4a70b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17207 << 16));
label_4a70b8:
    // 0x4a70b8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4a70b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4a70bc:
    // 0x4a70bc: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4a70bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_4a70c0:
    // 0x4a70c0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4a70c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4a70c4:
    // 0x4a70c4: 0x3c093f00  lui         $t1, 0x3F00
    ctx->pc = 0x4a70c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16128 << 16));
label_4a70c8:
    // 0x4a70c8: 0x244250a8  addiu       $v0, $v0, 0x50A8
    ctx->pc = 0x4a70c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20648));
label_4a70cc:
    // 0x4a70cc: 0x24844e80  addiu       $a0, $a0, 0x4E80
    ctx->pc = 0x4a70ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20096));
label_4a70d0:
    // 0x4a70d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a70d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a70d4:
    // 0x4a70d4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4a70d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a70d8:
    // 0x4a70d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4a70d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a70dc:
    // 0x4a70dc: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x4a70dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_4a70e0:
    // 0x4a70e0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4a70e0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a70e4:
    // 0x4a70e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a70e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a70e8:
    // 0x4a70e8: 0x46150040  add.s       $f1, $f0, $f21
    ctx->pc = 0x4a70e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_4a70ec:
    // 0x4a70ec: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x4a70ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4a70f0:
    // 0x4a70f0: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x4a70f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4a70f4:
    // 0x4a70f4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a70f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a70f8:
    // 0x4a70f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a70f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a70fc:
    // 0x4a70fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a70fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a7100:
    // 0x4a7100: 0x0  nop
    ctx->pc = 0x4a7100u;
    // NOP
label_4a7104:
    // 0x4a7104: 0x46140340  add.s       $f13, $f0, $f20
    ctx->pc = 0x4a7104u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_4a7108:
    // 0x4a7108: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x4a7108u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a710c:
    // 0x4a710c: 0x0  nop
    ctx->pc = 0x4a710cu;
    // NOP
label_4a7110:
    // 0x4a7110: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a7110u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a7114:
    // 0x4a7114: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4a7114u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a7118:
    // 0x4a7118: 0x0  nop
    ctx->pc = 0x4a7118u;
    // NOP
label_4a711c:
    // 0x4a711c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4a711cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4a7120:
    // 0x4a7120: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x4a7120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a7124:
    // 0x4a7124: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x4a7124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4a7128:
    // 0x4a7128: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x4a7128u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4a712c:
    // 0x4a712c: 0x46006bc0  add.s       $f15, $f13, $f0
    ctx->pc = 0x4a712cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
label_4a7130:
    // 0x4a7130: 0x4603131d  msub.s      $f12, $f2, $f3
    ctx->pc = 0x4a7130u;
    ctx->f[12] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_4a7134:
    // 0x4a7134: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a7134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a7138:
    // 0x4a7138: 0xc0bc284  jal         func_2F0A10
label_4a713c:
    if (ctx->pc == 0x4A713Cu) {
        ctx->pc = 0x4A713Cu;
            // 0x4a713c: 0x46036380  add.s       $f14, $f12, $f3 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[3]);
        ctx->pc = 0x4A7140u;
        goto label_4a7140;
    }
    ctx->pc = 0x4A7138u;
    SET_GPR_U32(ctx, 31, 0x4A7140u);
    ctx->pc = 0x4A713Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7138u;
            // 0x4a713c: 0x46036380  add.s       $f14, $f12, $f3 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[3]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A7140u; }
        if (ctx->pc != 0x4A7140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A7140u; }
        if (ctx->pc != 0x4A7140u) { return; }
    }
    ctx->pc = 0x4A7140u;
label_4a7140:
    // 0x4a7140: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4a7140u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4a7144:
    // 0x4a7144: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4a7144u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4a7148:
    // 0x4a7148: 0x320f809  jalr        $t9
label_4a714c:
    if (ctx->pc == 0x4A714Cu) {
        ctx->pc = 0x4A714Cu;
            // 0x4a714c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A7150u;
        goto label_4a7150;
    }
    ctx->pc = 0x4A7148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A7150u);
        ctx->pc = 0x4A714Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A7148u;
            // 0x4a714c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A7150u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A7150u; }
            if (ctx->pc != 0x4A7150u) { return; }
        }
        }
    }
    ctx->pc = 0x4A7150u;
label_4a7150:
    // 0x4a7150: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4a7150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4a7154:
    // 0x4a7154: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x4a7154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_4a7158:
    // 0x4a7158: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4a7158u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a715c:
    // 0x4a715c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x4a715cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4a7160:
    // 0x4a7160: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4a7160u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a7164:
    // 0x4a7164: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4a7164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4a7168:
    // 0x4a7168: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4a7168u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a716c:
    // 0x4a716c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4a716cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4a7170:
    // 0x4a7170: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4a7170u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a7174:
    // 0x4a7174: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4a7174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a7178:
    // 0x4a7178: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a7178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a717c:
    // 0x4a717c: 0x3e00008  jr          $ra
label_4a7180:
    if (ctx->pc == 0x4A7180u) {
        ctx->pc = 0x4A7180u;
            // 0x4a7180: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4A7184u;
        goto label_4a7184;
    }
    ctx->pc = 0x4A717Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A7180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A717Cu;
            // 0x4a7180: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A7184u;
label_4a7184:
    // 0x4a7184: 0x0  nop
    ctx->pc = 0x4a7184u;
    // NOP
label_4a7188:
    // 0x4a7188: 0x0  nop
    ctx->pc = 0x4a7188u;
    // NOP
label_4a718c:
    // 0x4a718c: 0x0  nop
    ctx->pc = 0x4a718cu;
    // NOP
}
