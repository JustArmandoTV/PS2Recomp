#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00185208
// Address: 0x185208 - 0x185370
void sub_00185208_0x185208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185208_0x185208");
#endif

    switch (ctx->pc) {
        case 0x185208u: goto label_185208;
        case 0x18520cu: goto label_18520c;
        case 0x185210u: goto label_185210;
        case 0x185214u: goto label_185214;
        case 0x185218u: goto label_185218;
        case 0x18521cu: goto label_18521c;
        case 0x185220u: goto label_185220;
        case 0x185224u: goto label_185224;
        case 0x185228u: goto label_185228;
        case 0x18522cu: goto label_18522c;
        case 0x185230u: goto label_185230;
        case 0x185234u: goto label_185234;
        case 0x185238u: goto label_185238;
        case 0x18523cu: goto label_18523c;
        case 0x185240u: goto label_185240;
        case 0x185244u: goto label_185244;
        case 0x185248u: goto label_185248;
        case 0x18524cu: goto label_18524c;
        case 0x185250u: goto label_185250;
        case 0x185254u: goto label_185254;
        case 0x185258u: goto label_185258;
        case 0x18525cu: goto label_18525c;
        case 0x185260u: goto label_185260;
        case 0x185264u: goto label_185264;
        case 0x185268u: goto label_185268;
        case 0x18526cu: goto label_18526c;
        case 0x185270u: goto label_185270;
        case 0x185274u: goto label_185274;
        case 0x185278u: goto label_185278;
        case 0x18527cu: goto label_18527c;
        case 0x185280u: goto label_185280;
        case 0x185284u: goto label_185284;
        case 0x185288u: goto label_185288;
        case 0x18528cu: goto label_18528c;
        case 0x185290u: goto label_185290;
        case 0x185294u: goto label_185294;
        case 0x185298u: goto label_185298;
        case 0x18529cu: goto label_18529c;
        case 0x1852a0u: goto label_1852a0;
        case 0x1852a4u: goto label_1852a4;
        case 0x1852a8u: goto label_1852a8;
        case 0x1852acu: goto label_1852ac;
        case 0x1852b0u: goto label_1852b0;
        case 0x1852b4u: goto label_1852b4;
        case 0x1852b8u: goto label_1852b8;
        case 0x1852bcu: goto label_1852bc;
        case 0x1852c0u: goto label_1852c0;
        case 0x1852c4u: goto label_1852c4;
        case 0x1852c8u: goto label_1852c8;
        case 0x1852ccu: goto label_1852cc;
        case 0x1852d0u: goto label_1852d0;
        case 0x1852d4u: goto label_1852d4;
        case 0x1852d8u: goto label_1852d8;
        case 0x1852dcu: goto label_1852dc;
        case 0x1852e0u: goto label_1852e0;
        case 0x1852e4u: goto label_1852e4;
        case 0x1852e8u: goto label_1852e8;
        case 0x1852ecu: goto label_1852ec;
        case 0x1852f0u: goto label_1852f0;
        case 0x1852f4u: goto label_1852f4;
        case 0x1852f8u: goto label_1852f8;
        case 0x1852fcu: goto label_1852fc;
        case 0x185300u: goto label_185300;
        case 0x185304u: goto label_185304;
        case 0x185308u: goto label_185308;
        case 0x18530cu: goto label_18530c;
        case 0x185310u: goto label_185310;
        case 0x185314u: goto label_185314;
        case 0x185318u: goto label_185318;
        case 0x18531cu: goto label_18531c;
        case 0x185320u: goto label_185320;
        case 0x185324u: goto label_185324;
        case 0x185328u: goto label_185328;
        case 0x18532cu: goto label_18532c;
        case 0x185330u: goto label_185330;
        case 0x185334u: goto label_185334;
        case 0x185338u: goto label_185338;
        case 0x18533cu: goto label_18533c;
        case 0x185340u: goto label_185340;
        case 0x185344u: goto label_185344;
        case 0x185348u: goto label_185348;
        case 0x18534cu: goto label_18534c;
        case 0x185350u: goto label_185350;
        case 0x185354u: goto label_185354;
        case 0x185358u: goto label_185358;
        case 0x18535cu: goto label_18535c;
        case 0x185360u: goto label_185360;
        case 0x185364u: goto label_185364;
        case 0x185368u: goto label_185368;
        case 0x18536cu: goto label_18536c;
        default: break;
    }

    ctx->pc = 0x185208u;

label_185208:
    // 0x185208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x185208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18520c:
    // 0x18520c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x18520cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_185210:
    // 0x185210: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x185210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_185214:
    // 0x185214: 0x15000008  bnez        $t0, . + 4 + (0x8 << 2)
