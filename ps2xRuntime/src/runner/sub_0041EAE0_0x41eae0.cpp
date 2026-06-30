#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0041EAE0
// Address: 0x41eae0 - 0x41f030
void sub_0041EAE0_0x41eae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041EAE0_0x41eae0");
#endif

    switch (ctx->pc) {
        case 0x41eae0u: goto label_41eae0;
        case 0x41eae4u: goto label_41eae4;
        case 0x41eae8u: goto label_41eae8;
        case 0x41eaecu: goto label_41eaec;
        case 0x41eaf0u: goto label_41eaf0;
        case 0x41eaf4u: goto label_41eaf4;
        case 0x41eaf8u: goto label_41eaf8;
        case 0x41eafcu: goto label_41eafc;
        case 0x41eb00u: goto label_41eb00;
        case 0x41eb04u: goto label_41eb04;
        case 0x41eb08u: goto label_41eb08;
        case 0x41eb0cu: goto label_41eb0c;
        case 0x41eb10u: goto label_41eb10;
        case 0x41eb14u: goto label_41eb14;
        case 0x41eb18u: goto label_41eb18;
        case 0x41eb1cu: goto label_41eb1c;
        case 0x41eb20u: goto label_41eb20;
        case 0x41eb24u: goto label_41eb24;
        case 0x41eb28u: goto label_41eb28;
        case 0x41eb2cu: goto label_41eb2c;
        case 0x41eb30u: goto label_41eb30;
        case 0x41eb34u: goto label_41eb34;
        case 0x41eb38u: goto label_41eb38;
        case 0x41eb3cu: goto label_41eb3c;
        case 0x41eb40u: goto label_41eb40;
        case 0x41eb44u: goto label_41eb44;
        case 0x41eb48u: goto label_41eb48;
        case 0x41eb4cu: goto label_41eb4c;
        case 0x41eb50u: goto label_41eb50;
        case 0x41eb54u: goto label_41eb54;
        case 0x41eb58u: goto label_41eb58;
        case 0x41eb5cu: goto label_41eb5c;
        case 0x41eb60u: goto label_41eb60;
        case 0x41eb64u: goto label_41eb64;
        case 0x41eb68u: goto label_41eb68;
        case 0x41eb6cu: goto label_41eb6c;
        case 0x41eb70u: goto label_41eb70;
        case 0x41eb74u: goto label_41eb74;
        case 0x41eb78u: goto label_41eb78;
        case 0x41eb7cu: goto label_41eb7c;
        case 0x41eb80u: goto label_41eb80;
        case 0x41eb84u: goto label_41eb84;
        case 0x41eb88u: goto label_41eb88;
        case 0x41eb8cu: goto label_41eb8c;
        case 0x41eb90u: goto label_41eb90;
        case 0x41eb94u: goto label_41eb94;
        case 0x41eb98u: goto label_41eb98;
        case 0x41eb9cu: goto label_41eb9c;
        case 0x41eba0u: goto label_41eba0;
        case 0x41eba4u: goto label_41eba4;
        case 0x41eba8u: goto label_41eba8;
        case 0x41ebacu: goto label_41ebac;
        case 0x41ebb0u: goto label_41ebb0;
        case 0x41ebb4u: goto label_41ebb4;
        case 0x41ebb8u: goto label_41ebb8;
        case 0x41ebbcu: goto label_41ebbc;
        case 0x41ebc0u: goto label_41ebc0;
        case 0x41ebc4u: goto label_41ebc4;
        case 0x41ebc8u: goto label_41ebc8;
        case 0x41ebccu: goto label_41ebcc;
        case 0x41ebd0u: goto label_41ebd0;
        case 0x41ebd4u: goto label_41ebd4;
        case 0x41ebd8u: goto label_41ebd8;
        case 0x41ebdcu: goto label_41ebdc;
        case 0x41ebe0u: goto label_41ebe0;
        case 0x41ebe4u: goto label_41ebe4;
        case 0x41ebe8u: goto label_41ebe8;
        case 0x41ebecu: goto label_41ebec;
        case 0x41ebf0u: goto label_41ebf0;
        case 0x41ebf4u: goto label_41ebf4;
        case 0x41ebf8u: goto label_41ebf8;
        case 0x41ebfcu: goto label_41ebfc;
        case 0x41ec00u: goto label_41ec00;
        case 0x41ec04u: goto label_41ec04;
        case 0x41ec08u: goto label_41ec08;
        case 0x41ec0cu: goto label_41ec0c;
        case 0x41ec10u: goto label_41ec10;
        case 0x41ec14u: goto label_41ec14;
        case 0x41ec18u: goto label_41ec18;
        case 0x41ec1cu: goto label_41ec1c;
        case 0x41ec20u: goto label_41ec20;
        case 0x41ec24u: goto label_41ec24;
        case 0x41ec28u: goto label_41ec28;
        case 0x41ec2cu: goto label_41ec2c;
        case 0x41ec30u: goto label_41ec30;
        case 0x41ec34u: goto label_41ec34;
        case 0x41ec38u: goto label_41ec38;
        case 0x41ec3cu: goto label_41ec3c;
        case 0x41ec40u: goto label_41ec40;
        case 0x41ec44u: goto label_41ec44;
        case 0x41ec48u: goto label_41ec48;
        case 0x41ec4cu: goto label_41ec4c;
        case 0x41ec50u: goto label_41ec50;
        case 0x41ec54u: goto label_41ec54;
        case 0x41ec58u: goto label_41ec58;
        case 0x41ec5cu: goto label_41ec5c;
        case 0x41ec60u: goto label_41ec60;
        case 0x41ec64u: goto label_41ec64;
        case 0x41ec68u: goto label_41ec68;
        case 0x41ec6cu: goto label_41ec6c;
        case 0x41ec70u: goto label_41ec70;
        case 0x41ec74u: goto label_41ec74;
        case 0x41ec78u: goto label_41ec78;
        case 0x41ec7cu: goto label_41ec7c;
        case 0x41ec80u: goto label_41ec80;
        case 0x41ec84u: goto label_41ec84;
        case 0x41ec88u: goto label_41ec88;
        case 0x41ec8cu: goto label_41ec8c;
        case 0x41ec90u: goto label_41ec90;
        case 0x41ec94u: goto label_41ec94;
        case 0x41ec98u: goto label_41ec98;
        case 0x41ec9cu: goto label_41ec9c;
        case 0x41eca0u: goto label_41eca0;
        case 0x41eca4u: goto label_41eca4;
        case 0x41eca8u: goto label_41eca8;
        case 0x41ecacu: goto label_41ecac;
        case 0x41ecb0u: goto label_41ecb0;
        case 0x41ecb4u: goto label_41ecb4;
        case 0x41ecb8u: goto label_41ecb8;
        case 0x41ecbcu: goto label_41ecbc;
        case 0x41ecc0u: goto label_41ecc0;
        case 0x41ecc4u: goto label_41ecc4;
        case 0x41ecc8u: goto label_41ecc8;
        case 0x41ecccu: goto label_41eccc;
        case 0x41ecd0u: goto label_41ecd0;
        case 0x41ecd4u: goto label_41ecd4;
        case 0x41ecd8u: goto label_41ecd8;
        case 0x41ecdcu: goto label_41ecdc;
        case 0x41ece0u: goto label_41ece0;
        case 0x41ece4u: goto label_41ece4;
        case 0x41ece8u: goto label_41ece8;
        case 0x41ececu: goto label_41ecec;
        case 0x41ecf0u: goto label_41ecf0;
        case 0x41ecf4u: goto label_41ecf4;
        case 0x41ecf8u: goto label_41ecf8;
        case 0x41ecfcu: goto label_41ecfc;
        case 0x41ed00u: goto label_41ed00;
        case 0x41ed04u: goto label_41ed04;
        case 0x41ed08u: goto label_41ed08;
        case 0x41ed0cu: goto label_41ed0c;
        case 0x41ed10u: goto label_41ed10;
        case 0x41ed14u: goto label_41ed14;
        case 0x41ed18u: goto label_41ed18;
        case 0x41ed1cu: goto label_41ed1c;
        case 0x41ed20u: goto label_41ed20;
        case 0x41ed24u: goto label_41ed24;
        case 0x41ed28u: goto label_41ed28;
        case 0x41ed2cu: goto label_41ed2c;
        case 0x41ed30u: goto label_41ed30;
        case 0x41ed34u: goto label_41ed34;
        case 0x41ed38u: goto label_41ed38;
        case 0x41ed3cu: goto label_41ed3c;
        case 0x41ed40u: goto label_41ed40;
        case 0x41ed44u: goto label_41ed44;
        case 0x41ed48u: goto label_41ed48;
        case 0x41ed4cu: goto label_41ed4c;
        case 0x41ed50u: goto label_41ed50;
        case 0x41ed54u: goto label_41ed54;
        case 0x41ed58u: goto label_41ed58;
        case 0x41ed5cu: goto label_41ed5c;
        case 0x41ed60u: goto label_41ed60;
        case 0x41ed64u: goto label_41ed64;
        case 0x41ed68u: goto label_41ed68;
        case 0x41ed6cu: goto label_41ed6c;
        case 0x41ed70u: goto label_41ed70;
        case 0x41ed74u: goto label_41ed74;
        case 0x41ed78u: goto label_41ed78;
        case 0x41ed7cu: goto label_41ed7c;
        case 0x41ed80u: goto label_41ed80;
        case 0x41ed84u: goto label_41ed84;
        case 0x41ed88u: goto label_41ed88;
        case 0x41ed8cu: goto label_41ed8c;
        case 0x41ed90u: goto label_41ed90;
        case 0x41ed94u: goto label_41ed94;
        case 0x41ed98u: goto label_41ed98;
        case 0x41ed9cu: goto label_41ed9c;
        case 0x41eda0u: goto label_41eda0;
        case 0x41eda4u: goto label_41eda4;
        case 0x41eda8u: goto label_41eda8;
        case 0x41edacu: goto label_41edac;
        case 0x41edb0u: goto label_41edb0;
        case 0x41edb4u: goto label_41edb4;
        case 0x41edb8u: goto label_41edb8;
        case 0x41edbcu: goto label_41edbc;
        case 0x41edc0u: goto label_41edc0;
        case 0x41edc4u: goto label_41edc4;
        case 0x41edc8u: goto label_41edc8;
        case 0x41edccu: goto label_41edcc;
        case 0x41edd0u: goto label_41edd0;
        case 0x41edd4u: goto label_41edd4;
        case 0x41edd8u: goto label_41edd8;
        case 0x41eddcu: goto label_41eddc;
        case 0x41ede0u: goto label_41ede0;
        case 0x41ede4u: goto label_41ede4;
        case 0x41ede8u: goto label_41ede8;
        case 0x41edecu: goto label_41edec;
        case 0x41edf0u: goto label_41edf0;
        case 0x41edf4u: goto label_41edf4;
        case 0x41edf8u: goto label_41edf8;
        case 0x41edfcu: goto label_41edfc;
        case 0x41ee00u: goto label_41ee00;
        case 0x41ee04u: goto label_41ee04;
        case 0x41ee08u: goto label_41ee08;
        case 0x41ee0cu: goto label_41ee0c;
        case 0x41ee10u: goto label_41ee10;
        case 0x41ee14u: goto label_41ee14;
        case 0x41ee18u: goto label_41ee18;
        case 0x41ee1cu: goto label_41ee1c;
        case 0x41ee20u: goto label_41ee20;
        case 0x41ee24u: goto label_41ee24;
        case 0x41ee28u: goto label_41ee28;
        case 0x41ee2cu: goto label_41ee2c;
        case 0x41ee30u: goto label_41ee30;
        case 0x41ee34u: goto label_41ee34;
        case 0x41ee38u: goto label_41ee38;
        case 0x41ee3cu: goto label_41ee3c;
        case 0x41ee40u: goto label_41ee40;
        case 0x41ee44u: goto label_41ee44;
        case 0x41ee48u: goto label_41ee48;
        case 0x41ee4cu: goto label_41ee4c;
        case 0x41ee50u: goto label_41ee50;
        case 0x41ee54u: goto label_41ee54;
        case 0x41ee58u: goto label_41ee58;
        case 0x41ee5cu: goto label_41ee5c;
        case 0x41ee60u: goto label_41ee60;
        case 0x41ee64u: goto label_41ee64;
        case 0x41ee68u: goto label_41ee68;
        case 0x41ee6cu: goto label_41ee6c;
        case 0x41ee70u: goto label_41ee70;
        case 0x41ee74u: goto label_41ee74;
        case 0x41ee78u: goto label_41ee78;
        case 0x41ee7cu: goto label_41ee7c;
        case 0x41ee80u: goto label_41ee80;
        case 0x41ee84u: goto label_41ee84;
        case 0x41ee88u: goto label_41ee88;
        case 0x41ee8cu: goto label_41ee8c;
        case 0x41ee90u: goto label_41ee90;
        case 0x41ee94u: goto label_41ee94;
        case 0x41ee98u: goto label_41ee98;
        case 0x41ee9cu: goto label_41ee9c;
        case 0x41eea0u: goto label_41eea0;
        case 0x41eea4u: goto label_41eea4;
        case 0x41eea8u: goto label_41eea8;
        case 0x41eeacu: goto label_41eeac;
        case 0x41eeb0u: goto label_41eeb0;
        case 0x41eeb4u: goto label_41eeb4;
        case 0x41eeb8u: goto label_41eeb8;
        case 0x41eebcu: goto label_41eebc;
        case 0x41eec0u: goto label_41eec0;
        case 0x41eec4u: goto label_41eec4;
        case 0x41eec8u: goto label_41eec8;
        case 0x41eeccu: goto label_41eecc;
        case 0x41eed0u: goto label_41eed0;
        case 0x41eed4u: goto label_41eed4;
        case 0x41eed8u: goto label_41eed8;
        case 0x41eedcu: goto label_41eedc;
        case 0x41eee0u: goto label_41eee0;
        case 0x41eee4u: goto label_41eee4;
        case 0x41eee8u: goto label_41eee8;
        case 0x41eeecu: goto label_41eeec;
        case 0x41eef0u: goto label_41eef0;
        case 0x41eef4u: goto label_41eef4;
        case 0x41eef8u: goto label_41eef8;
        case 0x41eefcu: goto label_41eefc;
        case 0x41ef00u: goto label_41ef00;
        case 0x41ef04u: goto label_41ef04;
        case 0x41ef08u: goto label_41ef08;
        case 0x41ef0cu: goto label_41ef0c;
        case 0x41ef10u: goto label_41ef10;
        case 0x41ef14u: goto label_41ef14;
        case 0x41ef18u: goto label_41ef18;
        case 0x41ef1cu: goto label_41ef1c;
        case 0x41ef20u: goto label_41ef20;
        case 0x41ef24u: goto label_41ef24;
        case 0x41ef28u: goto label_41ef28;
        case 0x41ef2cu: goto label_41ef2c;
        case 0x41ef30u: goto label_41ef30;
        case 0x41ef34u: goto label_41ef34;
        case 0x41ef38u: goto label_41ef38;
        case 0x41ef3cu: goto label_41ef3c;
        case 0x41ef40u: goto label_41ef40;
        case 0x41ef44u: goto label_41ef44;
        case 0x41ef48u: goto label_41ef48;
        case 0x41ef4cu: goto label_41ef4c;
        case 0x41ef50u: goto label_41ef50;
        case 0x41ef54u: goto label_41ef54;
        case 0x41ef58u: goto label_41ef58;
        case 0x41ef5cu: goto label_41ef5c;
        case 0x41ef60u: goto label_41ef60;
        case 0x41ef64u: goto label_41ef64;
        case 0x41ef68u: goto label_41ef68;
        case 0x41ef6cu: goto label_41ef6c;
        case 0x41ef70u: goto label_41ef70;
        case 0x41ef74u: goto label_41ef74;
        case 0x41ef78u: goto label_41ef78;
        case 0x41ef7cu: goto label_41ef7c;
        case 0x41ef80u: goto label_41ef80;
        case 0x41ef84u: goto label_41ef84;
        case 0x41ef88u: goto label_41ef88;
        case 0x41ef8cu: goto label_41ef8c;
        case 0x41ef90u: goto label_41ef90;
        case 0x41ef94u: goto label_41ef94;
        case 0x41ef98u: goto label_41ef98;
        case 0x41ef9cu: goto label_41ef9c;
        case 0x41efa0u: goto label_41efa0;
        case 0x41efa4u: goto label_41efa4;
        case 0x41efa8u: goto label_41efa8;
        case 0x41efacu: goto label_41efac;
        case 0x41efb0u: goto label_41efb0;
        case 0x41efb4u: goto label_41efb4;
        case 0x41efb8u: goto label_41efb8;
        case 0x41efbcu: goto label_41efbc;
        case 0x41efc0u: goto label_41efc0;
        case 0x41efc4u: goto label_41efc4;
        case 0x41efc8u: goto label_41efc8;
        case 0x41efccu: goto label_41efcc;
        case 0x41efd0u: goto label_41efd0;
        case 0x41efd4u: goto label_41efd4;
        case 0x41efd8u: goto label_41efd8;
        case 0x41efdcu: goto label_41efdc;
        case 0x41efe0u: goto label_41efe0;
        case 0x41efe4u: goto label_41efe4;
        case 0x41efe8u: goto label_41efe8;
        case 0x41efecu: goto label_41efec;
        case 0x41eff0u: goto label_41eff0;
        case 0x41eff4u: goto label_41eff4;
        case 0x41eff8u: goto label_41eff8;
        case 0x41effcu: goto label_41effc;
        case 0x41f000u: goto label_41f000;
        case 0x41f004u: goto label_41f004;
        case 0x41f008u: goto label_41f008;
        case 0x41f00cu: goto label_41f00c;
        case 0x41f010u: goto label_41f010;
        case 0x41f014u: goto label_41f014;
        case 0x41f018u: goto label_41f018;
        case 0x41f01cu: goto label_41f01c;
        case 0x41f020u: goto label_41f020;
        case 0x41f024u: goto label_41f024;
        case 0x41f028u: goto label_41f028;
        case 0x41f02cu: goto label_41f02c;
        default: break;
    }

    ctx->pc = 0x41eae0u;

