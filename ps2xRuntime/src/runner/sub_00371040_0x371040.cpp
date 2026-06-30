#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00371040
// Address: 0x371040 - 0x3711f0
void sub_00371040_0x371040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371040_0x371040");
#endif

    switch (ctx->pc) {
        case 0x371040u: goto label_371040;
        case 0x371044u: goto label_371044;
        case 0x371048u: goto label_371048;
        case 0x37104cu: goto label_37104c;
        case 0x371050u: goto label_371050;
        case 0x371054u: goto label_371054;
        case 0x371058u: goto label_371058;
        case 0x37105cu: goto label_37105c;
        case 0x371060u: goto label_371060;
        case 0x371064u: goto label_371064;
        case 0x371068u: goto label_371068;
        case 0x37106cu: goto label_37106c;
        case 0x371070u: goto label_371070;
        case 0x371074u: goto label_371074;
        case 0x371078u: goto label_371078;
        case 0x37107cu: goto label_37107c;
        case 0x371080u: goto label_371080;
        case 0x371084u: goto label_371084;
        case 0x371088u: goto label_371088;
        case 0x37108cu: goto label_37108c;
        case 0x371090u: goto label_371090;
        case 0x371094u: goto label_371094;
        case 0x371098u: goto label_371098;
        case 0x37109cu: goto label_37109c;
        case 0x3710a0u: goto label_3710a0;
        case 0x3710a4u: goto label_3710a4;
        case 0x3710a8u: goto label_3710a8;
        case 0x3710acu: goto label_3710ac;
        case 0x3710b0u: goto label_3710b0;
        case 0x3710b4u: goto label_3710b4;
        case 0x3710b8u: goto label_3710b8;
        case 0x3710bcu: goto label_3710bc;
        case 0x3710c0u: goto label_3710c0;
        case 0x3710c4u: goto label_3710c4;
        case 0x3710c8u: goto label_3710c8;
        case 0x3710ccu: goto label_3710cc;
        case 0x3710d0u: goto label_3710d0;
        case 0x3710d4u: goto label_3710d4;
        case 0x3710d8u: goto label_3710d8;
        case 0x3710dcu: goto label_3710dc;
        case 0x3710e0u: goto label_3710e0;
        case 0x3710e4u: goto label_3710e4;
        case 0x3710e8u: goto label_3710e8;
        case 0x3710ecu: goto label_3710ec;
        case 0x3710f0u: goto label_3710f0;
        case 0x3710f4u: goto label_3710f4;
        case 0x3710f8u: goto label_3710f8;
        case 0x3710fcu: goto label_3710fc;
        case 0x371100u: goto label_371100;
        case 0x371104u: goto label_371104;
        case 0x371108u: goto label_371108;
        case 0x37110cu: goto label_37110c;
        case 0x371110u: goto label_371110;
        case 0x371114u: goto label_371114;
        case 0x371118u: goto label_371118;
        case 0x37111cu: goto label_37111c;
        case 0x371120u: goto label_371120;
        case 0x371124u: goto label_371124;
        case 0x371128u: goto label_371128;
        case 0x37112cu: goto label_37112c;
        case 0x371130u: goto label_371130;
        case 0x371134u: goto label_371134;
        case 0x371138u: goto label_371138;
        case 0x37113cu: goto label_37113c;
        case 0x371140u: goto label_371140;
        case 0x371144u: goto label_371144;
        case 0x371148u: goto label_371148;
        case 0x37114cu: goto label_37114c;
        case 0x371150u: goto label_371150;
        case 0x371154u: goto label_371154;
        case 0x371158u: goto label_371158;
        case 0x37115cu: goto label_37115c;
        case 0x371160u: goto label_371160;
        case 0x371164u: goto label_371164;
        case 0x371168u: goto label_371168;
        case 0x37116cu: goto label_37116c;
        case 0x371170u: goto label_371170;
        case 0x371174u: goto label_371174;
        case 0x371178u: goto label_371178;
        case 0x37117cu: goto label_37117c;
        case 0x371180u: goto label_371180;
        case 0x371184u: goto label_371184;
        case 0x371188u: goto label_371188;
        case 0x37118cu: goto label_37118c;
        case 0x371190u: goto label_371190;
        case 0x371194u: goto label_371194;
        case 0x371198u: goto label_371198;
        case 0x37119cu: goto label_37119c;
        case 0x3711a0u: goto label_3711a0;
        case 0x3711a4u: goto label_3711a4;
        case 0x3711a8u: goto label_3711a8;
        case 0x3711acu: goto label_3711ac;
        case 0x3711b0u: goto label_3711b0;
        case 0x3711b4u: goto label_3711b4;
        case 0x3711b8u: goto label_3711b8;
        case 0x3711bcu: goto label_3711bc;
        case 0x3711c0u: goto label_3711c0;
        case 0x3711c4u: goto label_3711c4;
        case 0x3711c8u: goto label_3711c8;
        case 0x3711ccu: goto label_3711cc;
        case 0x3711d0u: goto label_3711d0;
        case 0x3711d4u: goto label_3711d4;
        case 0x3711d8u: goto label_3711d8;
        case 0x3711dcu: goto label_3711dc;
        case 0x3711e0u: goto label_3711e0;
        case 0x3711e4u: goto label_3711e4;
        case 0x3711e8u: goto label_3711e8;
        case 0x3711ecu: goto label_3711ec;
        default: break;
    }

    ctx->pc = 0x371040u;