label_185218:
    if (ctx->pc == 0x185218u) {
        ctx->pc = 0x185218u;
            // 0x185218: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18521Cu;
        goto label_18521c;
    }
    ctx->pc = 0x185214u;
    {
        const bool branch_taken_0x185214 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x185218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185214u;
            // 0x185218: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185214) {
            ctx->pc = 0x185238u;
            goto label_185238;
        }
    }
    ctx->pc = 0x18521Cu;
label_18521c:
    // 0x18521c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x18521cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_185220:
    // 0x185220: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x185220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_185224:
    // 0x185224: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_185228:
    // 0x185228: 0x24847a78  addiu       $a0, $a0, 0x7A78
    ctx->pc = 0x185228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31352));
label_18522c:
    // 0x18522c: 0x24a57988  addiu       $a1, $a1, 0x7988
    ctx->pc = 0x18522cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31112));
label_185230:
    // 0x185230: 0x8061296  j           func_184A58
label_185234:
    if (ctx->pc == 0x185234u) {
        ctx->pc = 0x185234u;
            // 0x185234: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x185238u;
        goto label_185238;
    }
    ctx->pc = 0x185230u;
    ctx->pc = 0x185234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185230u;
            // 0x185234: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A58u;
    if (runtime->hasFunction(0x184A58u)) {
        auto targetFn = runtime->lookupFunction(0x184A58u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A58_0x184a58(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x185238u;
label_185238:
    // 0x185238: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x185238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_18523c:
    // 0x18523c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_185240:
    if (ctx->pc == 0x185240u) {
        ctx->pc = 0x185240u;
            // 0x185240: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->pc = 0x185244u;
        goto label_185244;
    }
    ctx->pc = 0x18523Cu;
    {
        const bool branch_taken_0x18523c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18523c) {
            ctx->pc = 0x185240u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18523Cu;
            // 0x185240: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x185260u;
            goto label_185260;
        }
    }
    ctx->pc = 0x185244u;
label_185244:
    // 0x185244: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x185244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_185248:
    // 0x185248: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x185248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_18524c:
    // 0x18524c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18524cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_185250:
    // 0x185250: 0x24847a88  addiu       $a0, $a0, 0x7A88
    ctx->pc = 0x185250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31368));
label_185254:
    // 0x185254: 0x24a579b8  addiu       $a1, $a1, 0x79B8
    ctx->pc = 0x185254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31160));
label_185258:
    // 0x185258: 0x8061296  j           func_184A58
label_18525c:
    if (ctx->pc == 0x18525Cu) {
        ctx->pc = 0x18525Cu;
            // 0x18525c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x185260u;
        goto label_185260;
    }
    ctx->pc = 0x185258u;
    ctx->pc = 0x18525Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185258u;
            // 0x18525c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A58u;
    if (runtime->hasFunction(0x184A58u)) {
        auto targetFn = runtime->lookupFunction(0x184A58u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A58_0x184a58(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x185260u;
label_185260:
    // 0x185260: 0x18c00026  blez        $a2, . + 4 + (0x26 << 2)
label_185264:
    if (ctx->pc == 0x185264u) {
        ctx->pc = 0x185264u;
            // 0x185264: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x185268u;
        goto label_185268;
    }
    ctx->pc = 0x185260u;
    {
        const bool branch_taken_0x185260 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x185264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185260u;
            // 0x185264: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185260) {
            ctx->pc = 0x1852FCu;
            goto label_1852fc;
        }
    }
    ctx->pc = 0x185268u;
label_185268:
    // 0x185268: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x185268u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_18526c:
    // 0x18526c: 0x11200023  beqz        $t1, . + 4 + (0x23 << 2)
label_185270:
    if (ctx->pc == 0x185270u) {
        ctx->pc = 0x185274u;
        goto label_185274;
    }
    ctx->pc = 0x18526Cu;
    {
        const bool branch_taken_0x18526c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x18526c) {
            ctx->pc = 0x1852FCu;
            goto label_1852fc;
        }
    }
    ctx->pc = 0x185274u;
label_185274:
    // 0x185274: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
label_185278:
    if (ctx->pc == 0x185278u) {
        ctx->pc = 0x185278u;
            // 0x185278: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x18527Cu;
        goto label_18527c;
    }
    ctx->pc = 0x185274u;
    {
        const bool branch_taken_0x185274 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x185278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185274u;
            // 0x185278: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185274) {
            ctx->pc = 0x1852C0u;
            goto label_1852c0;
        }
    }
    ctx->pc = 0x18527Cu;
label_18527c:
    // 0x18527c: 0x54a20018  bnel        $a1, $v0, . + 4 + (0x18 << 2)