label_41eae0:
    // 0x41eae0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x41eae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_41eae4:
    // 0x41eae4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x41eae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_41eae8:
    // 0x41eae8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x41eae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_41eaec:
    // 0x41eaec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x41eaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_41eaf0:
    // 0x41eaf0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41eaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_41eaf4:
    // 0x41eaf4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41eaf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41eaf8:
    // 0x41eaf8: 0x263001c0  addiu       $s0, $s1, 0x1C0
    ctx->pc = 0x41eaf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
label_41eafc:
    // 0x41eafc: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x41eafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_41eb00:
    // 0x41eb00: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x41eb00u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_41eb04:
    // 0x41eb04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41eb04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41eb08:
    // 0x41eb08: 0xc04c720  jal         func_131C80
label_41eb0c:
    if (ctx->pc == 0x41EB0Cu) {
        ctx->pc = 0x41EB0Cu;
            // 0x41eb0c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x41EB10u;
        goto label_41eb10;
    }
    ctx->pc = 0x41EB08u;
    SET_GPR_U32(ctx, 31, 0x41EB10u);
    ctx->pc = 0x41EB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EB08u;
            // 0x41eb0c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EB10u; }
        if (ctx->pc != 0x41EB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EB10u; }
        if (ctx->pc != 0x41EB10u) { return; }
    }
    ctx->pc = 0x41EB10u;
label_41eb10:
    // 0x41eb10: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x41eb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_41eb14:
    // 0x41eb14: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x41eb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_41eb18:
    // 0x41eb18: 0xc6210204  lwc1        $f1, 0x204($s1)
    ctx->pc = 0x41eb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41eb1c:
    // 0x41eb1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x41eb1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41eb20:
    // 0x41eb20: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x41eb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41eb24:
    // 0x41eb24: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x41eb24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_41eb28:
    // 0x41eb28: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x41eb28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41eb2c:
    // 0x41eb2c: 0x450000b8  bc1f        . + 4 + (0xB8 << 2)
label_41eb30:
    if (ctx->pc == 0x41EB30u) {
        ctx->pc = 0x41EB30u;
            // 0x41eb30: 0xe6210204  swc1        $f1, 0x204($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 516), bits); }
        ctx->pc = 0x41EB34u;
        goto label_41eb34;
    }
    ctx->pc = 0x41EB2Cu;
    {
        const bool branch_taken_0x41eb2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x41EB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41EB2Cu;
            // 0x41eb30: 0xe6210204  swc1        $f1, 0x204($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 516), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41eb2c) {
            ctx->pc = 0x41EE10u;
            goto label_41ee10;
        }
    }
    ctx->pc = 0x41EB34u;
label_41eb34:
    // 0x41eb34: 0x8e250120  lw          $a1, 0x120($s1)
    ctx->pc = 0x41eb34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
label_41eb38:
    // 0x41eb38: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x41eb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_41eb3c:
    // 0x41eb3c: 0x96260132  lhu         $a2, 0x132($s1)
    ctx->pc = 0x41eb3cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 306)));
label_41eb40:
    // 0x41eb40: 0x96230130  lhu         $v1, 0x130($s1)
    ctx->pc = 0x41eb40u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 304)));
label_41eb44:
    // 0x41eb44: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x41eb44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_41eb48:
    // 0x41eb48: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x41eb48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_41eb4c:
    // 0x41eb4c: 0x38650001  xori        $a1, $v1, 0x1
    ctx->pc = 0x41eb4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_41eb50:
    // 0x41eb50: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x41eb50u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_41eb54:
    // 0x41eb54: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x41eb54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
label_41eb58:
    // 0x41eb58: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x41eb58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_41eb5c:
    // 0x41eb5c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x41eb5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_41eb60:
    // 0x41eb60: 0xe23021  addu        $a2, $a3, $v0
    ctx->pc = 0x41eb60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_41eb64:
    // 0x41eb64: 0xa31023  subu        $v0, $a1, $v1
    ctx->pc = 0x41eb64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_41eb68:
    // 0x41eb68: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x41eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_41eb6c:
    // 0x41eb6c: 0xc04cc90  jal         func_133240