label_371040:
    // 0x371040: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x371040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_371044:
    // 0x371044: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x371044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_371048:
    // 0x371048: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x371048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_37104c:
    // 0x37104c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37104cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_371050:
    // 0x371050: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x371050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_371054:
    // 0x371054: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x371054u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_371058:
    // 0x371058: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x371058u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_37105c:
    // 0x37105c: 0x320f809  jalr        $t9
label_371060:
    if (ctx->pc == 0x371060u) {
        ctx->pc = 0x371060u;
            // 0x371060: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x371064u;
        goto label_371064;
    }
    ctx->pc = 0x37105Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x371064u);
        ctx->pc = 0x371060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37105Cu;
            // 0x371060: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x371064u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x371064u; }
            if (ctx->pc != 0x371064u) { return; }
        }
        }
    }
    ctx->pc = 0x371064u;
label_371064:
    // 0x371064: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x371064u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
label_371068:
    // 0x371068: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x371068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_37106c:
    // 0x37106c: 0xae400064  sw          $zero, 0x64($s2)
    ctx->pc = 0x37106cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
label_371070:
    // 0x371070: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x371070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_371074:
    // 0x371074: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x371074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_371078:
    // 0x371078: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x371078u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37107c:
    // 0x37107c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x37107cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_371080:
    // 0x371080: 0x54430021  bnel        $v0, $v1, . + 4 + (0x21 << 2)
label_371084:
    if (ctx->pc == 0x371084u) {
        ctx->pc = 0x371084u;
            // 0x371084: 0x2411000c  addiu       $s1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x371088u;
        goto label_371088;
    }
    ctx->pc = 0x371080u;
    {
        const bool branch_taken_0x371080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x371080) {
            ctx->pc = 0x371084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x371080u;
            // 0x371084: 0x2411000c  addiu       $s1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x371108u;
            goto label_371108;
        }
    }
    ctx->pc = 0x371088u;
label_371088:
    // 0x371088: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x371088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37108c:
    // 0x37108c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x37108cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_371090:
    // 0x371090: 0x8c420cc4  lw          $v0, 0xCC4($v0)
    ctx->pc = 0x371090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3268)));
label_371094:
    // 0x371094: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
label_371098:
    if (ctx->pc == 0x371098u) {
        ctx->pc = 0x37109Cu;
        goto label_37109c;
    }
    ctx->pc = 0x371094u;
    {
        const bool branch_taken_0x371094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x371094) {
            ctx->pc = 0x371104u;
            goto label_371104;
        }
    }
    ctx->pc = 0x37109Cu;