label_185280:
    if (ctx->pc == 0x185280u) {
        ctx->pc = 0x185280u;
            // 0x185280: 0x8d02001c  lw          $v0, 0x1C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
        ctx->pc = 0x185284u;
        goto label_185284;
    }
    ctx->pc = 0x18527Cu;
    {
        const bool branch_taken_0x18527c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x18527c) {
            ctx->pc = 0x185280u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18527Cu;
            // 0x185280: 0x8d02001c  lw          $v0, 0x1C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1852E0u;
            goto label_1852e0;
        }
    }
    ctx->pc = 0x185284u;
label_185284:
    // 0x185284: 0x8d040010  lw          $a0, 0x10($t0)
    ctx->pc = 0x185284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_185288:
    // 0x185288: 0x8d05000c  lw          $a1, 0xC($t0)
    ctx->pc = 0x185288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_18528c:
    // 0x18528c: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x18528cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_185290:
    // 0x185290: 0x8d060014  lw          $a2, 0x14($t0)
    ctx->pc = 0x185290u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_185294:
    // 0x185294: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x185294u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
label_185298:
    // 0x185298: 0x8d070018  lw          $a3, 0x18($t0)
    ctx->pc = 0x185298u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_18529c:
    // 0x18529c: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x18529cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_1852a0:
    // 0x1852a0: 0x1263023  subu        $a2, $t1, $a2
    ctx->pc = 0x1852a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_1852a4:
    // 0x1852a4: 0xad040010  sw          $a0, 0x10($t0)
    ctx->pc = 0x1852a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 4));
label_1852a8:
    // 0x1852a8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1852a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1852ac:
    // 0x1852ac: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1852acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1852b0:
    // 0x1852b0: 0xe5182a  slt         $v1, $a3, $a1
    ctx->pc = 0x1852b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1852b4:
    // 0x1852b4: 0xe3280b  movn        $a1, $a3, $v1
    ctx->pc = 0x1852b4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
label_1852b8:
    // 0x1852b8: 0x10860010  beq         $a0, $a2, . + 4 + (0x10 << 2)
label_1852bc:
    if (ctx->pc == 0x1852BCu) {
        ctx->pc = 0x1852BCu;
            // 0x1852bc: 0xad05000c  sw          $a1, 0xC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 5));
        ctx->pc = 0x1852C0u;
        goto label_1852c0;
    }
    ctx->pc = 0x1852B8u;
    {
        const bool branch_taken_0x1852b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x1852BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1852B8u;
            // 0x1852bc: 0xad05000c  sw          $a1, 0xC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1852b8) {
            ctx->pc = 0x1852FCu;
            goto label_1852fc;
        }
    }
    ctx->pc = 0x1852C0u;
label_1852c0:
    // 0x1852c0: 0x8d02001c  lw          $v0, 0x1C($t0)
    ctx->pc = 0x1852c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
label_1852c4:
    // 0x1852c4: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_1852c8:
    if (ctx->pc == 0x1852C8u) {
        ctx->pc = 0x1852C8u;
            // 0x1852c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1852CCu;
        goto label_1852cc;
    }
    ctx->pc = 0x1852C4u;
    {
        const bool branch_taken_0x1852c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1852c4) {
            ctx->pc = 0x1852C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1852C4u;
            // 0x1852c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1852FCu;
            goto label_1852fc;
        }
    }
    ctx->pc = 0x1852CCu;
label_1852cc:
    // 0x1852cc: 0x8d040020  lw          $a0, 0x20($t0)
    ctx->pc = 0x1852ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_1852d0:
    // 0x1852d0: 0x40f809  jalr        $v0
label_1852d4:
    if (ctx->pc == 0x1852D4u) {
        ctx->pc = 0x1852D4u;
            // 0x1852d4: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x1852D8u;
        goto label_1852d8;
    }
    ctx->pc = 0x1852D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1852D8u);
        ctx->pc = 0x1852D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1852D0u;
            // 0x1852d4: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1852D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1852D8u; }
            if (ctx->pc != 0x1852D8u) { return; }
        }
        }
    }
    ctx->pc = 0x1852D8u;
label_1852d8:
    // 0x1852d8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1852dc:
    if (ctx->pc == 0x1852DCu) {
        ctx->pc = 0x1852DCu;
            // 0x1852dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1852E0u;
        goto label_1852e0;
    }
    ctx->pc = 0x1852D8u;
    {
        const bool branch_taken_0x1852d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1852DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1852D8u;
            // 0x1852dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1852d8) {
            ctx->pc = 0x1852FCu;
            goto label_1852fc;
        }
    }
    ctx->pc = 0x1852E0u;