label_41eb70:
    if (ctx->pc == 0x41EB70u) {
        ctx->pc = 0x41EB70u;
            // 0x41eb70: 0xe22821  addu        $a1, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->pc = 0x41EB74u;
        goto label_41eb74;
    }
    ctx->pc = 0x41EB6Cu;
    SET_GPR_U32(ctx, 31, 0x41EB74u);
    ctx->pc = 0x41EB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EB6Cu;
            // 0x41eb70: 0xe22821  addu        $a1, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EB74u; }
        if (ctx->pc != 0x41EB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EB74u; }
        if (ctx->pc != 0x41EB74u) { return; }
    }
    ctx->pc = 0x41EB74u;
label_41eb74:
    // 0x41eb74: 0x96220130  lhu         $v0, 0x130($s1)
    ctx->pc = 0x41eb74u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 304)));
label_41eb78:
    // 0x41eb78: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x41eb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_41eb7c:
    // 0x41eb7c: 0x54450035  bnel        $v0, $a1, . + 4 + (0x35 << 2)
label_41eb80:
    if (ctx->pc == 0x41EB80u) {
        ctx->pc = 0x41EB80u;
            // 0x41eb80: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x41EB84u;
        goto label_41eb84;
    }
    ctx->pc = 0x41EB7Cu;
    {
        const bool branch_taken_0x41eb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x41eb7c) {
            ctx->pc = 0x41EB80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41EB7Cu;
            // 0x41eb80: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41EC54u;
            goto label_41ec54;
        }
    }
    ctx->pc = 0x41EB84u;
label_41eb84:
    // 0x41eb84: 0xc0e32a4  jal         func_38CA90
label_41eb88:
    if (ctx->pc == 0x41EB88u) {
        ctx->pc = 0x41EB88u;
            // 0x41eb88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41EB8Cu;
        goto label_41eb8c;
    }
    ctx->pc = 0x41EB84u;
    SET_GPR_U32(ctx, 31, 0x41EB8Cu);
    ctx->pc = 0x41EB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EB84u;
            // 0x41eb88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EB8Cu; }
        if (ctx->pc != 0x41EB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EB8Cu; }
        if (ctx->pc != 0x41EB8Cu) { return; }
    }
    ctx->pc = 0x41EB8Cu;
label_41eb8c:
    // 0x41eb8c: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x41eb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_41eb90:
    // 0x41eb90: 0xc0e082c  jal         func_3820B0
label_41eb94:
    if (ctx->pc == 0x41EB94u) {
        ctx->pc = 0x41EB94u;
            // 0x41eb94: 0xae2000b4  sw          $zero, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
        ctx->pc = 0x41EB98u;
        goto label_41eb98;
    }
    ctx->pc = 0x41EB90u;
    SET_GPR_U32(ctx, 31, 0x41EB98u);
    ctx->pc = 0x41EB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EB90u;
            // 0x41eb94: 0xae2000b4  sw          $zero, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820B0u;
    if (runtime->hasFunction(0x3820B0u)) {
        auto targetFn = runtime->lookupFunction(0x3820B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EB98u; }
        if (ctx->pc != 0x41EB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820B0_0x3820b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EB98u; }
        if (ctx->pc != 0x41EB98u) { return; }
    }
    ctx->pc = 0x41EB98u;
label_41eb98:
    // 0x41eb98: 0xc0e0828  jal         func_3820A0
label_41eb9c:
    if (ctx->pc == 0x41EB9Cu) {
        ctx->pc = 0x41EB9Cu;
            // 0x41eb9c: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x41EBA0u;
        goto label_41eba0;
    }
    ctx->pc = 0x41EB98u;
    SET_GPR_U32(ctx, 31, 0x41EBA0u);
    ctx->pc = 0x41EB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EB98u;
            // 0x41eb9c: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820A0u;
    if (runtime->hasFunction(0x3820A0u)) {
        auto targetFn = runtime->lookupFunction(0x3820A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EBA0u; }
        if (ctx->pc != 0x41EBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820A0_0x3820a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EBA0u; }
        if (ctx->pc != 0x41EBA0u) { return; }
    }
    ctx->pc = 0x41EBA0u;
label_41eba0:
    // 0x41eba0: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x41eba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_41eba4:
    // 0x41eba4: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_41eba8:
    if (ctx->pc == 0x41EBA8u) {
        ctx->pc = 0x41EBA8u;
            // 0x41eba8: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x41EBACu;
        goto label_41ebac;
    }
    ctx->pc = 0x41EBA4u;
    {
        const bool branch_taken_0x41eba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41eba4) {
            ctx->pc = 0x41EBA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41EBA4u;
            // 0x41eba8: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41EBDCu;
            goto label_41ebdc;
        }
    }
    ctx->pc = 0x41EBACu;
label_41ebac:
    // 0x41ebac: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x41ebacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_41ebb0:
    // 0x41ebb0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x41ebb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_41ebb4:
    // 0x41ebb4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_41ebb8:
    if (ctx->pc == 0x41EBB8u) {
        ctx->pc = 0x41EBBCu;
        goto label_41ebbc;
    }
    ctx->pc = 0x41EBB4u;
    {
        const bool branch_taken_0x41ebb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41ebb4) {
            ctx->pc = 0x41EBD8u;
            goto label_41ebd8;
        }
    }
    ctx->pc = 0x41EBBCu;
label_41ebbc:
    // 0x41ebbc: 0xc0dc408  jal         func_371020
label_41ebc0:
    if (ctx->pc == 0x41EBC0u) {
        ctx->pc = 0x41EBC0u;
            // 0x41ebc0: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x41EBC4u;
        goto label_41ebc4;
    }
    ctx->pc = 0x41EBBCu;
    SET_GPR_U32(ctx, 31, 0x41EBC4u);
    ctx->pc = 0x41EBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EBBCu;
            // 0x41ebc0: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EBC4u; }
        if (ctx->pc != 0x41EBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EBC4u; }
        if (ctx->pc != 0x41EBC4u) { return; }
    }
    ctx->pc = 0x41EBC4u;
label_41ebc4:
    // 0x41ebc4: 0xc0e0824  jal         func_382090
label_41ebc8:
    if (ctx->pc == 0x41EBC8u) {
        ctx->pc = 0x41EBC8u;
            // 0x41ebc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41EBCCu;
        goto label_41ebcc;
    }
    ctx->pc = 0x41EBC4u;
    SET_GPR_U32(ctx, 31, 0x41EBCCu);
    ctx->pc = 0x41EBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EBC4u;
            // 0x41ebc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382090u;
    if (runtime->hasFunction(0x382090u)) {
        auto targetFn = runtime->lookupFunction(0x382090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EBCCu; }
        if (ctx->pc != 0x41EBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382090_0x382090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EBCCu; }
        if (ctx->pc != 0x41EBCCu) { return; }
    }
    ctx->pc = 0x41EBCCu;
label_41ebcc:
    // 0x41ebcc: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x41ebccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_41ebd0:
    // 0x41ebd0: 0xc0e081c  jal         func_382070
label_41ebd4:
    if (ctx->pc == 0x41EBD4u) {
        ctx->pc = 0x41EBD4u;
            // 0x41ebd4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41EBD8u;
        goto label_41ebd8;
    }
    ctx->pc = 0x41EBD0u;
    SET_GPR_U32(ctx, 31, 0x41EBD8u);
    ctx->pc = 0x41EBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EBD0u;
            // 0x41ebd4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382070u;
    if (runtime->hasFunction(0x382070u)) {
        auto targetFn = runtime->lookupFunction(0x382070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EBD8u; }
        if (ctx->pc != 0x41EBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382070_0x382070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EBD8u; }
        if (ctx->pc != 0x41EBD8u) { return; }
    }
    ctx->pc = 0x41EBD8u;
label_41ebd8:
    // 0x41ebd8: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x41ebd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_41ebdc:
    // 0x41ebdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41ebdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41ebe0:
    // 0x41ebe0: 0xc0e080c  jal         func_382030
label_41ebe4:
    if (ctx->pc == 0x41EBE4u) {
        ctx->pc = 0x41EBE4u;
            // 0x41ebe4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x41EBE8u;
        goto label_41ebe8;
    }
    ctx->pc = 0x41EBE0u;
    SET_GPR_U32(ctx, 31, 0x41EBE8u);
    ctx->pc = 0x41EBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EBE0u;
            // 0x41ebe4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382030u;
    if (runtime->hasFunction(0x382030u)) {
        auto targetFn = runtime->lookupFunction(0x382030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EBE8u; }
        if (ctx->pc != 0x41EBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382030_0x382030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EBE8u; }
        if (ctx->pc != 0x41EBE8u) { return; }
    }
    ctx->pc = 0x41EBE8u;
label_41ebe8:
    // 0x41ebe8: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x41ebe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_41ebec:
    // 0x41ebec: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x41ebecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_41ebf0:
    // 0x41ebf0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x41ebf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41ebf4:
    // 0x41ebf4: 0xc08914c  jal         func_224530
label_41ebf8:
    if (ctx->pc == 0x41EBF8u) {
        ctx->pc = 0x41EBF8u;
            // 0x41ebf8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41EBFCu;
        goto label_41ebfc;
    }
    ctx->pc = 0x41EBF4u;
    SET_GPR_U32(ctx, 31, 0x41EBFCu);
    ctx->pc = 0x41EBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EBF4u;
            // 0x41ebf8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EBFCu; }
        if (ctx->pc != 0x41EBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EBFCu; }
        if (ctx->pc != 0x41EBFCu) { return; }
    }
    ctx->pc = 0x41EBFCu;
label_41ebfc:
    // 0x41ebfc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x41ebfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_41ec00:
    // 0x41ec00: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x41ec00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_41ec04:
    // 0x41ec04: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x41ec04u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_41ec08:
    // 0x41ec08: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x41ec08u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_41ec0c:
    // 0x41ec0c: 0xc0b6df0  jal         func_2DB7C0
label_41ec10:
    if (ctx->pc == 0x41EC10u) {
        ctx->pc = 0x41EC10u;
            // 0x41ec10: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x41EC14u;
        goto label_41ec14;
    }
    ctx->pc = 0x41EC0Cu;
    SET_GPR_U32(ctx, 31, 0x41EC14u);
    ctx->pc = 0x41EC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EC0Cu;
            // 0x41ec10: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EC14u; }
        if (ctx->pc != 0x41EC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EC14u; }
        if (ctx->pc != 0x41EC14u) { return; }
    }
    ctx->pc = 0x41EC14u;
label_41ec14:
    // 0x41ec14: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x41ec14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_41ec18:
    // 0x41ec18: 0xc0e07f8  jal         func_381FE0
label_41ec1c:
    if (ctx->pc == 0x41EC1Cu) {
        ctx->pc = 0x41EC1Cu;
            // 0x41ec1c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x41EC20u;
        goto label_41ec20;
    }
    ctx->pc = 0x41EC18u;
    SET_GPR_U32(ctx, 31, 0x41EC20u);
    ctx->pc = 0x41EC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EC18u;
            // 0x41ec1c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EC20u; }
        if (ctx->pc != 0x41EC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EC20u; }
        if (ctx->pc != 0x41EC20u) { return; }
    }
    ctx->pc = 0x41EC20u;
label_41ec20:
    // 0x41ec20: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x41ec20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_41ec24:
    // 0x41ec24: 0xc0dc3f4  jal         func_370FD0
