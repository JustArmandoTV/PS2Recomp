#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DACB0
// Address: 0x4dacb0 - 0x4dafe0
void sub_004DACB0_0x4dacb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DACB0_0x4dacb0");
#endif

    switch (ctx->pc) {
        case 0x4dacb0u: goto label_4dacb0;
        case 0x4dacb4u: goto label_4dacb4;
        case 0x4dacb8u: goto label_4dacb8;
        case 0x4dacbcu: goto label_4dacbc;
        case 0x4dacc0u: goto label_4dacc0;
        case 0x4dacc4u: goto label_4dacc4;
        case 0x4dacc8u: goto label_4dacc8;
        case 0x4dacccu: goto label_4daccc;
        case 0x4dacd0u: goto label_4dacd0;
        case 0x4dacd4u: goto label_4dacd4;
        case 0x4dacd8u: goto label_4dacd8;
        case 0x4dacdcu: goto label_4dacdc;
        case 0x4dace0u: goto label_4dace0;
        case 0x4dace4u: goto label_4dace4;
        case 0x4dace8u: goto label_4dace8;
        case 0x4dacecu: goto label_4dacec;
        case 0x4dacf0u: goto label_4dacf0;
        case 0x4dacf4u: goto label_4dacf4;
        case 0x4dacf8u: goto label_4dacf8;
        case 0x4dacfcu: goto label_4dacfc;
        case 0x4dad00u: goto label_4dad00;
        case 0x4dad04u: goto label_4dad04;
        case 0x4dad08u: goto label_4dad08;
        case 0x4dad0cu: goto label_4dad0c;
        case 0x4dad10u: goto label_4dad10;
        case 0x4dad14u: goto label_4dad14;
        case 0x4dad18u: goto label_4dad18;
        case 0x4dad1cu: goto label_4dad1c;
        case 0x4dad20u: goto label_4dad20;
        case 0x4dad24u: goto label_4dad24;
        case 0x4dad28u: goto label_4dad28;
        case 0x4dad2cu: goto label_4dad2c;
        case 0x4dad30u: goto label_4dad30;
        case 0x4dad34u: goto label_4dad34;
        case 0x4dad38u: goto label_4dad38;
        case 0x4dad3cu: goto label_4dad3c;
        case 0x4dad40u: goto label_4dad40;
        case 0x4dad44u: goto label_4dad44;
        case 0x4dad48u: goto label_4dad48;
        case 0x4dad4cu: goto label_4dad4c;
        case 0x4dad50u: goto label_4dad50;
        case 0x4dad54u: goto label_4dad54;
        case 0x4dad58u: goto label_4dad58;
        case 0x4dad5cu: goto label_4dad5c;
        case 0x4dad60u: goto label_4dad60;
        case 0x4dad64u: goto label_4dad64;
        case 0x4dad68u: goto label_4dad68;
        case 0x4dad6cu: goto label_4dad6c;
        case 0x4dad70u: goto label_4dad70;
        case 0x4dad74u: goto label_4dad74;
        case 0x4dad78u: goto label_4dad78;
        case 0x4dad7cu: goto label_4dad7c;
        case 0x4dad80u: goto label_4dad80;
        case 0x4dad84u: goto label_4dad84;
        case 0x4dad88u: goto label_4dad88;
        case 0x4dad8cu: goto label_4dad8c;
        case 0x4dad90u: goto label_4dad90;
        case 0x4dad94u: goto label_4dad94;
        case 0x4dad98u: goto label_4dad98;
        case 0x4dad9cu: goto label_4dad9c;
        case 0x4dada0u: goto label_4dada0;
        case 0x4dada4u: goto label_4dada4;
        case 0x4dada8u: goto label_4dada8;
        case 0x4dadacu: goto label_4dadac;
        case 0x4dadb0u: goto label_4dadb0;
        case 0x4dadb4u: goto label_4dadb4;
        case 0x4dadb8u: goto label_4dadb8;
        case 0x4dadbcu: goto label_4dadbc;
        case 0x4dadc0u: goto label_4dadc0;
        case 0x4dadc4u: goto label_4dadc4;
        case 0x4dadc8u: goto label_4dadc8;
        case 0x4dadccu: goto label_4dadcc;
        case 0x4dadd0u: goto label_4dadd0;
        case 0x4dadd4u: goto label_4dadd4;
        case 0x4dadd8u: goto label_4dadd8;
        case 0x4daddcu: goto label_4daddc;
        case 0x4dade0u: goto label_4dade0;
        case 0x4dade4u: goto label_4dade4;
        case 0x4dade8u: goto label_4dade8;
        case 0x4dadecu: goto label_4dadec;
        case 0x4dadf0u: goto label_4dadf0;
        case 0x4dadf4u: goto label_4dadf4;
        case 0x4dadf8u: goto label_4dadf8;
        case 0x4dadfcu: goto label_4dadfc;
        case 0x4dae00u: goto label_4dae00;
        case 0x4dae04u: goto label_4dae04;
        case 0x4dae08u: goto label_4dae08;
        case 0x4dae0cu: goto label_4dae0c;
        case 0x4dae10u: goto label_4dae10;
        case 0x4dae14u: goto label_4dae14;
        case 0x4dae18u: goto label_4dae18;
        case 0x4dae1cu: goto label_4dae1c;
        case 0x4dae20u: goto label_4dae20;
        case 0x4dae24u: goto label_4dae24;
        case 0x4dae28u: goto label_4dae28;
        case 0x4dae2cu: goto label_4dae2c;
        case 0x4dae30u: goto label_4dae30;
        case 0x4dae34u: goto label_4dae34;
        case 0x4dae38u: goto label_4dae38;
        case 0x4dae3cu: goto label_4dae3c;
        case 0x4dae40u: goto label_4dae40;
        case 0x4dae44u: goto label_4dae44;
        case 0x4dae48u: goto label_4dae48;
        case 0x4dae4cu: goto label_4dae4c;
        case 0x4dae50u: goto label_4dae50;
        case 0x4dae54u: goto label_4dae54;
        case 0x4dae58u: goto label_4dae58;
        case 0x4dae5cu: goto label_4dae5c;
        case 0x4dae60u: goto label_4dae60;
        case 0x4dae64u: goto label_4dae64;
        case 0x4dae68u: goto label_4dae68;
        case 0x4dae6cu: goto label_4dae6c;
        case 0x4dae70u: goto label_4dae70;
        case 0x4dae74u: goto label_4dae74;
        case 0x4dae78u: goto label_4dae78;
        case 0x4dae7cu: goto label_4dae7c;
        case 0x4dae80u: goto label_4dae80;
        case 0x4dae84u: goto label_4dae84;
        case 0x4dae88u: goto label_4dae88;
        case 0x4dae8cu: goto label_4dae8c;
        case 0x4dae90u: goto label_4dae90;
        case 0x4dae94u: goto label_4dae94;
        case 0x4dae98u: goto label_4dae98;
        case 0x4dae9cu: goto label_4dae9c;
        case 0x4daea0u: goto label_4daea0;
        case 0x4daea4u: goto label_4daea4;
        case 0x4daea8u: goto label_4daea8;
        case 0x4daeacu: goto label_4daeac;
        case 0x4daeb0u: goto label_4daeb0;
        case 0x4daeb4u: goto label_4daeb4;
        case 0x4daeb8u: goto label_4daeb8;
        case 0x4daebcu: goto label_4daebc;
        case 0x4daec0u: goto label_4daec0;
        case 0x4daec4u: goto label_4daec4;
        case 0x4daec8u: goto label_4daec8;
        case 0x4daeccu: goto label_4daecc;
        case 0x4daed0u: goto label_4daed0;
        case 0x4daed4u: goto label_4daed4;
        case 0x4daed8u: goto label_4daed8;
        case 0x4daedcu: goto label_4daedc;
        case 0x4daee0u: goto label_4daee0;
        case 0x4daee4u: goto label_4daee4;
        case 0x4daee8u: goto label_4daee8;
        case 0x4daeecu: goto label_4daeec;
        case 0x4daef0u: goto label_4daef0;
        case 0x4daef4u: goto label_4daef4;
        case 0x4daef8u: goto label_4daef8;
        case 0x4daefcu: goto label_4daefc;
        case 0x4daf00u: goto label_4daf00;
        case 0x4daf04u: goto label_4daf04;
        case 0x4daf08u: goto label_4daf08;
        case 0x4daf0cu: goto label_4daf0c;
        case 0x4daf10u: goto label_4daf10;
        case 0x4daf14u: goto label_4daf14;
        case 0x4daf18u: goto label_4daf18;
        case 0x4daf1cu: goto label_4daf1c;
        case 0x4daf20u: goto label_4daf20;
        case 0x4daf24u: goto label_4daf24;
        case 0x4daf28u: goto label_4daf28;
        case 0x4daf2cu: goto label_4daf2c;
        case 0x4daf30u: goto label_4daf30;
        case 0x4daf34u: goto label_4daf34;
        case 0x4daf38u: goto label_4daf38;
        case 0x4daf3cu: goto label_4daf3c;
        case 0x4daf40u: goto label_4daf40;
        case 0x4daf44u: goto label_4daf44;
        case 0x4daf48u: goto label_4daf48;
        case 0x4daf4cu: goto label_4daf4c;
        case 0x4daf50u: goto label_4daf50;
        case 0x4daf54u: goto label_4daf54;
        case 0x4daf58u: goto label_4daf58;
        case 0x4daf5cu: goto label_4daf5c;
        case 0x4daf60u: goto label_4daf60;
        case 0x4daf64u: goto label_4daf64;
        case 0x4daf68u: goto label_4daf68;
        case 0x4daf6cu: goto label_4daf6c;
        case 0x4daf70u: goto label_4daf70;
        case 0x4daf74u: goto label_4daf74;
        case 0x4daf78u: goto label_4daf78;
        case 0x4daf7cu: goto label_4daf7c;
        case 0x4daf80u: goto label_4daf80;
        case 0x4daf84u: goto label_4daf84;
        case 0x4daf88u: goto label_4daf88;
        case 0x4daf8cu: goto label_4daf8c;
        case 0x4daf90u: goto label_4daf90;
        case 0x4daf94u: goto label_4daf94;
        case 0x4daf98u: goto label_4daf98;
        case 0x4daf9cu: goto label_4daf9c;
        case 0x4dafa0u: goto label_4dafa0;
        case 0x4dafa4u: goto label_4dafa4;
        case 0x4dafa8u: goto label_4dafa8;
        case 0x4dafacu: goto label_4dafac;
        case 0x4dafb0u: goto label_4dafb0;
        case 0x4dafb4u: goto label_4dafb4;
        case 0x4dafb8u: goto label_4dafb8;
        case 0x4dafbcu: goto label_4dafbc;
        case 0x4dafc0u: goto label_4dafc0;
        case 0x4dafc4u: goto label_4dafc4;
        case 0x4dafc8u: goto label_4dafc8;
        case 0x4dafccu: goto label_4dafcc;
        case 0x4dafd0u: goto label_4dafd0;
        case 0x4dafd4u: goto label_4dafd4;
        case 0x4dafd8u: goto label_4dafd8;
        case 0x4dafdcu: goto label_4dafdc;
        default: break;
    }

    ctx->pc = 0x4dacb0u;