label_1852e0:
    // 0x1852e0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1852e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1852e4:
    // 0x1852e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1852e8:
    if (ctx->pc == 0x1852E8u) {
        ctx->pc = 0x1852E8u;
            // 0x1852e8: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x1852ECu;
        goto label_1852ec;
    }
    ctx->pc = 0x1852E4u;
    {
        const bool branch_taken_0x1852e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1852E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1852E4u;
            // 0x1852e8: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1852e4) {
            ctx->pc = 0x1852F8u;
            goto label_1852f8;
        }
    }
    ctx->pc = 0x1852ECu;
label_1852ec:
    // 0x1852ec: 0x8d040020  lw          $a0, 0x20($t0)
    ctx->pc = 0x1852ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_1852f0:
    // 0x1852f0: 0x40f809  jalr        $v0
label_1852f4:
    if (ctx->pc == 0x1852F4u) {
        ctx->pc = 0x1852F4u;
            // 0x1852f4: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x1852F8u;
        goto label_1852f8;
    }
    ctx->pc = 0x1852F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1852F8u);
        ctx->pc = 0x1852F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1852F0u;
            // 0x1852f4: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1852F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1852F8u; }
            if (ctx->pc != 0x1852F8u) { return; }
        }
        }
    }
    ctx->pc = 0x1852F8u;
label_1852f8:
    // 0x1852f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1852f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1852fc:
    // 0x1852fc: 0x3e00008  jr          $ra
label_185300:
    if (ctx->pc == 0x185300u) {
        ctx->pc = 0x185300u;
            // 0x185300: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x185304u;
        goto label_185304;
    }
    ctx->pc = 0x1852FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1852FCu;
            // 0x185300: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x185304u;
label_185304:
    // 0x185304: 0x0  nop
    ctx->pc = 0x185304u;
    // NOP
label_185308:
    // 0x185308: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x185308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18530c:
    // 0x18530c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18530cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_185310:
    // 0x185310: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x185310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_185314:
    // 0x185314: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x185314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_185318:
    // 0x185318: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x185318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18531c:
    // 0x18531c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18531cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_185320:
    // 0x185320: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x185320u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_185324:
    // 0x185324: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x185324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_185328:
    // 0x185328: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x185328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_18532c:
    // 0x18532c: 0xc06127c  jal         func_1849F0
label_185330:
    if (ctx->pc == 0x185330u) {
        ctx->pc = 0x185330u;
            // 0x185330: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185334u;
        goto label_185334;
    }
    ctx->pc = 0x18532Cu;
    SET_GPR_U32(ctx, 31, 0x185334u);
    ctx->pc = 0x185330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18532Cu;
            // 0x185330: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185334u; }
        if (ctx->pc != 0x185334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185334u; }
        if (ctx->pc != 0x185334u) { return; }
    }
    ctx->pc = 0x185334u;
label_185334:
    // 0x185334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_185338:
    // 0x185338: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x185338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18533c:
    // 0x18533c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18533cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_185340:
    // 0x185340: 0xc0614dc  jal         func_185370
label_185344:
    if (ctx->pc == 0x185344u) {
        ctx->pc = 0x185344u;
            // 0x185344: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185348u;
        goto label_185348;
    }
    ctx->pc = 0x185340u;
    SET_GPR_U32(ctx, 31, 0x185348u);
    ctx->pc = 0x185344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185340u;
            // 0x185344: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185370u;
    if (runtime->hasFunction(0x185370u)) {
        auto targetFn = runtime->lookupFunction(0x185370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185348u; }
        if (ctx->pc != 0x185348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185370_0x185370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185348u; }
        if (ctx->pc != 0x185348u) { return; }
    }
    ctx->pc = 0x185348u;
label_185348:
    // 0x185348: 0xc061282  jal         func_184A08
label_18534c:
    if (ctx->pc == 0x18534Cu) {
        ctx->pc = 0x18534Cu;
            // 0x18534c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185350u;
        goto label_185350;
    }
    ctx->pc = 0x185348u;
    SET_GPR_U32(ctx, 31, 0x185350u);
    ctx->pc = 0x18534Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185348u;
            // 0x18534c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185350u; }
        if (ctx->pc != 0x185350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184A08_0x184a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185350u; }
        if (ctx->pc != 0x185350u) { return; }
    }
    ctx->pc = 0x185350u;
label_185350:
    // 0x185350: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x185350u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_185354:
    // 0x185354: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x185354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_185358:
    // 0x185358: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x185358u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18535c:
    // 0x18535c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18535cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_185360:
    // 0x185360: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x185360u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_185364:
    // 0x185364: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x185364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_185368:
    // 0x185368: 0x3e00008  jr          $ra
label_18536c:
    if (ctx->pc == 0x18536Cu) {
        ctx->pc = 0x18536Cu;
            // 0x18536c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x185370u;
        goto label_fallthrough_0x185368;
    }
    ctx->pc = 0x185368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18536Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185368u;
            // 0x18536c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x185368:
    ctx->pc = 0x185370u;
}