label_41ec28:
    if (ctx->pc == 0x41EC28u) {
        ctx->pc = 0x41EC28u;
            // 0x41ec28: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x41EC2Cu;
        goto label_41ec2c;
    }
    ctx->pc = 0x41EC24u;
    SET_GPR_U32(ctx, 31, 0x41EC2Cu);
    ctx->pc = 0x41EC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EC24u;
            // 0x41ec28: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EC2Cu; }
        if (ctx->pc != 0x41EC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EC2Cu; }
        if (ctx->pc != 0x41EC2Cu) { return; }
    }
    ctx->pc = 0x41EC2Cu;
label_41ec2c:
    // 0x41ec2c: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x41ec2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_41ec30:
    // 0x41ec30: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x41ec30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_41ec34:
    // 0x41ec34: 0x5060007b  beql        $v1, $zero, . + 4 + (0x7B << 2)
label_41ec38:
    if (ctx->pc == 0x41EC38u) {
        ctx->pc = 0x41EC38u;
            // 0x41ec38: 0xc7a20150  lwc1        $f2, 0x150($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x41EC3Cu;
        goto label_41ec3c;
    }
    ctx->pc = 0x41EC34u;
    {
        const bool branch_taken_0x41ec34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x41ec34) {
            ctx->pc = 0x41EC38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41EC34u;
            // 0x41ec38: 0xc7a20150  lwc1        $f2, 0x150($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x41EE24u;
            goto label_41ee24;
        }
    }
    ctx->pc = 0x41EC3Cu;
label_41ec3c:
    // 0x41ec3c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x41ec3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_41ec40:
    // 0x41ec40: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x41ec40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_41ec44:
    // 0x41ec44: 0x320f809  jalr        $t9
label_41ec48:
    if (ctx->pc == 0x41EC48u) {
        ctx->pc = 0x41EC48u;
            // 0x41ec48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41EC4Cu;
        goto label_41ec4c;
    }
    ctx->pc = 0x41EC44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41EC4Cu);
        ctx->pc = 0x41EC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41EC44u;
            // 0x41ec48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41EC4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41EC4Cu; }
            if (ctx->pc != 0x41EC4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x41EC4Cu;
label_41ec4c:
    // 0x41ec4c: 0x10000074  b           . + 4 + (0x74 << 2)
label_41ec50:
    if (ctx->pc == 0x41EC50u) {
        ctx->pc = 0x41EC54u;
        goto label_41ec54;
    }
    ctx->pc = 0x41EC4Cu;
    {
        const bool branch_taken_0x41ec4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41ec4c) {
            ctx->pc = 0x41EE20u;
            goto label_41ee20;
        }
    }
    ctx->pc = 0x41EC54u;
label_41ec54:
    // 0x41ec54: 0xc04cc14  jal         func_133050
label_41ec58:
    if (ctx->pc == 0x41EC58u) {
        ctx->pc = 0x41EC5Cu;
        goto label_41ec5c;
    }
    ctx->pc = 0x41EC54u;
    SET_GPR_U32(ctx, 31, 0x41EC5Cu);
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EC5Cu; }
        if (ctx->pc != 0x41EC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EC5Cu; }
        if (ctx->pc != 0x41EC5Cu) { return; }
    }
    ctx->pc = 0x41EC5Cu;
label_41ec5c:
    // 0x41ec5c: 0xc0775b8  jal         func_1DD6E0
label_41ec60:
    if (ctx->pc == 0x41EC60u) {
        ctx->pc = 0x41EC60u;
            // 0x41ec60: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x41EC64u;
        goto label_41ec64;
    }
    ctx->pc = 0x41EC5Cu;
    SET_GPR_U32(ctx, 31, 0x41EC64u);
    ctx->pc = 0x41EC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EC5Cu;
            // 0x41ec60: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EC64u; }
        if (ctx->pc != 0x41EC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EC64u; }
        if (ctx->pc != 0x41EC64u) { return; }
    }
    ctx->pc = 0x41EC64u;
label_41ec64:
    // 0x41ec64: 0xc0775b4  jal         func_1DD6D0
label_41ec68:
    if (ctx->pc == 0x41EC68u) {
        ctx->pc = 0x41EC68u;
            // 0x41ec68: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x41EC6Cu;
        goto label_41ec6c;
    }
    ctx->pc = 0x41EC64u;
    SET_GPR_U32(ctx, 31, 0x41EC6Cu);
    ctx->pc = 0x41EC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EC64u;
            // 0x41ec68: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EC6Cu; }
        if (ctx->pc != 0x41EC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EC6Cu; }
        if (ctx->pc != 0x41EC6Cu) { return; }
    }
    ctx->pc = 0x41EC6Cu;
label_41ec6c:
    // 0x41ec6c: 0xc6210234  lwc1        $f1, 0x234($s1)
    ctx->pc = 0x41ec6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41ec70:
    // 0x41ec70: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x41ec70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_41ec74:
    // 0x41ec74: 0x46000d42  mul.s       $f21, $f1, $f0
    ctx->pc = 0x41ec74u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_41ec78:
    // 0x41ec78: 0x4615a503  div.s       $f20, $f20, $f21
    ctx->pc = 0x41ec78u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[21];
label_41ec7c:
    // 0x41ec7c: 0x0  nop
    ctx->pc = 0x41ec7cu;
    // NOP
label_41ec80:
    // 0x41ec80: 0x0  nop
    ctx->pc = 0x41ec80u;
    // NOP
label_41ec84:
    // 0x41ec84: 0xc0b6e68  jal         func_2DB9A0
label_41ec88:
    if (ctx->pc == 0x41EC88u) {
        ctx->pc = 0x41EC88u;
            // 0x41ec88: 0xe6340204  swc1        $f20, 0x204($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 516), bits); }
        ctx->pc = 0x41EC8Cu;
        goto label_41ec8c;
    }
    ctx->pc = 0x41EC84u;
    SET_GPR_U32(ctx, 31, 0x41EC8Cu);
    ctx->pc = 0x41EC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EC84u;
            // 0x41ec88: 0xe6340204  swc1        $f20, 0x204($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 516), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EC8Cu; }
        if (ctx->pc != 0x41EC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EC8Cu; }
        if (ctx->pc != 0x41EC8Cu) { return; }
    }
    ctx->pc = 0x41EC8Cu;
label_41ec8c:
    // 0x41ec8c: 0x4614ab02  mul.s       $f12, $f21, $f20
    ctx->pc = 0x41ec8cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
label_41ec90:
    // 0x41ec90: 0xc0b8160  jal         func_2E0580
label_41ec94:
    if (ctx->pc == 0x41EC94u) {
        ctx->pc = 0x41EC94u;
            // 0x41ec94: 0x262400e0  addiu       $a0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->pc = 0x41EC98u;
        goto label_41ec98;
    }
    ctx->pc = 0x41EC90u;
    SET_GPR_U32(ctx, 31, 0x41EC98u);
    ctx->pc = 0x41EC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EC90u;
            // 0x41ec94: 0x262400e0  addiu       $a0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EC98u; }
        if (ctx->pc != 0x41EC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EC98u; }
        if (ctx->pc != 0x41EC98u) { return; }
    }
    ctx->pc = 0x41EC98u;
label_41ec98:
    // 0x41ec98: 0xc0cefec  jal         func_33BFB0
label_41ec9c:
    if (ctx->pc == 0x41EC9Cu) {
        ctx->pc = 0x41EC9Cu;
            // 0x41ec9c: 0x262400e0  addiu       $a0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->pc = 0x41ECA0u;
        goto label_41eca0;
    }
    ctx->pc = 0x41EC98u;
    SET_GPR_U32(ctx, 31, 0x41ECA0u);
    ctx->pc = 0x41EC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EC98u;
            // 0x41ec9c: 0x262400e0  addiu       $a0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BFB0u;
    if (runtime->hasFunction(0x33BFB0u)) {
        auto targetFn = runtime->lookupFunction(0x33BFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ECA0u; }
        if (ctx->pc != 0x41ECA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BFB0_0x33bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ECA0u; }
        if (ctx->pc != 0x41ECA0u) { return; }
    }
    ctx->pc = 0x41ECA0u;
label_41eca0:
    // 0x41eca0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x41eca0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41eca4:
    // 0x41eca4: 0xc0efc48  jal         func_3BF120
label_41eca8:
    if (ctx->pc == 0x41ECA8u) {
        ctx->pc = 0x41ECA8u;
            // 0x41eca8: 0x262400e0  addiu       $a0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->pc = 0x41ECACu;
        goto label_41ecac;
    }
    ctx->pc = 0x41ECA4u;
    SET_GPR_U32(ctx, 31, 0x41ECACu);
    ctx->pc = 0x41ECA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41ECA4u;
            // 0x41eca8: 0x262400e0  addiu       $a0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF120u;
    if (runtime->hasFunction(0x3BF120u)) {
        auto targetFn = runtime->lookupFunction(0x3BF120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ECACu; }
        if (ctx->pc != 0x41ECACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF120_0x3bf120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ECACu; }
        if (ctx->pc != 0x41ECACu) { return; }
    }
    ctx->pc = 0x41ECACu;
label_41ecac:
    // 0x41ecac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41ecacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41ecb0:
    // 0x41ecb0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x41ecb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41ecb4:
    // 0x41ecb4: 0xc04cbf0  jal         func_132FC0
label_41ecb8:
    if (ctx->pc == 0x41ECB8u) {
        ctx->pc = 0x41ECB8u;
            // 0x41ecb8: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x41ECBCu;
        goto label_41ecbc;
    }
    ctx->pc = 0x41ECB4u;
    SET_GPR_U32(ctx, 31, 0x41ECBCu);
    ctx->pc = 0x41ECB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41ECB4u;
            // 0x41ecb8: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ECBCu; }
        if (ctx->pc != 0x41ECBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ECBCu; }
        if (ctx->pc != 0x41ECBCu) { return; }
    }
    ctx->pc = 0x41ECBCu;
label_41ecbc:
    // 0x41ecbc: 0xc0e5f64  jal         func_397D90
label_41ecc0:
    if (ctx->pc == 0x41ECC0u) {
        ctx->pc = 0x41ECC0u;
            // 0x41ecc0: 0x262400e0  addiu       $a0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->pc = 0x41ECC4u;
        goto label_41ecc4;
    }
    ctx->pc = 0x41ECBCu;
    SET_GPR_U32(ctx, 31, 0x41ECC4u);
    ctx->pc = 0x41ECC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41ECBCu;
            // 0x41ecc0: 0x262400e0  addiu       $a0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x397D90u;
    if (runtime->hasFunction(0x397D90u)) {
        auto targetFn = runtime->lookupFunction(0x397D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ECC4u; }
        if (ctx->pc != 0x41ECC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00397D90_0x397d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ECC4u; }
        if (ctx->pc != 0x41ECC4u) { return; }
    }
    ctx->pc = 0x41ECC4u;
label_41ecc4:
    // 0x41ecc4: 0xc6210210  lwc1        $f1, 0x210($s1)
    ctx->pc = 0x41ecc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41ecc8:
    // 0x41ecc8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x41ecc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_41eccc:
    // 0x41eccc: 0xc6200208  lwc1        $f0, 0x208($s1)
    ctx->pc = 0x41ecccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41ecd0:
    // 0x41ecd0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x41ecd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41ecd4:
    // 0x41ecd4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x41ecd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41ecd8:
    // 0x41ecd8: 0xc04cc7c  jal         func_1331F0