label_4dacb0:
    // 0x4dacb0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4dacb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_4dacb4:
    // 0x4dacb4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4dacb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4dacb8:
    // 0x4dacb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4dacb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4dacbc:
    // 0x4dacbc: 0x34468702  ori         $a2, $v0, 0x8702
    ctx->pc = 0x4dacbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34562);
label_4dacc0:
    // 0x4dacc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4dacc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4dacc4:
    // 0x4dacc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4dacc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dacc8:
    // 0x4dacc8: 0xc136c30  jal         func_4DB0C0
label_4daccc:
    if (ctx->pc == 0x4DACCCu) {
        ctx->pc = 0x4DACCCu;
            // 0x4daccc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x4DACD0u;
        goto label_4dacd0;
    }
    ctx->pc = 0x4DACC8u;
    SET_GPR_U32(ctx, 31, 0x4DACD0u);
    ctx->pc = 0x4DACCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DACC8u;
            // 0x4daccc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DB0C0u;
    if (runtime->hasFunction(0x4DB0C0u)) {
        auto targetFn = runtime->lookupFunction(0x4DB0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DACD0u; }
        if (ctx->pc != 0x4DACD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DB0C0_0x4db0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DACD0u; }
        if (ctx->pc != 0x4DACD0u) { return; }
    }
    ctx->pc = 0x4DACD0u;