label_37109c:
    // 0x37109c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37109cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3710a0:
    // 0x3710a0: 0x8c426050  lw          $v0, 0x6050($v0)
    ctx->pc = 0x3710a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24656)));
label_3710a4:
    // 0x3710a4: 0x8c430070  lw          $v1, 0x70($v0)
    ctx->pc = 0x3710a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_3710a8:
    // 0x3710a8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_3710ac:
    if (ctx->pc == 0x3710ACu) {
        ctx->pc = 0x3710B0u;
        goto label_3710b0;
    }
    ctx->pc = 0x3710A8u;
    {
        const bool branch_taken_0x3710a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3710a8) {
            ctx->pc = 0x3710E8u;
            goto label_3710e8;
        }
    }
    ctx->pc = 0x3710B0u;
label_3710b0:
    // 0x3710b0: 0x8c450074  lw          $a1, 0x74($v0)
    ctx->pc = 0x3710b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3710b4:
    // 0x3710b4: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x3710b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_3710b8:
    // 0x3710b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3710b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3710bc:
    // 0x3710bc: 0x24844e80  addiu       $a0, $a0, 0x4E80
    ctx->pc = 0x3710bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20096));
label_3710c0:
    // 0x3710c0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3710c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3710c4:
    // 0x3710c4: 0x14520002  bne         $v0, $s2, . + 4 + (0x2 << 2)
label_3710c8:
    if (ctx->pc == 0x3710C8u) {
        ctx->pc = 0x3710CCu;
        goto label_3710cc;
    }
    ctx->pc = 0x3710C4u;
    {
        const bool branch_taken_0x3710c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x3710c4) {
            ctx->pc = 0x3710D0u;
            goto label_3710d0;
        }
    }
    ctx->pc = 0x3710CCu;
label_3710cc:
    // 0x3710cc: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x3710ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3710d0:
    // 0x3710d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3710d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3710d4:
    // 0x3710d4: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x3710d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3710d8:
    // 0x3710d8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3710d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_3710dc:
    // 0x3710dc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_3710e0:
    if (ctx->pc == 0x3710E0u) {
        ctx->pc = 0x3710E0u;
            // 0x3710e0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x3710E4u;
        goto label_3710e4;
    }
    ctx->pc = 0x3710DCu;
    {
        const bool branch_taken_0x3710dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3710E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3710DCu;
            // 0x3710e0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3710dc) {
            ctx->pc = 0x3710C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3710c0;
        }
    }
    ctx->pc = 0x3710E4u;
label_3710e4:
    // 0x3710e4: 0x0  nop
    ctx->pc = 0x3710e4u;
    // NOP
label_3710e8:
    // 0x3710e8: 0x3c023f2a  lui         $v0, 0x3F2A
    ctx->pc = 0x3710e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16170 << 16));
label_3710ec:
    // 0x3710ec: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x3710ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_3710f0:
    // 0x3710f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3710f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3710f4:
    // 0x3710f4: 0x0  nop
    ctx->pc = 0x3710f4u;
    // NOP
label_3710f8:
    // 0x3710f8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3710f8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_3710fc:
    // 0x3710fc: 0xe6410064  swc1        $f1, 0x64($s2)
    ctx->pc = 0x3710fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
label_371100:
    // 0x371100: 0xe6400058  swc1        $f0, 0x58($s2)
    ctx->pc = 0x371100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
label_371104:
    // 0x371104: 0x2411000c  addiu       $s1, $zero, 0xC
    ctx->pc = 0x371104u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_371108:
    // 0x371108: 0x26500080  addiu       $s0, $s2, 0x80
    ctx->pc = 0x371108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_37110c:
    // 0x37110c: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x37110cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_371110:
    // 0x371110: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x371110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_371114:
    // 0x371114: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x371114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_371118:
    // 0x371118: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x371118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37111c:
    // 0x37111c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37111cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_371120:
    // 0x371120: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x371120u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_371124:
    // 0x371124: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x371124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_371128:
    // 0x371128: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x371128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_37112c:
    // 0x37112c: 0xc08bff0  jal         func_22FFC0