label_41ecdc:
    if (ctx->pc == 0x41ECDCu) {
        ctx->pc = 0x41ECDCu;
            // 0x41ecdc: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x41ECE0u;
        goto label_41ece0;
    }
    ctx->pc = 0x41ECD8u;
    SET_GPR_U32(ctx, 31, 0x41ECE0u);
    ctx->pc = 0x41ECDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41ECD8u;
            // 0x41ecdc: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ECE0u; }
        if (ctx->pc != 0x41ECE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ECE0u; }
        if (ctx->pc != 0x41ECE0u) { return; }
    }
    ctx->pc = 0x41ECE0u;
label_41ece0:
    // 0x41ece0: 0xc0cefec  jal         func_33BFB0
label_41ece4:
    if (ctx->pc == 0x41ECE4u) {
        ctx->pc = 0x41ECE4u;
            // 0x41ece4: 0x262400e0  addiu       $a0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->pc = 0x41ECE8u;
        goto label_41ece8;
    }
    ctx->pc = 0x41ECE0u;
    SET_GPR_U32(ctx, 31, 0x41ECE8u);
    ctx->pc = 0x41ECE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41ECE0u;
            // 0x41ece4: 0x262400e0  addiu       $a0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BFB0u;
    if (runtime->hasFunction(0x33BFB0u)) {
        auto targetFn = runtime->lookupFunction(0x33BFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ECE8u; }
        if (ctx->pc != 0x41ECE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BFB0_0x33bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ECE8u; }
        if (ctx->pc != 0x41ECE8u) { return; }
    }
    ctx->pc = 0x41ECE8u;
label_41ece8:
    // 0x41ece8: 0xc6210214  lwc1        $f1, 0x214($s1)
    ctx->pc = 0x41ece8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41ecec:
    // 0x41ecec: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x41ececu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_41ecf0:
    // 0x41ecf0: 0xc620020c  lwc1        $f0, 0x20C($s1)
    ctx->pc = 0x41ecf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41ecf4:
    // 0x41ecf4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x41ecf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41ecf8:
    // 0x41ecf8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x41ecf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41ecfc:
    // 0x41ecfc: 0xc04cc7c  jal         func_1331F0
label_41ed00:
    if (ctx->pc == 0x41ED00u) {
        ctx->pc = 0x41ED00u;
            // 0x41ed00: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x41ED04u;
        goto label_41ed04;
    }
    ctx->pc = 0x41ECFCu;
    SET_GPR_U32(ctx, 31, 0x41ED04u);
    ctx->pc = 0x41ED00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41ECFCu;
            // 0x41ed00: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ED04u; }
        if (ctx->pc != 0x41ED04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ED04u; }
        if (ctx->pc != 0x41ED04u) { return; }
    }
    ctx->pc = 0x41ED04u;
label_41ed04:
    // 0x41ed04: 0xc0dc408  jal         func_371020
label_41ed08:
    if (ctx->pc == 0x41ED08u) {
        ctx->pc = 0x41ED08u;
            // 0x41ed08: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x41ED0Cu;
        goto label_41ed0c;
    }
    ctx->pc = 0x41ED04u;
    SET_GPR_U32(ctx, 31, 0x41ED0Cu);
    ctx->pc = 0x41ED08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41ED04u;
            // 0x41ed08: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ED0Cu; }
        if (ctx->pc != 0x41ED0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ED0Cu; }
        if (ctx->pc != 0x41ED0Cu) { return; }
    }
    ctx->pc = 0x41ED0Cu;
label_41ed0c:
    // 0x41ed0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41ed0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41ed10:
    // 0x41ed10: 0xc0dc9bc  jal         func_3726F0
label_41ed14:
    if (ctx->pc == 0x41ED14u) {
        ctx->pc = 0x41ED14u;
            // 0x41ed14: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x41ED18u;
        goto label_41ed18;
    }
    ctx->pc = 0x41ED10u;
    SET_GPR_U32(ctx, 31, 0x41ED18u);
    ctx->pc = 0x41ED14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41ED10u;
            // 0x41ed14: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ED18u; }
        if (ctx->pc != 0x41ED18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ED18u; }
        if (ctx->pc != 0x41ED18u) { return; }
    }
    ctx->pc = 0x41ED18u;
label_41ed18:
    // 0x41ed18: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x41ed18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_41ed1c:
    // 0x41ed1c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x41ed1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_41ed20:
    // 0x41ed20: 0xc04cc90  jal         func_133240
label_41ed24:
    if (ctx->pc == 0x41ED24u) {
        ctx->pc = 0x41ED24u;
            // 0x41ed24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41ED28u;
        goto label_41ed28;
    }
    ctx->pc = 0x41ED20u;
    SET_GPR_U32(ctx, 31, 0x41ED28u);
    ctx->pc = 0x41ED24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41ED20u;
            // 0x41ed24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ED28u; }
        if (ctx->pc != 0x41ED28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ED28u; }
        if (ctx->pc != 0x41ED28u) { return; }
    }
    ctx->pc = 0x41ED28u;
label_41ed28:
    // 0x41ed28: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x41ed28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_41ed2c:
    // 0x41ed2c: 0xc04cc44  jal         func_133110
label_41ed30:
    if (ctx->pc == 0x41ED30u) {
        ctx->pc = 0x41ED30u;
            // 0x41ed30: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x41ED34u;
        goto label_41ed34;
    }
    ctx->pc = 0x41ED2Cu;
    SET_GPR_U32(ctx, 31, 0x41ED34u);
    ctx->pc = 0x41ED30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41ED2Cu;
            // 0x41ed30: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ED34u; }
        if (ctx->pc != 0x41ED34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ED34u; }
        if (ctx->pc != 0x41ED34u) { return; }
    }
    ctx->pc = 0x41ED34u;
label_41ed34:
    // 0x41ed34: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x41ed34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_41ed38:
    // 0x41ed38: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x41ed38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_41ed3c:
    // 0x41ed3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x41ed3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41ed40:
    // 0x41ed40: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x41ed40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41ed44:
    // 0x41ed44: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x41ed44u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[20];
label_41ed48:
    // 0x41ed48: 0x0  nop
    ctx->pc = 0x41ed48u;
    // NOP
label_41ed4c:
    // 0x41ed4c: 0x0  nop
    ctx->pc = 0x41ed4cu;
    // NOP
label_41ed50:
    // 0x41ed50: 0xc04cc70  jal         func_1331C0
label_41ed54:
    if (ctx->pc == 0x41ED54u) {
        ctx->pc = 0x41ED58u;
        goto label_41ed58;
    }
    ctx->pc = 0x41ED50u;
    SET_GPR_U32(ctx, 31, 0x41ED58u);
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ED58u; }
        if (ctx->pc != 0x41ED58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ED58u; }
        if (ctx->pc != 0x41ED58u) { return; }
    }
    ctx->pc = 0x41ED58u;
label_41ed58:
    // 0x41ed58: 0xc7ac00d0  lwc1        $f12, 0xD0($sp)
    ctx->pc = 0x41ed58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_41ed5c:
    // 0x41ed5c: 0xc7ad00d4  lwc1        $f13, 0xD4($sp)
    ctx->pc = 0x41ed5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_41ed60:
    // 0x41ed60: 0xc7ae00d8  lwc1        $f14, 0xD8($sp)
    ctx->pc = 0x41ed60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_41ed64:
    // 0x41ed64: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x41ed64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_41ed68:
    // 0x41ed68: 0xc0b6e3c  jal         func_2DB8F0
label_41ed6c:
    if (ctx->pc == 0x41ED6Cu) {
        ctx->pc = 0x41ED6Cu;
            // 0x41ed6c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x41ED70u;
        goto label_41ed70;
    }
    ctx->pc = 0x41ED68u;
    SET_GPR_U32(ctx, 31, 0x41ED70u);
    ctx->pc = 0x41ED6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41ED68u;
            // 0x41ed6c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (runtime->hasFunction(0x2DB8F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ED70u; }
        if (ctx->pc != 0x41ED70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8F0_0x2db8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ED70u; }
        if (ctx->pc != 0x41ED70u) { return; }
    }
    ctx->pc = 0x41ED70u;
label_41ed70:
    // 0x41ed70: 0xc0775b8  jal         func_1DD6E0
label_41ed74:
    if (ctx->pc == 0x41ED74u) {
        ctx->pc = 0x41ED78u;
        goto label_41ed78;
    }
    ctx->pc = 0x41ED70u;
    SET_GPR_U32(ctx, 31, 0x41ED78u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ED78u; }
        if (ctx->pc != 0x41ED78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ED78u; }
        if (ctx->pc != 0x41ED78u) { return; }
    }
    ctx->pc = 0x41ED78u;
label_41ed78:
    // 0x41ed78: 0xc0b6e5c  jal         func_2DB970
label_41ed7c:
    if (ctx->pc == 0x41ED7Cu) {
        ctx->pc = 0x41ED7Cu;
            // 0x41ed7c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x41ED80u;
        goto label_41ed80;
    }
    ctx->pc = 0x41ED78u;
    SET_GPR_U32(ctx, 31, 0x41ED80u);
    ctx->pc = 0x41ED7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41ED78u;
            // 0x41ed7c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB970u;
    if (runtime->hasFunction(0x2DB970u)) {
        auto targetFn = runtime->lookupFunction(0x2DB970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ED80u; }
        if (ctx->pc != 0x41ED80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB970_0x2db970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ED80u; }
        if (ctx->pc != 0x41ED80u) { return; }
    }
    ctx->pc = 0x41ED80u;
label_41ed80:
    // 0x41ed80: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x41ed80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_41ed84:
    // 0x41ed84: 0xc0b6e28  jal         func_2DB8A0
label_41ed88:
    if (ctx->pc == 0x41ED88u) {
        ctx->pc = 0x41ED88u;
            // 0x41ed88: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x41ED8Cu;
        goto label_41ed8c;
    }
    ctx->pc = 0x41ED84u;
    SET_GPR_U32(ctx, 31, 0x41ED8Cu);
    ctx->pc = 0x41ED88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41ED84u;
            // 0x41ed88: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8A0u;
    if (runtime->hasFunction(0x2DB8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ED8Cu; }
        if (ctx->pc != 0x41ED8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8A0_0x2db8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ED8Cu; }
        if (ctx->pc != 0x41ED8Cu) { return; }
    }
    ctx->pc = 0x41ED8Cu;
label_41ed8c:
    // 0x41ed8c: 0xc0dc408  jal         func_371020
label_41ed90:
    if (ctx->pc == 0x41ED90u) {
        ctx->pc = 0x41ED90u;
            // 0x41ed90: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x41ED94u;
        goto label_41ed94;
    }
    ctx->pc = 0x41ED8Cu;
    SET_GPR_U32(ctx, 31, 0x41ED94u);
    ctx->pc = 0x41ED90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41ED8Cu;
            // 0x41ed90: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ED94u; }
        if (ctx->pc != 0x41ED94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41ED94u; }
        if (ctx->pc != 0x41ED94u) { return; }
    }
    ctx->pc = 0x41ED94u;