label_4dacd0:
    // 0x4dacd0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4dacd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4dacd4:
    // 0x4dacd4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4dacd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4dacd8:
    // 0x4dacd8: 0x24632b40  addiu       $v1, $v1, 0x2B40
    ctx->pc = 0x4dacd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11072));
label_4dacdc:
    // 0x4dacdc: 0x24422b78  addiu       $v0, $v0, 0x2B78
    ctx->pc = 0x4dacdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11128));
label_4dace0:
    // 0x4dace0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4dace0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4dace4:
    // 0x4dace4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4dace4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4dace8:
    // 0x4dace8: 0xc136c2c  jal         func_4DB0B0
label_4dacec:
    if (ctx->pc == 0x4DACECu) {
        ctx->pc = 0x4DACECu;
            // 0x4dacec: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4DACF0u;
        goto label_4dacf0;
    }
    ctx->pc = 0x4DACE8u;
    SET_GPR_U32(ctx, 31, 0x4DACF0u);
    ctx->pc = 0x4DACECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DACE8u;
            // 0x4dacec: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DB0B0u;
    if (runtime->hasFunction(0x4DB0B0u)) {
        auto targetFn = runtime->lookupFunction(0x4DB0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DACF0u; }
        if (ctx->pc != 0x4DACF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DB0B0_0x4db0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DACF0u; }
        if (ctx->pc != 0x4DACF0u) { return; }
    }
    ctx->pc = 0x4DACF0u;
label_4dacf0:
    // 0x4dacf0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4dacf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4dacf4:
    // 0x4dacf4: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4dacf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4dacf8:
    // 0x4dacf8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4dacf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4dacfc:
    // 0x4dacfc: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4dacfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_4dad00:
    // 0x4dad00: 0x24422a90  addiu       $v0, $v0, 0x2A90
    ctx->pc = 0x4dad00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10896));
label_4dad04:
    // 0x4dad04: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4dad04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4dad08:
    // 0x4dad08: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4dad08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4dad0c:
    // 0x4dad0c: 0x24422ac8  addiu       $v0, $v0, 0x2AC8
    ctx->pc = 0x4dad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10952));
label_4dad10:
    // 0x4dad10: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4dad10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4dad14:
    // 0x4dad14: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4dad14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4dad18:
    // 0x4dad18: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x4dad18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_4dad1c:
    // 0x4dad1c: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x4dad1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
label_4dad20:
    // 0x4dad20: 0x3c0240d0  lui         $v0, 0x40D0
    ctx->pc = 0x4dad20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16592 << 16));
label_4dad24:
    // 0x4dad24: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x4dad24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_4dad28:
    // 0x4dad28: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x4dad28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_4dad2c:
    // 0x4dad2c: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x4dad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
label_4dad30:
    // 0x4dad30: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x4dad30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_4dad34:
    // 0x4dad34: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x4dad34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_4dad38:
    // 0x4dad38: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x4dad38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_4dad3c:
    // 0x4dad3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4dad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4dad40:
    // 0x4dad40: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4dad40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4dad44:
    // 0x4dad44: 0xc0a7a88  jal         func_29EA20
label_4dad48:
    if (ctx->pc == 0x4DAD48u) {
        ctx->pc = 0x4DAD48u;
            // 0x4dad48: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->pc = 0x4DAD4Cu;
        goto label_4dad4c;
    }
    ctx->pc = 0x4DAD44u;
    SET_GPR_U32(ctx, 31, 0x4DAD4Cu);
    ctx->pc = 0x4DAD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAD44u;
            // 0x4dad48: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DAD4Cu; }
        if (ctx->pc != 0x4DAD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DAD4Cu; }
        if (ctx->pc != 0x4DAD4Cu) { return; }
    }
    ctx->pc = 0x4DAD4Cu;