label_371130:
    if (ctx->pc == 0x371130u) {
        ctx->pc = 0x371130u;
            // 0x371130: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x371134u;
        goto label_371134;
    }
    ctx->pc = 0x37112Cu;
    SET_GPR_U32(ctx, 31, 0x371134u);
    ctx->pc = 0x371130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37112Cu;
            // 0x371130: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371134u; }
        if (ctx->pc != 0x371134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x371134u; }
        if (ctx->pc != 0x371134u) { return; }
    }
    ctx->pc = 0x371134u;
label_371134:
    // 0x371134: 0xc0d8760  jal         func_361D80
label_371138:
    if (ctx->pc == 0x371138u) {
        ctx->pc = 0x371138u;
            // 0x371138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37113Cu;
        goto label_37113c;
    }
    ctx->pc = 0x371134u;
    SET_GPR_U32(ctx, 31, 0x37113Cu);
    ctx->pc = 0x371138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x371134u;
            // 0x371138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361D80u;
    if (runtime->hasFunction(0x361D80u)) {
        auto targetFn = runtime->lookupFunction(0x361D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37113Cu; }
        if (ctx->pc != 0x37113Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361D80_0x361d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37113Cu; }
        if (ctx->pc != 0x37113Cu) { return; }
    }
    ctx->pc = 0x37113Cu;
label_37113c:
    // 0x37113c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x37113cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_371140:
    // 0x371140: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x371140u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_371144:
    // 0x371144: 0x320f809  jalr        $t9
label_371148:
    if (ctx->pc == 0x371148u) {
        ctx->pc = 0x371148u;
            // 0x371148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37114Cu;
        goto label_37114c;
    }
    ctx->pc = 0x371144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37114Cu);
        ctx->pc = 0x371148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x371144u;
            // 0x371148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37114Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37114Cu; }
            if (ctx->pc != 0x37114Cu) { return; }
        }
        }
    }
    ctx->pc = 0x37114Cu;
label_37114c:
    // 0x37114c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x37114cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_371150:
    // 0x371150: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x371150u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_371154:
    // 0x371154: 0x320f809  jalr        $t9
label_371158:
    if (ctx->pc == 0x371158u) {
        ctx->pc = 0x371158u;
            // 0x371158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37115Cu;
        goto label_37115c;
    }
    ctx->pc = 0x371154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37115Cu);
        ctx->pc = 0x371158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x371154u;
            // 0x371158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37115Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37115Cu; }
            if (ctx->pc != 0x37115Cu) { return; }
        }
        }
    }
    ctx->pc = 0x37115Cu;
label_37115c:
    // 0x37115c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x37115cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_371160:
    // 0x371160: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x371160u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_371164:
    // 0x371164: 0x1620ffe9  bnez        $s1, . + 4 + (-0x17 << 2)
label_371168:
    if (ctx->pc == 0x371168u) {
        ctx->pc = 0x371168u;
            // 0x371168: 0x261000f0  addiu       $s0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x37116Cu;
        goto label_37116c;
    }
    ctx->pc = 0x371164u;
    {
        const bool branch_taken_0x371164 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x371168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x371164u;
            // 0x371168: 0x261000f0  addiu       $s0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371164) {
            ctx->pc = 0x37110Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_37110c;
        }
    }
    ctx->pc = 0x37116Cu;
label_37116c:
    // 0x37116c: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x37116cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_371170:
    // 0x371170: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x371170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_371174:
    // 0x371174: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x371174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_371178:
    // 0x371178: 0x2411000c  addiu       $s1, $zero, 0xC
    ctx->pc = 0x371178u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_37117c:
    // 0x37117c: 0x26500080  addiu       $s0, $s2, 0x80
    ctx->pc = 0x37117cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_371180:
    // 0x371180: 0xe640005c  swc1        $f0, 0x5C($s2)
    ctx->pc = 0x371180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
label_371184:
    // 0x371184: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x371184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_371188:
    // 0x371188: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x371188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37118c:
    // 0x37118c: 0xe6400060  swc1        $f0, 0x60($s2)
    ctx->pc = 0x37118cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