label_41ed94:
    // 0x41ed94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41ed94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41ed98:
    // 0x41ed98: 0xc0e07f8  jal         func_381FE0
label_41ed9c:
    if (ctx->pc == 0x41ED9Cu) {
        ctx->pc = 0x41ED9Cu;
            // 0x41ed9c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x41EDA0u;
        goto label_41eda0;
    }
    ctx->pc = 0x41ED98u;
    SET_GPR_U32(ctx, 31, 0x41EDA0u);
    ctx->pc = 0x41ED9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41ED98u;
            // 0x41ed9c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EDA0u; }
        if (ctx->pc != 0x41EDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EDA0u; }
        if (ctx->pc != 0x41EDA0u) { return; }
    }
    ctx->pc = 0x41EDA0u;
label_41eda0:
    // 0x41eda0: 0xc0cefec  jal         func_33BFB0
label_41eda4:
    if (ctx->pc == 0x41EDA4u) {
        ctx->pc = 0x41EDA4u;
            // 0x41eda4: 0x262400e0  addiu       $a0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->pc = 0x41EDA8u;
        goto label_41eda8;
    }
    ctx->pc = 0x41EDA0u;
    SET_GPR_U32(ctx, 31, 0x41EDA8u);
    ctx->pc = 0x41EDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EDA0u;
            // 0x41eda4: 0x262400e0  addiu       $a0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BFB0u;
    if (runtime->hasFunction(0x33BFB0u)) {
        auto targetFn = runtime->lookupFunction(0x33BFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EDA8u; }
        if (ctx->pc != 0x41EDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BFB0_0x33bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EDA8u; }
        if (ctx->pc != 0x41EDA8u) { return; }
    }
    ctx->pc = 0x41EDA8u;
label_41eda8:
    // 0x41eda8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x41eda8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41edac:
    // 0x41edac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x41edacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_41edb0:
    // 0x41edb0: 0xc04cbf0  jal         func_132FC0
label_41edb4:
    if (ctx->pc == 0x41EDB4u) {
        ctx->pc = 0x41EDB4u;
            // 0x41edb4: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x41EDB8u;
        goto label_41edb8;
    }
    ctx->pc = 0x41EDB0u;
    SET_GPR_U32(ctx, 31, 0x41EDB8u);
    ctx->pc = 0x41EDB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EDB0u;
            // 0x41edb4: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EDB8u; }
        if (ctx->pc != 0x41EDB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EDB8u; }
        if (ctx->pc != 0x41EDB8u) { return; }
    }
    ctx->pc = 0x41EDB8u;
label_41edb8:
    // 0x41edb8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x41edb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_41edbc:
    // 0x41edbc: 0xc04cc44  jal         func_133110
label_41edc0:
    if (ctx->pc == 0x41EDC0u) {
        ctx->pc = 0x41EDC0u;
            // 0x41edc0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41EDC4u;
        goto label_41edc4;
    }
    ctx->pc = 0x41EDBCu;
    SET_GPR_U32(ctx, 31, 0x41EDC4u);
    ctx->pc = 0x41EDC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EDBCu;
            // 0x41edc0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EDC4u; }
        if (ctx->pc != 0x41EDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EDC4u; }
        if (ctx->pc != 0x41EDC4u) { return; }
    }
    ctx->pc = 0x41EDC4u;
label_41edc4:
    // 0x41edc4: 0xc0cefec  jal         func_33BFB0
label_41edc8:
    if (ctx->pc == 0x41EDC8u) {
        ctx->pc = 0x41EDC8u;
            // 0x41edc8: 0x262400e0  addiu       $a0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->pc = 0x41EDCCu;
        goto label_41edcc;
    }
    ctx->pc = 0x41EDC4u;
    SET_GPR_U32(ctx, 31, 0x41EDCCu);
    ctx->pc = 0x41EDC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EDC4u;
            // 0x41edc8: 0x262400e0  addiu       $a0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BFB0u;
    if (runtime->hasFunction(0x33BFB0u)) {
        auto targetFn = runtime->lookupFunction(0x33BFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EDCCu; }
        if (ctx->pc != 0x41EDCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BFB0_0x33bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EDCCu; }
        if (ctx->pc != 0x41EDCCu) { return; }
    }
    ctx->pc = 0x41EDCCu;
label_41edcc:
    // 0x41edcc: 0x3c080066  lui         $t0, 0x66
    ctx->pc = 0x41edccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)102 << 16));
label_41edd0:
    // 0x41edd0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x41edd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41edd4:
    // 0x41edd4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x41edd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_41edd8:
    // 0x41edd8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x41edd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_41eddc:
    // 0x41eddc: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x41eddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_41ede0:
    // 0x41ede0: 0xc107c0c  jal         func_41F030
label_41ede4:
    if (ctx->pc == 0x41EDE4u) {
        ctx->pc = 0x41EDE4u;
            // 0x41ede4: 0x2508c760  addiu       $t0, $t0, -0x38A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952800));
        ctx->pc = 0x41EDE8u;
        goto label_41ede8;
    }
    ctx->pc = 0x41EDE0u;
    SET_GPR_U32(ctx, 31, 0x41EDE8u);
    ctx->pc = 0x41EDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EDE0u;
            // 0x41ede4: 0x2508c760  addiu       $t0, $t0, -0x38A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41F030u;
    if (runtime->hasFunction(0x41F030u)) {
        auto targetFn = runtime->lookupFunction(0x41F030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EDE8u; }
        if (ctx->pc != 0x41EDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0041F030_0x41f030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EDE8u; }
        if (ctx->pc != 0x41EDE8u) { return; }
    }
    ctx->pc = 0x41EDE8u;
label_41ede8:
    // 0x41ede8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x41ede8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_41edec:
    // 0x41edec: 0xc04c994  jal         func_132650
label_41edf0:
    if (ctx->pc == 0x41EDF0u) {
        ctx->pc = 0x41EDF0u;
            // 0x41edf0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x41EDF4u;
        goto label_41edf4;
    }
    ctx->pc = 0x41EDECu;
    SET_GPR_U32(ctx, 31, 0x41EDF4u);
    ctx->pc = 0x41EDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EDECu;
            // 0x41edf0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EDF4u; }
        if (ctx->pc != 0x41EDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EDF4u; }
        if (ctx->pc != 0x41EDF4u) { return; }
    }
    ctx->pc = 0x41EDF4u;
label_41edf4:
    // 0x41edf4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x41edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_41edf8:
    // 0x41edf8: 0x26240140  addiu       $a0, $s1, 0x140
    ctx->pc = 0x41edf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
label_41edfc:
    // 0x41edfc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x41edfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_41ee00:
    // 0x41ee00: 0xc0c05d4  jal         func_301750
label_41ee04:
    if (ctx->pc == 0x41EE04u) {
        ctx->pc = 0x41EE04u;
            // 0x41ee04: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x41EE08u;
        goto label_41ee08;
    }
    ctx->pc = 0x41EE00u;
    SET_GPR_U32(ctx, 31, 0x41EE08u);
    ctx->pc = 0x41EE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EE00u;
            // 0x41ee04: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301750u;
    if (runtime->hasFunction(0x301750u)) {
        auto targetFn = runtime->lookupFunction(0x301750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EE08u; }
        if (ctx->pc != 0x41EE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301750_0x301750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EE08u; }
        if (ctx->pc != 0x41EE08u) { return; }
    }
    ctx->pc = 0x41EE08u;
label_41ee08:
    // 0x41ee08: 0x10000005  b           . + 4 + (0x5 << 2)
label_41ee0c:
    if (ctx->pc == 0x41EE0Cu) {
        ctx->pc = 0x41EE10u;
        goto label_41ee10;
    }
    ctx->pc = 0x41EE08u;
    {
        const bool branch_taken_0x41ee08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41ee08) {
            ctx->pc = 0x41EE20u;
            goto label_41ee20;
        }
    }
    ctx->pc = 0x41EE10u;
label_41ee10:
    // 0x41ee10: 0xc088b74  jal         func_222DD0
label_41ee14:
    if (ctx->pc == 0x41EE14u) {
        ctx->pc = 0x41EE14u;
            // 0x41ee14: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x41EE18u;
        goto label_41ee18;
    }
    ctx->pc = 0x41EE10u;
    SET_GPR_U32(ctx, 31, 0x41EE18u);
    ctx->pc = 0x41EE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EE10u;
            // 0x41ee14: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EE18u; }
        if (ctx->pc != 0x41EE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EE18u; }
        if (ctx->pc != 0x41EE18u) { return; }
    }
    ctx->pc = 0x41EE18u;
label_41ee18:
    // 0x41ee18: 0xc0c6278  jal         func_3189E0
label_41ee1c:
    if (ctx->pc == 0x41EE1Cu) {
        ctx->pc = 0x41EE1Cu;
            // 0x41ee1c: 0x262401a0  addiu       $a0, $s1, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
        ctx->pc = 0x41EE20u;
        goto label_41ee20;
    }
    ctx->pc = 0x41EE18u;
    SET_GPR_U32(ctx, 31, 0x41EE20u);
    ctx->pc = 0x41EE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EE18u;
            // 0x41ee1c: 0x262401a0  addiu       $a0, $s1, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3189E0u;
    if (runtime->hasFunction(0x3189E0u)) {
        auto targetFn = runtime->lookupFunction(0x3189E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EE20u; }
        if (ctx->pc != 0x41EE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003189E0_0x3189e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EE20u; }
        if (ctx->pc != 0x41EE20u) { return; }
    }
    ctx->pc = 0x41EE20u;
label_41ee20:
    // 0x41ee20: 0xc7a20150  lwc1        $f2, 0x150($sp)
    ctx->pc = 0x41ee20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41ee24:
    // 0x41ee24: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x41ee24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41ee28:
    // 0x41ee28: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x41ee28u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41ee2c:
    // 0x41ee2c: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
label_41ee30:
    if (ctx->pc == 0x41EE30u) {
        ctx->pc = 0x41EE30u;
            // 0x41ee30: 0xe7a20120  swc1        $f2, 0x120($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->pc = 0x41EE34u;
        goto label_41ee34;
    }
    ctx->pc = 0x41EE2Cu;
    {
        const bool branch_taken_0x41ee2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x41ee2c) {
            ctx->pc = 0x41EE30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41EE2Cu;
            // 0x41ee30: 0xe7a20120  swc1        $f2, 0x120($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x41EE74u;
            goto label_41ee74;
        }
    }
    ctx->pc = 0x41EE34u;
label_41ee34:
    // 0x41ee34: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x41ee34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41ee38:
    // 0x41ee38: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x41ee38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41ee3c:
    // 0x41ee3c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x41ee3cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41ee40:
    // 0x41ee40: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_41ee44:
    if (ctx->pc == 0x41EE44u) {
        ctx->pc = 0x41EE48u;
        goto label_41ee48;
    }
    ctx->pc = 0x41EE40u;
    {
        const bool branch_taken_0x41ee40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x41ee40) {
            ctx->pc = 0x41EE70u;
            goto label_41ee70;
        }
    }
    ctx->pc = 0x41EE48u;