label_4dad4c:
    // 0x4dad4c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4dad4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4dad50:
    // 0x4dad50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4dad50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dad54:
    // 0x4dad54: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_4dad58:
    if (ctx->pc == 0x4DAD58u) {
        ctx->pc = 0x4DAD58u;
            // 0x4dad58: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4DAD5Cu;
        goto label_4dad5c;
    }
    ctx->pc = 0x4DAD54u;
    {
        const bool branch_taken_0x4dad54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DAD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAD54u;
            // 0x4dad58: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dad54) {
            ctx->pc = 0x4DAD74u;
            goto label_4dad74;
        }
    }
    ctx->pc = 0x4DAD5Cu;
label_4dad5c:
    // 0x4dad5c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4dad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_4dad60:
    // 0x4dad60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4dad60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dad64:
    // 0x4dad64: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x4dad64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4dad68:
    // 0x4dad68: 0xc0804bc  jal         func_2012F0
label_4dad6c:
    if (ctx->pc == 0x4DAD6Cu) {
        ctx->pc = 0x4DAD6Cu;
            // 0x4dad6c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4DAD70u;
        goto label_4dad70;
    }
    ctx->pc = 0x4DAD68u;
    SET_GPR_U32(ctx, 31, 0x4DAD70u);
    ctx->pc = 0x4DAD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAD68u;
            // 0x4dad6c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DAD70u; }
        if (ctx->pc != 0x4DAD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DAD70u; }
        if (ctx->pc != 0x4DAD70u) { return; }
    }
    ctx->pc = 0x4DAD70u;
label_4dad70:
    // 0x4dad70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4dad70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dad74:
    // 0x4dad74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4dad74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4dad78:
    // 0x4dad78: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4dad78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4dad7c:
    // 0x4dad7c: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x4dad7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_4dad80:
    // 0x4dad80: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x4dad80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4dad84:
    // 0x4dad84: 0x3c0240f0  lui         $v0, 0x40F0
    ctx->pc = 0x4dad84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16624 << 16));
label_4dad88:
    // 0x4dad88: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x4dad88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_4dad8c:
    // 0x4dad8c: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x4dad8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_4dad90:
    // 0x4dad90: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x4dad90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_4dad94:
    // 0x4dad94: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x4dad94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_4dad98:
    // 0x4dad98: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x4dad98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_4dad9c:
    // 0x4dad9c: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x4dad9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_4dada0:
    // 0x4dada0: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x4dada0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_4dada4:
    // 0x4dada4: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x4dada4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_4dada8:
    // 0x4dada8: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x4dada8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_4dadac:
    // 0x4dadac: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x4dadacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_4dadb0:
    // 0x4dadb0: 0xc0a3830  jal         func_28E0C0
label_4dadb4:
    if (ctx->pc == 0x4DADB4u) {
        ctx->pc = 0x4DADB4u;
            // 0x4dadb4: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x4DADB8u;
        goto label_4dadb8;
    }
    ctx->pc = 0x4DADB0u;
    SET_GPR_U32(ctx, 31, 0x4DADB8u);
    ctx->pc = 0x4DADB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DADB0u;
            // 0x4dadb4: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DADB8u; }
        if (ctx->pc != 0x4DADB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DADB8u; }
        if (ctx->pc != 0x4DADB8u) { return; }
    }
    ctx->pc = 0x4DADB8u;
label_4dadb8:
    // 0x4dadb8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4dadb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4dadbc:
    // 0x4dadbc: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x4dadbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_4dadc0:
    // 0x4dadc0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4dadc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4dadc4:
    // 0x4dadc4: 0xc0a7a88  jal         func_29EA20
label_4dadc8:
    if (ctx->pc == 0x4DADC8u) {
        ctx->pc = 0x4DADC8u;
            // 0x4dadc8: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x4DADCCu;
        goto label_4dadcc;
    }
    ctx->pc = 0x4DADC4u;
    SET_GPR_U32(ctx, 31, 0x4DADCCu);
    ctx->pc = 0x4DADC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DADC4u;
            // 0x4dadc8: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DADCCu; }
        if (ctx->pc != 0x4DADCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DADCCu; }
        if (ctx->pc != 0x4DADCCu) { return; }
    }
    ctx->pc = 0x4DADCCu;
label_4dadcc:
    // 0x4dadcc: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x4dadccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_4dadd0:
    // 0x4dadd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4dadd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dadd4:
    // 0x4dadd4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_4dadd8:
    if (ctx->pc == 0x4DADD8u) {
        ctx->pc = 0x4DADD8u;
            // 0x4dadd8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4DADDCu;
        goto label_4daddc;
    }
    ctx->pc = 0x4DADD4u;
    {
        const bool branch_taken_0x4dadd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DADD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DADD4u;
            // 0x4dadd8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dadd4) {
            ctx->pc = 0x4DADECu;
            goto label_4dadec;
        }
    }
    ctx->pc = 0x4DADDCu;
label_4daddc:
    // 0x4daddc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4daddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dade0:
    // 0x4dade0: 0xc082940  jal         func_20A500