label_371190:
    // 0x371190: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x371190u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_371194:
    // 0x371194: 0xae400070  sw          $zero, 0x70($s2)
    ctx->pc = 0x371194u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
label_371198:
    // 0x371198: 0xae40006c  sw          $zero, 0x6C($s2)
    ctx->pc = 0x371198u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 0));
label_37119c:
    // 0x37119c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x37119cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3711a0:
    // 0x3711a0: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x3711a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_3711a4:
    // 0x3711a4: 0x320f809  jalr        $t9
label_3711a8:
    if (ctx->pc == 0x3711A8u) {
        ctx->pc = 0x3711A8u;
            // 0x3711a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3711ACu;
        goto label_3711ac;
    }
    ctx->pc = 0x3711A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3711ACu);
        ctx->pc = 0x3711A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3711A4u;
            // 0x3711a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3711ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3711ACu; }
            if (ctx->pc != 0x3711ACu) { return; }
        }
        }
    }
    ctx->pc = 0x3711ACu;
label_3711ac:
    // 0x3711ac: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3711acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3711b0:
    // 0x3711b0: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
label_3711b4:
    if (ctx->pc == 0x3711B4u) {
        ctx->pc = 0x3711B4u;
            // 0x3711b4: 0x261000f0  addiu       $s0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x3711B8u;
        goto label_3711b8;
    }
    ctx->pc = 0x3711B0u;
    {
        const bool branch_taken_0x3711b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3711B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3711B0u;
            // 0x3711b4: 0x261000f0  addiu       $s0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3711b0) {
            ctx->pc = 0x37119Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_37119c;
        }
    }
    ctx->pc = 0x3711B8u;
label_3711b8:
    // 0x3711b8: 0x8e440bc0  lw          $a0, 0xBC0($s2)
    ctx->pc = 0x3711b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3008)));
label_3711bc:
    // 0x3711bc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3711c0:
    if (ctx->pc == 0x3711C0u) {
        ctx->pc = 0x3711C0u;
            // 0x3711c0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x3711C4u;
        goto label_3711c4;
    }
    ctx->pc = 0x3711BCu;
    {
        const bool branch_taken_0x3711bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3711bc) {
            ctx->pc = 0x3711C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3711BCu;
            // 0x3711c0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3711D0u;
            goto label_3711d0;
        }
    }
    ctx->pc = 0x3711C4u;
label_3711c4:
    // 0x3711c4: 0xc122c94  jal         func_48B250
label_3711c8:
    if (ctx->pc == 0x3711C8u) {
        ctx->pc = 0x3711CCu;
        goto label_3711cc;
    }
    ctx->pc = 0x3711C4u;
    SET_GPR_U32(ctx, 31, 0x3711CCu);
    ctx->pc = 0x48B250u;
    if (runtime->hasFunction(0x48B250u)) {
        auto targetFn = runtime->lookupFunction(0x48B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3711CCu; }
        if (ctx->pc != 0x3711CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B250_0x48b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3711CCu; }
        if (ctx->pc != 0x3711CCu) { return; }
    }
    ctx->pc = 0x3711CCu;
label_3711cc:
    // 0x3711cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3711ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3711d0:
    // 0x3711d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3711d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3711d4:
    // 0x3711d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3711d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3711d8:
    // 0x3711d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3711d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3711dc:
    // 0x3711dc: 0x3e00008  jr          $ra
label_3711e0:
    if (ctx->pc == 0x3711E0u) {
        ctx->pc = 0x3711E0u;
            // 0x3711e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3711E4u;
        goto label_3711e4;
    }
    ctx->pc = 0x3711DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3711E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3711DCu;
            // 0x3711e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3711E4u;
label_3711e4:
    // 0x3711e4: 0x0  nop
    ctx->pc = 0x3711e4u;
    // NOP
label_3711e8:
    // 0x3711e8: 0x0  nop
    ctx->pc = 0x3711e8u;
    // NOP
label_3711ec:
    // 0x3711ec: 0x0  nop
    ctx->pc = 0x3711ecu;
    // NOP
}