label_41ee48:
    // 0x41ee48: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x41ee48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41ee4c:
    // 0x41ee4c: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x41ee4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41ee50:
    // 0x41ee50: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x41ee50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41ee54:
    // 0x41ee54: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_41ee58:
    if (ctx->pc == 0x41EE58u) {
        ctx->pc = 0x41EE5Cu;
        goto label_41ee5c;
    }
    ctx->pc = 0x41EE54u;
    {
        const bool branch_taken_0x41ee54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x41ee54) {
            ctx->pc = 0x41EE70u;
            goto label_41ee70;
        }
    }
    ctx->pc = 0x41EE5Cu;
label_41ee5c:
    // 0x41ee5c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x41ee5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41ee60:
    // 0x41ee60: 0xc7a0015c  lwc1        $f0, 0x15C($sp)
    ctx->pc = 0x41ee60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41ee64:
    // 0x41ee64: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x41ee64u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41ee68:
    // 0x41ee68: 0x45030059  bc1tl       . + 4 + (0x59 << 2)
label_41ee6c:
    if (ctx->pc == 0x41EE6Cu) {
        ctx->pc = 0x41EE6Cu;
            // 0x41ee6c: 0x92230218  lbu         $v1, 0x218($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->pc = 0x41EE70u;
        goto label_41ee70;
    }
    ctx->pc = 0x41EE68u;
    {
        const bool branch_taken_0x41ee68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x41ee68) {
            ctx->pc = 0x41EE6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41EE68u;
            // 0x41ee6c: 0x92230218  lbu         $v1, 0x218($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41EFD0u;
            goto label_41efd0;
        }
    }
    ctx->pc = 0x41EE70u;
label_41ee70:
    // 0x41ee70: 0xe7a20120  swc1        $f2, 0x120($sp)
    ctx->pc = 0x41ee70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_41ee74:
    // 0x41ee74: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x41ee74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_41ee78:
    // 0x41ee78: 0xc7a20154  lwc1        $f2, 0x154($sp)
    ctx->pc = 0x41ee78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41ee7c:
    // 0x41ee7c: 0xc7a10158  lwc1        $f1, 0x158($sp)
    ctx->pc = 0x41ee7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41ee80:
    // 0x41ee80: 0xc7a0015c  lwc1        $f0, 0x15C($sp)
    ctx->pc = 0x41ee80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41ee84:
    // 0x41ee84: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x41ee84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_41ee88:
    // 0x41ee88: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x41ee88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_41ee8c:
    // 0x41ee8c: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x41ee8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_41ee90:
    // 0x41ee90: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x41ee90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_41ee94:
    // 0x41ee94: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x41ee94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41ee98:
    // 0x41ee98: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x41ee98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41ee9c:
    // 0x41ee9c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x41ee9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41eea0:
    // 0x41eea0: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x41eea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_41eea4:
    // 0x41eea4: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x41eea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_41eea8:
    // 0x41eea8: 0xe7a20118  swc1        $f2, 0x118($sp)
    ctx->pc = 0x41eea8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_41eeac:
    // 0x41eeac: 0xc0d8a80  jal         func_362A00
label_41eeb0:
    if (ctx->pc == 0x41EEB0u) {
        ctx->pc = 0x41EEB0u;
            // 0x41eeb0: 0xe7a3011c  swc1        $f3, 0x11C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
        ctx->pc = 0x41EEB4u;
        goto label_41eeb4;
    }
    ctx->pc = 0x41EEACu;
    SET_GPR_U32(ctx, 31, 0x41EEB4u);
    ctx->pc = 0x41EEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EEACu;
            // 0x41eeb0: 0xe7a3011c  swc1        $f3, 0x11C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EEB4u; }
        if (ctx->pc != 0x41EEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EEB4u; }
        if (ctx->pc != 0x41EEB4u) { return; }
    }
    ctx->pc = 0x41EEB4u;
label_41eeb4:
    // 0x41eeb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41eeb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41eeb8:
    // 0x41eeb8: 0xc0d8a80  jal         func_362A00
label_41eebc:
    if (ctx->pc == 0x41EEBCu) {
        ctx->pc = 0x41EEBCu;
            // 0x41eebc: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x41EEC0u;
        goto label_41eec0;
    }
    ctx->pc = 0x41EEB8u;
    SET_GPR_U32(ctx, 31, 0x41EEC0u);
    ctx->pc = 0x41EEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EEB8u;
            // 0x41eebc: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EEC0u; }
        if (ctx->pc != 0x41EEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EEC0u; }
        if (ctx->pc != 0x41EEC0u) { return; }
    }
    ctx->pc = 0x41EEC0u;
label_41eec0:
    // 0x41eec0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41eec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41eec4:
    // 0x41eec4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x41eec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41eec8:
    // 0x41eec8: 0xc0d8a6c  jal         func_3629B0
label_41eecc:
    if (ctx->pc == 0x41EECCu) {
        ctx->pc = 0x41EECCu;
            // 0x41eecc: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x41EED0u;
        goto label_41eed0;
    }
    ctx->pc = 0x41EEC8u;
    SET_GPR_U32(ctx, 31, 0x41EED0u);
    ctx->pc = 0x41EECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EEC8u;
            // 0x41eecc: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3629B0u;
    if (runtime->hasFunction(0x3629B0u)) {
        auto targetFn = runtime->lookupFunction(0x3629B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EED0u; }
        if (ctx->pc != 0x41EED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003629B0_0x3629b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EED0u; }
        if (ctx->pc != 0x41EED0u) { return; }
    }
    ctx->pc = 0x41EED0u;
label_41eed0:
    // 0x41eed0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x41eed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_41eed4:
    // 0x41eed4: 0xc0b6e90  jal         func_2DBA40
label_41eed8:
    if (ctx->pc == 0x41EED8u) {
        ctx->pc = 0x41EED8u;
            // 0x41eed8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x41EEDCu;
        goto label_41eedc;
    }
    ctx->pc = 0x41EED4u;
    SET_GPR_U32(ctx, 31, 0x41EEDCu);
    ctx->pc = 0x41EED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EED4u;
            // 0x41eed8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EEDCu; }
        if (ctx->pc != 0x41EEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EEDCu; }
        if (ctx->pc != 0x41EEDCu) { return; }
    }
    ctx->pc = 0x41EEDCu;
label_41eedc:
    // 0x41eedc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x41eedcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_41eee0:
    // 0x41eee0: 0xc0d8a80  jal         func_362A00
label_41eee4:
    if (ctx->pc == 0x41EEE4u) {
        ctx->pc = 0x41EEE4u;
            // 0x41eee4: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x41EEE8u;
        goto label_41eee8;
    }
    ctx->pc = 0x41EEE0u;
    SET_GPR_U32(ctx, 31, 0x41EEE8u);
    ctx->pc = 0x41EEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EEE0u;
            // 0x41eee4: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EEE8u; }
        if (ctx->pc != 0x41EEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EEE8u; }
        if (ctx->pc != 0x41EEE8u) { return; }
    }
    ctx->pc = 0x41EEE8u;
label_41eee8:
    // 0x41eee8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x41eee8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_41eeec:
    // 0x41eeec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x41eeecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41eef0:
    // 0x41eef0: 0xc0d8a54  jal         func_362950
label_41eef4:
    if (ctx->pc == 0x41EEF4u) {
        ctx->pc = 0x41EEF4u;
            // 0x41eef4: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x41EEF8u;
        goto label_41eef8;
    }
    ctx->pc = 0x41EEF0u;
    SET_GPR_U32(ctx, 31, 0x41EEF8u);
    ctx->pc = 0x41EEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EEF0u;
            // 0x41eef4: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362950u;
    if (runtime->hasFunction(0x362950u)) {
        auto targetFn = runtime->lookupFunction(0x362950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EEF8u; }
        if (ctx->pc != 0x41EEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362950_0x362950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EEF8u; }
        if (ctx->pc != 0x41EEF8u) { return; }
    }
    ctx->pc = 0x41EEF8u;
label_41eef8:
    // 0x41eef8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x41eef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_41eefc:
    // 0x41eefc: 0xc0b6e90  jal         func_2DBA40
label_41ef00:
    if (ctx->pc == 0x41EF00u) {
        ctx->pc = 0x41EF00u;
            // 0x41ef00: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x41EF04u;
        goto label_41ef04;
    }
    ctx->pc = 0x41EEFCu;
    SET_GPR_U32(ctx, 31, 0x41EF04u);
    ctx->pc = 0x41EF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EEFCu;
            // 0x41ef00: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EF04u; }
        if (ctx->pc != 0x41EF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EF04u; }
        if (ctx->pc != 0x41EF04u) { return; }
    }
    ctx->pc = 0x41EF04u;
label_41ef04:
    // 0x41ef04: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x41ef04u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_41ef08:
    // 0x41ef08: 0xc0d8a80  jal         func_362A00
label_41ef0c:
    if (ctx->pc == 0x41EF0Cu) {
        ctx->pc = 0x41EF0Cu;
            // 0x41ef0c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x41EF10u;
        goto label_41ef10;
    }
    ctx->pc = 0x41EF08u;
    SET_GPR_U32(ctx, 31, 0x41EF10u);
    ctx->pc = 0x41EF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EF08u;
            // 0x41ef0c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EF10u; }
        if (ctx->pc != 0x41EF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EF10u; }
        if (ctx->pc != 0x41EF10u) { return; }
    }
    ctx->pc = 0x41EF10u;
label_41ef10:
    // 0x41ef10: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x41ef10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_41ef14:
    // 0x41ef14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x41ef14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41ef18:
    // 0x41ef18: 0xc0d8a3c  jal         func_3628F0
label_41ef1c:
    if (ctx->pc == 0x41EF1Cu) {
        ctx->pc = 0x41EF1Cu;
            // 0x41ef1c: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x41EF20u;
        goto label_41ef20;
    }
    ctx->pc = 0x41EF18u;
    SET_GPR_U32(ctx, 31, 0x41EF20u);
    ctx->pc = 0x41EF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EF18u;
            // 0x41ef1c: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3628F0u;
    if (runtime->hasFunction(0x3628F0u)) {
        auto targetFn = runtime->lookupFunction(0x3628F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EF20u; }
        if (ctx->pc != 0x41EF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003628F0_0x3628f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EF20u; }
        if (ctx->pc != 0x41EF20u) { return; }
    }
    ctx->pc = 0x41EF20u;
label_41ef20:
    // 0x41ef20: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x41ef20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_41ef24:
    // 0x41ef24: 0xc0b6e00  jal         func_2DB800
label_41ef28:
    if (ctx->pc == 0x41EF28u) {
        ctx->pc = 0x41EF28u;
            // 0x41ef28: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41EF2Cu;
        goto label_41ef2c;
    }
    ctx->pc = 0x41EF24u;
    SET_GPR_U32(ctx, 31, 0x41EF2Cu);
    ctx->pc = 0x41EF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EF24u;
            // 0x41ef28: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB800u;
    if (runtime->hasFunction(0x2DB800u)) {
        auto targetFn = runtime->lookupFunction(0x2DB800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EF2Cu; }
        if (ctx->pc != 0x41EF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB800_0x2db800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EF2Cu; }
        if (ctx->pc != 0x41EF2Cu) { return; }
    }
    ctx->pc = 0x41EF2Cu;
label_41ef2c:
    // 0x41ef2c: 0xc0d8a80  jal         func_362A00