label_4dade4:
    if (ctx->pc == 0x4DADE4u) {
        ctx->pc = 0x4DADE4u;
            // 0x4dade4: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4DADE8u;
        goto label_4dade8;
    }
    ctx->pc = 0x4DADE0u;
    SET_GPR_U32(ctx, 31, 0x4DADE8u);
    ctx->pc = 0x4DADE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DADE0u;
            // 0x4dade4: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A500u;
    if (runtime->hasFunction(0x20A500u)) {
        auto targetFn = runtime->lookupFunction(0x20A500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DADE8u; }
        if (ctx->pc != 0x4DADE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A500_0x20a500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DADE8u; }
        if (ctx->pc != 0x4DADE8u) { return; }
    }
    ctx->pc = 0x4DADE8u;
label_4dade8:
    // 0x4dade8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4dade8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dadec:
    // 0x4dadec: 0xae2400a8  sw          $a0, 0xA8($s1)
    ctx->pc = 0x4dadecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 4));
label_4dadf0:
    // 0x4dadf0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x4dadf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_4dadf4:
    // 0x4dadf4: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x4dadf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_4dadf8:
    // 0x4dadf8: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x4dadf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_4dadfc:
    // 0x4dadfc: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x4dadfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_4dae00:
    // 0x4dae00: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_4dae04:
    if (ctx->pc == 0x4DAE04u) {
        ctx->pc = 0x4DAE04u;
            // 0x4dae04: 0x8fa30094  lw          $v1, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->pc = 0x4DAE08u;
        goto label_4dae08;
    }
    ctx->pc = 0x4DAE00u;
    {
        const bool branch_taken_0x4dae00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4dae00) {
            ctx->pc = 0x4DAE04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAE00u;
            // 0x4dae04: 0x8fa30094  lw          $v1, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DAE18u;
            goto label_4dae18;
        }
    }
    ctx->pc = 0x4DAE08u;
label_4dae08:
    // 0x4dae08: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4dae08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4dae0c:
    // 0x4dae0c: 0xc0a728c  jal         func_29CA30
label_4dae10:
    if (ctx->pc == 0x4DAE10u) {
        ctx->pc = 0x4DAE10u;
            // 0x4dae10: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4DAE14u;
        goto label_4dae14;
    }
    ctx->pc = 0x4DAE0Cu;
    SET_GPR_U32(ctx, 31, 0x4DAE14u);
    ctx->pc = 0x4DAE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAE0Cu;
            // 0x4dae10: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DAE14u; }
        if (ctx->pc != 0x4DAE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DAE14u; }
        if (ctx->pc != 0x4DAE14u) { return; }
    }
    ctx->pc = 0x4DAE14u;
label_4dae14:
    // 0x4dae14: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x4dae14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_4dae18:
    // 0x4dae18: 0x8e2500a8  lw          $a1, 0xA8($s1)
    ctx->pc = 0x4dae18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
label_4dae1c:
    // 0x4dae1c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x4dae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_4dae20:
    // 0x4dae20: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x4dae20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4dae24:
    // 0x4dae24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4dae24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4dae28:
    // 0x4dae28: 0xafa40094  sw          $a0, 0x94($sp)
    ctx->pc = 0x4dae28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 4));
label_4dae2c:
    // 0x4dae2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4dae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4dae30:
    // 0x4dae30: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x4dae30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_4dae34:
    // 0x4dae34: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x4dae34u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_4dae38:
    // 0x4dae38: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_4dae3c:
    if (ctx->pc == 0x4DAE3Cu) {
        ctx->pc = 0x4DAE40u;
        goto label_4dae40;
    }
    ctx->pc = 0x4DAE38u;
    {
        const bool branch_taken_0x4dae38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dae38) {
            ctx->pc = 0x4DAE78u;
            goto label_4dae78;
        }
    }
    ctx->pc = 0x4DAE40u;
label_4dae40:
    // 0x4dae40: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x4dae40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_4dae44:
    // 0x4dae44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4dae44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4dae48:
    // 0x4dae48: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x4dae48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_4dae4c:
    // 0x4dae4c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x4dae4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_4dae50:
    // 0x4dae50: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4dae50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4dae54:
    // 0x4dae54: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_4dae58:
    if (ctx->pc == 0x4DAE58u) {
        ctx->pc = 0x4DAE5Cu;
        goto label_4dae5c;
    }
    ctx->pc = 0x4DAE54u;
    {
        const bool branch_taken_0x4dae54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4dae54) {
            ctx->pc = 0x4DAE78u;
            goto label_4dae78;
        }
    }
    ctx->pc = 0x4DAE5Cu;
label_4dae5c:
    // 0x4dae5c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_4dae60:
    if (ctx->pc == 0x4DAE60u) {
        ctx->pc = 0x4DAE64u;
        goto label_4dae64;
    }
    ctx->pc = 0x4DAE5Cu;
    {
        const bool branch_taken_0x4dae5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dae5c) {
            ctx->pc = 0x4DAE78u;
            goto label_4dae78;
        }
    }
    ctx->pc = 0x4DAE64u;
label_4dae64:
    // 0x4dae64: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4dae64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4dae68:
    // 0x4dae68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4dae68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dae6c:
    // 0x4dae6c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4dae6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4dae70:
    // 0x4dae70: 0x320f809  jalr        $t9
label_4dae74:
    if (ctx->pc == 0x4DAE74u) {
        ctx->pc = 0x4DAE74u;
            // 0x4dae74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4DAE78u;
        goto label_4dae78;
    }
    ctx->pc = 0x4DAE70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DAE78u);
        ctx->pc = 0x4DAE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAE70u;
            // 0x4dae74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DAE78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DAE78u; }
            if (ctx->pc != 0x4DAE78u) { return; }
        }
        }
    }
    ctx->pc = 0x4DAE78u;