label_41ef30:
    if (ctx->pc == 0x41EF30u) {
        ctx->pc = 0x41EF30u;
            // 0x41ef30: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x41EF34u;
        goto label_41ef34;
    }
    ctx->pc = 0x41EF2Cu;
    SET_GPR_U32(ctx, 31, 0x41EF34u);
    ctx->pc = 0x41EF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EF2Cu;
            // 0x41ef30: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EF34u; }
        if (ctx->pc != 0x41EF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EF34u; }
        if (ctx->pc != 0x41EF34u) { return; }
    }
    ctx->pc = 0x41EF34u;
label_41ef34:
    // 0x41ef34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41ef34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41ef38:
    // 0x41ef38: 0xc0d8a80  jal         func_362A00
label_41ef3c:
    if (ctx->pc == 0x41EF3Cu) {
        ctx->pc = 0x41EF3Cu;
            // 0x41ef3c: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x41EF40u;
        goto label_41ef40;
    }
    ctx->pc = 0x41EF38u;
    SET_GPR_U32(ctx, 31, 0x41EF40u);
    ctx->pc = 0x41EF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EF38u;
            // 0x41ef3c: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EF40u; }
        if (ctx->pc != 0x41EF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EF40u; }
        if (ctx->pc != 0x41EF40u) { return; }
    }
    ctx->pc = 0x41EF40u;
label_41ef40:
    // 0x41ef40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41ef40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41ef44:
    // 0x41ef44: 0xc0d8a2c  jal         func_3628B0
label_41ef48:
    if (ctx->pc == 0x41EF48u) {
        ctx->pc = 0x41EF48u;
            // 0x41ef48: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41EF4Cu;
        goto label_41ef4c;
    }
    ctx->pc = 0x41EF44u;
    SET_GPR_U32(ctx, 31, 0x41EF4Cu);
    ctx->pc = 0x41EF48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EF44u;
            // 0x41ef48: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3628B0u;
    if (runtime->hasFunction(0x3628B0u)) {
        auto targetFn = runtime->lookupFunction(0x3628B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EF4Cu; }
        if (ctx->pc != 0x41EF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003628B0_0x3628b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EF4Cu; }
        if (ctx->pc != 0x41EF4Cu) { return; }
    }
    ctx->pc = 0x41EF4Cu;
label_41ef4c:
    // 0x41ef4c: 0xc0d8a24  jal         func_362890
label_41ef50:
    if (ctx->pc == 0x41EF50u) {
        ctx->pc = 0x41EF50u;
            // 0x41ef50: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x41EF54u;
        goto label_41ef54;
    }
    ctx->pc = 0x41EF4Cu;
    SET_GPR_U32(ctx, 31, 0x41EF54u);
    ctx->pc = 0x41EF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EF4Cu;
            // 0x41ef50: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x362890u;
    if (runtime->hasFunction(0x362890u)) {
        auto targetFn = runtime->lookupFunction(0x362890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EF54u; }
        if (ctx->pc != 0x41EF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362890_0x362890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EF54u; }
        if (ctx->pc != 0x41EF54u) { return; }
    }
    ctx->pc = 0x41EF54u;
label_41ef54:
    // 0x41ef54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_41ef58:
    if (ctx->pc == 0x41EF58u) {
        ctx->pc = 0x41EF5Cu;
        goto label_41ef5c;
    }
    ctx->pc = 0x41EF54u;
    {
        const bool branch_taken_0x41ef54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41ef54) {
            ctx->pc = 0x41EF68u;
            goto label_41ef68;
        }
    }
    ctx->pc = 0x41EF5Cu;
label_41ef5c:
    // 0x41ef5c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x41ef5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_41ef60:
    // 0x41ef60: 0xc0d8a14  jal         func_362850
label_41ef64:
    if (ctx->pc == 0x41EF64u) {
        ctx->pc = 0x41EF64u;
            // 0x41ef64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41EF68u;
        goto label_41ef68;
    }
    ctx->pc = 0x41EF60u;
    SET_GPR_U32(ctx, 31, 0x41EF68u);
    ctx->pc = 0x41EF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EF60u;
            // 0x41ef64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362850u;
    if (runtime->hasFunction(0x362850u)) {
        auto targetFn = runtime->lookupFunction(0x362850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EF68u; }
        if (ctx->pc != 0x41EF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362850_0x362850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EF68u; }
        if (ctx->pc != 0x41EF68u) { return; }
    }
    ctx->pc = 0x41EF68u;
label_41ef68:
    // 0x41ef68: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41ef68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41ef6c:
    // 0x41ef6c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x41ef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_41ef70:
    // 0x41ef70: 0xc7a30130  lwc1        $f3, 0x130($sp)
    ctx->pc = 0x41ef70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_41ef74:
    // 0x41ef74: 0xc7a20134  lwc1        $f2, 0x134($sp)
    ctx->pc = 0x41ef74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41ef78:
    // 0x41ef78: 0xc7a10138  lwc1        $f1, 0x138($sp)
    ctx->pc = 0x41ef78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41ef7c:
    // 0x41ef7c: 0xc444001c  lwc1        $f4, 0x1C($v0)
    ctx->pc = 0x41ef7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_41ef80:
    // 0x41ef80: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x41ef80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41ef84:
    // 0x41ef84: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x41ef84u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_41ef88:
    // 0x41ef88: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x41ef88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_41ef8c:
    // 0x41ef8c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x41ef8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_41ef90:
    // 0x41ef90: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x41ef90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_41ef94:
    // 0x41ef94: 0xe7a30130  swc1        $f3, 0x130($sp)
    ctx->pc = 0x41ef94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_41ef98:
    // 0x41ef98: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x41ef98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_41ef9c:
    // 0x41ef9c: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x41ef9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_41efa0:
    // 0x41efa0: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x41efa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_41efa4:
    // 0x41efa4: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x41efa4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_41efa8:
    // 0x41efa8: 0xc088b74  jal         func_222DD0
label_41efac:
    if (ctx->pc == 0x41EFACu) {
        ctx->pc = 0x41EFACu;
            // 0x41efac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41EFB0u;
        goto label_41efb0;
    }
    ctx->pc = 0x41EFA8u;
    SET_GPR_U32(ctx, 31, 0x41EFB0u);
    ctx->pc = 0x41EFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EFA8u;
            // 0x41efac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EFB0u; }
        if (ctx->pc != 0x41EFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EFB0u; }
        if (ctx->pc != 0x41EFB0u) { return; }
    }
    ctx->pc = 0x41EFB0u;
label_41efb0:
    // 0x41efb0: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x41efb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_41efb4:
    // 0x41efb4: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x41efb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_41efb8:
    // 0x41efb8: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x41efb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_41efbc:
    // 0x41efbc: 0x320f809  jalr        $t9
label_41efc0:
    if (ctx->pc == 0x41EFC0u) {
        ctx->pc = 0x41EFC0u;
            // 0x41efc0: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x41EFC4u;
        goto label_41efc4;
    }
    ctx->pc = 0x41EFBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41EFC4u);
        ctx->pc = 0x41EFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41EFBCu;
            // 0x41efc0: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41EFC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41EFC4u; }
            if (ctx->pc != 0x41EFC4u) { return; }
        }
        }
    }
    ctx->pc = 0x41EFC4u;
label_41efc4:
    // 0x41efc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x41efc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41efc8:
    // 0x41efc8: 0x10000010  b           . + 4 + (0x10 << 2)
label_41efcc:
    if (ctx->pc == 0x41EFCCu) {
        ctx->pc = 0x41EFCCu;
            // 0x41efcc: 0xa2230218  sb          $v1, 0x218($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 536), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x41EFD0u;
        goto label_41efd0;
    }
    ctx->pc = 0x41EFC8u;
    {
        const bool branch_taken_0x41efc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41EFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41EFC8u;
            // 0x41efcc: 0xa2230218  sb          $v1, 0x218($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 536), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41efc8) {
            ctx->pc = 0x41F00Cu;
            goto label_41f00c;
        }
    }
    ctx->pc = 0x41EFD0u;
label_41efd0:
    // 0x41efd0: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
label_41efd4:
    if (ctx->pc == 0x41EFD4u) {
        ctx->pc = 0x41EFD4u;
            // 0x41efd4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x41EFD8u;
        goto label_41efd8;
    }
    ctx->pc = 0x41EFD0u;
    {
        const bool branch_taken_0x41efd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x41efd0) {
            ctx->pc = 0x41EFD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41EFD0u;
            // 0x41efd4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41F010u;
            goto label_41f010;
        }
    }
    ctx->pc = 0x41EFD8u;
label_41efd8:
    // 0x41efd8: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x41efd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
label_41efdc:
    // 0x41efdc: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x41efdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
label_41efe0:
    // 0x41efe0: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x41efe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
label_41efe4:
    // 0x41efe4: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x41efe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
label_41efe8:
    // 0x41efe8: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x41efe8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_41efec:
    // 0x41efec: 0xc088b74  jal         func_222DD0
label_41eff0:
    if (ctx->pc == 0x41EFF0u) {
        ctx->pc = 0x41EFF0u;
            // 0x41eff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41EFF4u;
        goto label_41eff4;
    }
    ctx->pc = 0x41EFECu;
    SET_GPR_U32(ctx, 31, 0x41EFF4u);
    ctx->pc = 0x41EFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41EFECu;
            // 0x41eff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EFF4u; }
        if (ctx->pc != 0x41EFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41EFF4u; }
        if (ctx->pc != 0x41EFF4u) { return; }
    }
    ctx->pc = 0x41EFF4u;
label_41eff4:
    // 0x41eff4: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x41eff4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_41eff8:
    // 0x41eff8: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x41eff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_41effc:
    // 0x41effc: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x41effcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_41f000:
    // 0x41f000: 0x320f809  jalr        $t9
label_41f004:
    if (ctx->pc == 0x41F004u) {
        ctx->pc = 0x41F004u;
            // 0x41f004: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x41F008u;
        goto label_41f008;
    }
    ctx->pc = 0x41F000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41F008u);
        ctx->pc = 0x41F004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41F000u;
            // 0x41f004: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41F008u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41F008u; }
            if (ctx->pc != 0x41F008u) { return; }
        }
        }
    }
    ctx->pc = 0x41F008u;
label_41f008:
    // 0x41f008: 0xa2200218  sb          $zero, 0x218($s1)
    ctx->pc = 0x41f008u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 536), (uint8_t)GPR_U32(ctx, 0));
label_41f00c:
    // 0x41f00c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x41f00cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_41f010:
    // 0x41f010: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x41f010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_41f014:
    // 0x41f014: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x41f014u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41f018:
    // 0x41f018: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x41f018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_41f01c:
    // 0x41f01c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x41f01cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41f020:
    // 0x41f020: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41f020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41f024:
    // 0x41f024: 0x3e00008  jr          $ra
label_41f028:
    if (ctx->pc == 0x41F028u) {
        ctx->pc = 0x41F028u;
            // 0x41f028: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x41F02Cu;
        goto label_41f02c;
    }
    ctx->pc = 0x41F024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41F028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41F024u;
            // 0x41f028: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41F02Cu;
label_41f02c:
    // 0x41f02c: 0x0  nop
    ctx->pc = 0x41f02cu;
    // NOP
}