label_4dae78:
    // 0x4dae78: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4dae78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4dae7c:
    // 0x4dae7c: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x4dae7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_4dae80:
    // 0x4dae80: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4dae80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4dae84:
    // 0x4dae84: 0xc0a7a88  jal         func_29EA20
label_4dae88:
    if (ctx->pc == 0x4DAE88u) {
        ctx->pc = 0x4DAE88u;
            // 0x4dae88: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x4DAE8Cu;
        goto label_4dae8c;
    }
    ctx->pc = 0x4DAE84u;
    SET_GPR_U32(ctx, 31, 0x4DAE8Cu);
    ctx->pc = 0x4DAE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAE84u;
            // 0x4dae88: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DAE8Cu; }
        if (ctx->pc != 0x4DAE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DAE8Cu; }
        if (ctx->pc != 0x4DAE8Cu) { return; }
    }
    ctx->pc = 0x4DAE8Cu;
label_4dae8c:
    // 0x4dae8c: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x4dae8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_4dae90:
    // 0x4dae90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4dae90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dae94:
    // 0x4dae94: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_4dae98:
    if (ctx->pc == 0x4DAE98u) {
        ctx->pc = 0x4DAE98u;
            // 0x4dae98: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4DAE9Cu;
        goto label_4dae9c;
    }
    ctx->pc = 0x4DAE94u;
    {
        const bool branch_taken_0x4dae94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DAE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAE94u;
            // 0x4dae98: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dae94) {
            ctx->pc = 0x4DAEACu;
            goto label_4daeac;
        }
    }
    ctx->pc = 0x4DAE9Cu;
label_4dae9c:
    // 0x4dae9c: 0x8fa60094  lw          $a2, 0x94($sp)
    ctx->pc = 0x4dae9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_4daea0:
    // 0x4daea0: 0xc081c54  jal         func_207150
label_4daea4:
    if (ctx->pc == 0x4DAEA4u) {
        ctx->pc = 0x4DAEA4u;
            // 0x4daea4: 0x8fa50090  lw          $a1, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x4DAEA8u;
        goto label_4daea8;
    }
    ctx->pc = 0x4DAEA0u;
    SET_GPR_U32(ctx, 31, 0x4DAEA8u);
    ctx->pc = 0x4DAEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAEA0u;
            // 0x4daea4: 0x8fa50090  lw          $a1, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x207150u;
    if (runtime->hasFunction(0x207150u)) {
        auto targetFn = runtime->lookupFunction(0x207150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DAEA8u; }
        if (ctx->pc != 0x4DAEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00207150_0x207150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DAEA8u; }
        if (ctx->pc != 0x4DAEA8u) { return; }
    }
    ctx->pc = 0x4DAEA8u;
label_4daea8:
    // 0x4daea8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4daea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4daeac:
    // 0x4daeac: 0xae240060  sw          $a0, 0x60($s1)
    ctx->pc = 0x4daeacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 4));
label_4daeb0:
    // 0x4daeb0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4daeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4daeb4:
    // 0x4daeb4: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4daeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4daeb8:
    // 0x4daeb8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4daeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4daebc:
    // 0x4daebc: 0x8042007a  lb          $v0, 0x7A($v0)
    ctx->pc = 0x4daebcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 122)));
label_4daec0:
    // 0x4daec0: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_4daec4:
    if (ctx->pc == 0x4DAEC4u) {
        ctx->pc = 0x4DAEC4u;
            // 0x4daec4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DAEC8u;
        goto label_4daec8;
    }
    ctx->pc = 0x4DAEC0u;
    {
        const bool branch_taken_0x4daec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4DAEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAEC0u;
            // 0x4daec4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4daec0) {
            ctx->pc = 0x4DAECCu;
            goto label_4daecc;
        }
    }
    ctx->pc = 0x4DAEC8u;
label_4daec8:
    // 0x4daec8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4daec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4daecc:
    // 0x4daecc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4daeccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4daed0:
    // 0x4daed0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x4daed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4daed4:
    // 0x4daed4: 0x24428038  addiu       $v0, $v0, -0x7FC8
    ctx->pc = 0x4daed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934584));
label_4daed8:
    // 0x4daed8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4daed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4daedc:
    // 0x4daedc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x4daedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4daee0:
    // 0x4daee0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x4daee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4daee4:
    // 0x4daee4: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4daee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4daee8:
    // 0x4daee8: 0xc0b61c4  jal         func_2D8710
label_4daeec:
    if (ctx->pc == 0x4DAEECu) {
        ctx->pc = 0x4DAEECu;
            // 0x4daeec: 0xe440aa60  swc1        $f0, -0x55A0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294945376), bits); }
        ctx->pc = 0x4DAEF0u;
        goto label_4daef0;
    }
    ctx->pc = 0x4DAEE8u;
    SET_GPR_U32(ctx, 31, 0x4DAEF0u);
    ctx->pc = 0x4DAEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAEE8u;
            // 0x4daeec: 0xe440aa60  swc1        $f0, -0x55A0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294945376), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8710u;
    if (runtime->hasFunction(0x2D8710u)) {
        auto targetFn = runtime->lookupFunction(0x2D8710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DAEF0u; }
        if (ctx->pc != 0x4DAEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8710_0x2d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DAEF0u; }
        if (ctx->pc != 0x4DAEF0u) { return; }
    }
    ctx->pc = 0x4DAEF0u;
label_4daef0:
    // 0x4daef0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4daef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4daef4:
    // 0x4daef4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4daef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4daef8:
    // 0x4daef8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4daef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4daefc:
    // 0x4daefc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4daefcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4daf00:
    // 0x4daf00: 0x3e00008  jr          $ra
label_4daf04:
    if (ctx->pc == 0x4DAF04u) {
        ctx->pc = 0x4DAF04u;
            // 0x4daf04: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4DAF08u;
        goto label_4daf08;
    }
    ctx->pc = 0x4DAF00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DAF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAF00u;
            // 0x4daf04: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DAF08u;
label_4daf08:
    // 0x4daf08: 0x0  nop
    ctx->pc = 0x4daf08u;
    // NOP
label_4daf0c:
    // 0x4daf0c: 0x0  nop
    ctx->pc = 0x4daf0cu;
    // NOP
label_4daf10:
    // 0x4daf10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4daf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4daf14:
    // 0x4daf14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4daf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4daf18:
    // 0x4daf18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4daf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4daf1c:
    // 0x4daf1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4daf1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4daf20:
    // 0x4daf20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4daf20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4daf24:
    // 0x4daf24: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_4daf28:
    if (ctx->pc == 0x4DAF28u) {
        ctx->pc = 0x4DAF28u;
            // 0x4daf28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DAF2Cu;
        goto label_4daf2c;
    }
    ctx->pc = 0x4DAF24u;
    {
        const bool branch_taken_0x4daf24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DAF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAF24u;
            // 0x4daf28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4daf24) {
            ctx->pc = 0x4DAFC4u;
            goto label_4dafc4;
        }
    }
    ctx->pc = 0x4DAF2Cu;
label_4daf2c:
    // 0x4daf2c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4daf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4daf30:
    // 0x4daf30: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4daf30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4daf34:
    // 0x4daf34: 0x24632b40  addiu       $v1, $v1, 0x2B40
    ctx->pc = 0x4daf34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11072));
label_4daf38:
    // 0x4daf38: 0x24422b78  addiu       $v0, $v0, 0x2B78
    ctx->pc = 0x4daf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11128));
label_4daf3c:
    // 0x4daf3c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4daf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4daf40:
    // 0x4daf40: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_4daf44:
    if (ctx->pc == 0x4DAF44u) {
        ctx->pc = 0x4DAF44u;
            // 0x4daf44: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4DAF48u;
        goto label_4daf48;
    }
    ctx->pc = 0x4DAF40u;
    {
        const bool branch_taken_0x4daf40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DAF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAF40u;
            // 0x4daf44: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4daf40) {
            ctx->pc = 0x4DAFACu;
            goto label_4dafac;
        }
    }
    ctx->pc = 0x4DAF48u;
label_4daf48:
    // 0x4daf48: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4daf48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4daf4c:
    // 0x4daf4c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4daf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4daf50:
    // 0x4daf50: 0x24632af0  addiu       $v1, $v1, 0x2AF0
    ctx->pc = 0x4daf50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10992));
label_4daf54:
    // 0x4daf54: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x4daf54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_4daf58:
    // 0x4daf58: 0x24422b28  addiu       $v0, $v0, 0x2B28
    ctx->pc = 0x4daf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11048));
label_4daf5c:
    // 0x4daf5c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4daf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4daf60:
    // 0x4daf60: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4daf60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_4daf64:
    // 0x4daf64: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4daf64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_4daf68:
    // 0x4daf68: 0xc0407c0  jal         func_101F00
label_4daf6c:
    if (ctx->pc == 0x4DAF6Cu) {
        ctx->pc = 0x4DAF6Cu;
            // 0x4daf6c: 0x24a5a700  addiu       $a1, $a1, -0x5900 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944512));
        ctx->pc = 0x4DAF70u;
        goto label_4daf70;
    }
    ctx->pc = 0x4DAF68u;
    SET_GPR_U32(ctx, 31, 0x4DAF70u);
    ctx->pc = 0x4DAF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAF68u;
            // 0x4daf6c: 0x24a5a700  addiu       $a1, $a1, -0x5900 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DAF70u; }
        if (ctx->pc != 0x4DAF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DAF70u; }
        if (ctx->pc != 0x4DAF70u) { return; }
    }
    ctx->pc = 0x4DAF70u;
label_4daf70:
    // 0x4daf70: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4daf70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4daf74:
    // 0x4daf74: 0xc0a8c98  jal         func_2A3260
label_4daf78:
    if (ctx->pc == 0x4DAF78u) {
        ctx->pc = 0x4DAF78u;
            // 0x4daf78: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4DAF7Cu;
        goto label_4daf7c;
    }
    ctx->pc = 0x4DAF74u;
    SET_GPR_U32(ctx, 31, 0x4DAF7Cu);
    ctx->pc = 0x4DAF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAF74u;
            // 0x4daf78: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DAF7Cu; }
        if (ctx->pc != 0x4DAF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DAF7Cu; }
        if (ctx->pc != 0x4DAF7Cu) { return; }
    }
    ctx->pc = 0x4DAF7Cu;
label_4daf7c:
    // 0x4daf7c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4daf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_4daf80:
    // 0x4daf80: 0xc136c10  jal         func_4DB040
label_4daf84:
    if (ctx->pc == 0x4DAF84u) {
        ctx->pc = 0x4DAF84u;
            // 0x4daf84: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4DAF88u;
        goto label_4daf88;
    }
    ctx->pc = 0x4DAF80u;
    SET_GPR_U32(ctx, 31, 0x4DAF88u);
    ctx->pc = 0x4DAF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAF80u;
            // 0x4daf84: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DB040u;
    if (runtime->hasFunction(0x4DB040u)) {
        auto targetFn = runtime->lookupFunction(0x4DB040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DAF88u; }
        if (ctx->pc != 0x4DAF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DB040_0x4db040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DAF88u; }
        if (ctx->pc != 0x4DAF88u) { return; }
    }
    ctx->pc = 0x4DAF88u;
label_4daf88:
    // 0x4daf88: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4daf88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_4daf8c:
    // 0x4daf8c: 0xc136c10  jal         func_4DB040
label_4daf90:
    if (ctx->pc == 0x4DAF90u) {
        ctx->pc = 0x4DAF90u;
            // 0x4daf90: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4DAF94u;
        goto label_4daf94;
    }
    ctx->pc = 0x4DAF8Cu;
    SET_GPR_U32(ctx, 31, 0x4DAF94u);
    ctx->pc = 0x4DAF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAF8Cu;
            // 0x4daf90: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DB040u;
    if (runtime->hasFunction(0x4DB040u)) {
        auto targetFn = runtime->lookupFunction(0x4DB040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DAF94u; }
        if (ctx->pc != 0x4DAF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DB040_0x4db040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DAF94u; }
        if (ctx->pc != 0x4DAF94u) { return; }
    }
    ctx->pc = 0x4DAF94u;
label_4daf94:
    // 0x4daf94: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4daf94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_4daf98:
    // 0x4daf98: 0xc136bf8  jal         func_4DAFE0
label_4daf9c:
    if (ctx->pc == 0x4DAF9Cu) {
        ctx->pc = 0x4DAF9Cu;
            // 0x4daf9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DAFA0u;
        goto label_4dafa0;
    }
    ctx->pc = 0x4DAF98u;
    SET_GPR_U32(ctx, 31, 0x4DAFA0u);
    ctx->pc = 0x4DAF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAF98u;
            // 0x4daf9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DAFE0u;
    if (runtime->hasFunction(0x4DAFE0u)) {
        auto targetFn = runtime->lookupFunction(0x4DAFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DAFA0u; }
        if (ctx->pc != 0x4DAFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DAFE0_0x4dafe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DAFA0u; }
        if (ctx->pc != 0x4DAFA0u) { return; }
    }
    ctx->pc = 0x4DAFA0u;
label_4dafa0:
    // 0x4dafa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4dafa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dafa4:
    // 0x4dafa4: 0xc0ae1c0  jal         func_2B8700
label_4dafa8:
    if (ctx->pc == 0x4DAFA8u) {
        ctx->pc = 0x4DAFA8u;
            // 0x4dafa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DAFACu;
        goto label_4dafac;
    }
    ctx->pc = 0x4DAFA4u;
    SET_GPR_U32(ctx, 31, 0x4DAFACu);
    ctx->pc = 0x4DAFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAFA4u;
            // 0x4dafa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DAFACu; }
        if (ctx->pc != 0x4DAFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DAFACu; }
        if (ctx->pc != 0x4DAFACu) { return; }
    }
    ctx->pc = 0x4DAFACu;
label_4dafac:
    // 0x4dafac: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4dafacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4dafb0:
    // 0x4dafb0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4dafb0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4dafb4:
    // 0x4dafb4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4dafb8:
    if (ctx->pc == 0x4DAFB8u) {
        ctx->pc = 0x4DAFB8u;
            // 0x4dafb8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DAFBCu;
        goto label_4dafbc;
    }
    ctx->pc = 0x4DAFB4u;
    {
        const bool branch_taken_0x4dafb4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4dafb4) {
            ctx->pc = 0x4DAFB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAFB4u;
            // 0x4dafb8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DAFC8u;
            goto label_4dafc8;
        }
    }
    ctx->pc = 0x4DAFBCu;
label_4dafbc:
    // 0x4dafbc: 0xc0400a8  jal         func_1002A0
label_4dafc0:
    if (ctx->pc == 0x4DAFC0u) {
        ctx->pc = 0x4DAFC0u;
            // 0x4dafc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DAFC4u;
        goto label_4dafc4;
    }
    ctx->pc = 0x4DAFBCu;
    SET_GPR_U32(ctx, 31, 0x4DAFC4u);
    ctx->pc = 0x4DAFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAFBCu;
            // 0x4dafc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DAFC4u; }
        if (ctx->pc != 0x4DAFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DAFC4u; }
        if (ctx->pc != 0x4DAFC4u) { return; }
    }
    ctx->pc = 0x4DAFC4u;
label_4dafc4:
    // 0x4dafc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4dafc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dafc8:
    // 0x4dafc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4dafc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4dafcc:
    // 0x4dafcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4dafccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dafd0:
    // 0x4dafd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dafd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4dafd4:
    // 0x4dafd4: 0x3e00008  jr          $ra
label_4dafd8:
    if (ctx->pc == 0x4DAFD8u) {
        ctx->pc = 0x4DAFD8u;
            // 0x4dafd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4DAFDCu;
        goto label_4dafdc;
    }
    ctx->pc = 0x4DAFD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DAFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DAFD4u;
            // 0x4dafd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DAFDCu;
label_4dafdc:
    // 0x4dafdc: 0x0  nop
    ctx->pc = 0x4dafdcu;
    // NOP
}
