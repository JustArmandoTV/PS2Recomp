#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0055AC30
// Address: 0x55ac30 - 0x55aff0
void sub_0055AC30_0x55ac30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0055AC30_0x55ac30");
#endif

    switch (ctx->pc) {
        case 0x55ac30u: goto label_55ac30;
        case 0x55ac34u: goto label_55ac34;
        case 0x55ac38u: goto label_55ac38;
        case 0x55ac3cu: goto label_55ac3c;
        case 0x55ac40u: goto label_55ac40;
        case 0x55ac44u: goto label_55ac44;
        case 0x55ac48u: goto label_55ac48;
        case 0x55ac4cu: goto label_55ac4c;
        case 0x55ac50u: goto label_55ac50;
        case 0x55ac54u: goto label_55ac54;
        case 0x55ac58u: goto label_55ac58;
        case 0x55ac5cu: goto label_55ac5c;
        case 0x55ac60u: goto label_55ac60;
        case 0x55ac64u: goto label_55ac64;
        case 0x55ac68u: goto label_55ac68;
        case 0x55ac6cu: goto label_55ac6c;
        case 0x55ac70u: goto label_55ac70;
        case 0x55ac74u: goto label_55ac74;
        case 0x55ac78u: goto label_55ac78;
        case 0x55ac7cu: goto label_55ac7c;
        case 0x55ac80u: goto label_55ac80;
        case 0x55ac84u: goto label_55ac84;
        case 0x55ac88u: goto label_55ac88;
        case 0x55ac8cu: goto label_55ac8c;
        case 0x55ac90u: goto label_55ac90;
        case 0x55ac94u: goto label_55ac94;
        case 0x55ac98u: goto label_55ac98;
        case 0x55ac9cu: goto label_55ac9c;
        case 0x55aca0u: goto label_55aca0;
        case 0x55aca4u: goto label_55aca4;
        case 0x55aca8u: goto label_55aca8;
        case 0x55acacu: goto label_55acac;
        case 0x55acb0u: goto label_55acb0;
        case 0x55acb4u: goto label_55acb4;
        case 0x55acb8u: goto label_55acb8;
        case 0x55acbcu: goto label_55acbc;
        case 0x55acc0u: goto label_55acc0;
        case 0x55acc4u: goto label_55acc4;
        case 0x55acc8u: goto label_55acc8;
        case 0x55acccu: goto label_55accc;
        case 0x55acd0u: goto label_55acd0;
        case 0x55acd4u: goto label_55acd4;
        case 0x55acd8u: goto label_55acd8;
        case 0x55acdcu: goto label_55acdc;
        case 0x55ace0u: goto label_55ace0;
        case 0x55ace4u: goto label_55ace4;
        case 0x55ace8u: goto label_55ace8;
        case 0x55acecu: goto label_55acec;
        case 0x55acf0u: goto label_55acf0;
        case 0x55acf4u: goto label_55acf4;
        case 0x55acf8u: goto label_55acf8;
        case 0x55acfcu: goto label_55acfc;
        case 0x55ad00u: goto label_55ad00;
        case 0x55ad04u: goto label_55ad04;
        case 0x55ad08u: goto label_55ad08;
        case 0x55ad0cu: goto label_55ad0c;
        case 0x55ad10u: goto label_55ad10;
        case 0x55ad14u: goto label_55ad14;
        case 0x55ad18u: goto label_55ad18;
        case 0x55ad1cu: goto label_55ad1c;
        case 0x55ad20u: goto label_55ad20;
        case 0x55ad24u: goto label_55ad24;
        case 0x55ad28u: goto label_55ad28;
        case 0x55ad2cu: goto label_55ad2c;
        case 0x55ad30u: goto label_55ad30;
        case 0x55ad34u: goto label_55ad34;
        case 0x55ad38u: goto label_55ad38;
        case 0x55ad3cu: goto label_55ad3c;
        case 0x55ad40u: goto label_55ad40;
        case 0x55ad44u: goto label_55ad44;
        case 0x55ad48u: goto label_55ad48;
        case 0x55ad4cu: goto label_55ad4c;
        case 0x55ad50u: goto label_55ad50;
        case 0x55ad54u: goto label_55ad54;
        case 0x55ad58u: goto label_55ad58;
        case 0x55ad5cu: goto label_55ad5c;
        case 0x55ad60u: goto label_55ad60;
        case 0x55ad64u: goto label_55ad64;
        case 0x55ad68u: goto label_55ad68;
        case 0x55ad6cu: goto label_55ad6c;
        case 0x55ad70u: goto label_55ad70;
        case 0x55ad74u: goto label_55ad74;
        case 0x55ad78u: goto label_55ad78;
        case 0x55ad7cu: goto label_55ad7c;
        case 0x55ad80u: goto label_55ad80;
        case 0x55ad84u: goto label_55ad84;
        case 0x55ad88u: goto label_55ad88;
        case 0x55ad8cu: goto label_55ad8c;
        case 0x55ad90u: goto label_55ad90;
        case 0x55ad94u: goto label_55ad94;
        case 0x55ad98u: goto label_55ad98;
        case 0x55ad9cu: goto label_55ad9c;
        case 0x55ada0u: goto label_55ada0;
        case 0x55ada4u: goto label_55ada4;
        case 0x55ada8u: goto label_55ada8;
        case 0x55adacu: goto label_55adac;
        case 0x55adb0u: goto label_55adb0;
        case 0x55adb4u: goto label_55adb4;
        case 0x55adb8u: goto label_55adb8;
        case 0x55adbcu: goto label_55adbc;
        case 0x55adc0u: goto label_55adc0;
        case 0x55adc4u: goto label_55adc4;
        case 0x55adc8u: goto label_55adc8;
        case 0x55adccu: goto label_55adcc;
        case 0x55add0u: goto label_55add0;
        case 0x55add4u: goto label_55add4;
        case 0x55add8u: goto label_55add8;
        case 0x55addcu: goto label_55addc;
        case 0x55ade0u: goto label_55ade0;
        case 0x55ade4u: goto label_55ade4;
        case 0x55ade8u: goto label_55ade8;
        case 0x55adecu: goto label_55adec;
        case 0x55adf0u: goto label_55adf0;
        case 0x55adf4u: goto label_55adf4;
        case 0x55adf8u: goto label_55adf8;
        case 0x55adfcu: goto label_55adfc;
        case 0x55ae00u: goto label_55ae00;
        case 0x55ae04u: goto label_55ae04;
        case 0x55ae08u: goto label_55ae08;
        case 0x55ae0cu: goto label_55ae0c;
        case 0x55ae10u: goto label_55ae10;
        case 0x55ae14u: goto label_55ae14;
        case 0x55ae18u: goto label_55ae18;
        case 0x55ae1cu: goto label_55ae1c;
        case 0x55ae20u: goto label_55ae20;
        case 0x55ae24u: goto label_55ae24;
        case 0x55ae28u: goto label_55ae28;
        case 0x55ae2cu: goto label_55ae2c;
        case 0x55ae30u: goto label_55ae30;
        case 0x55ae34u: goto label_55ae34;
        case 0x55ae38u: goto label_55ae38;
        case 0x55ae3cu: goto label_55ae3c;
        case 0x55ae40u: goto label_55ae40;
        case 0x55ae44u: goto label_55ae44;
        case 0x55ae48u: goto label_55ae48;
        case 0x55ae4cu: goto label_55ae4c;
        case 0x55ae50u: goto label_55ae50;
        case 0x55ae54u: goto label_55ae54;
        case 0x55ae58u: goto label_55ae58;
        case 0x55ae5cu: goto label_55ae5c;
        case 0x55ae60u: goto label_55ae60;
        case 0x55ae64u: goto label_55ae64;
        case 0x55ae68u: goto label_55ae68;
        case 0x55ae6cu: goto label_55ae6c;
        case 0x55ae70u: goto label_55ae70;
        case 0x55ae74u: goto label_55ae74;
        case 0x55ae78u: goto label_55ae78;
        case 0x55ae7cu: goto label_55ae7c;
        case 0x55ae80u: goto label_55ae80;
        case 0x55ae84u: goto label_55ae84;
        case 0x55ae88u: goto label_55ae88;
        case 0x55ae8cu: goto label_55ae8c;
        case 0x55ae90u: goto label_55ae90;
        case 0x55ae94u: goto label_55ae94;
        case 0x55ae98u: goto label_55ae98;
        case 0x55ae9cu: goto label_55ae9c;
        case 0x55aea0u: goto label_55aea0;
        case 0x55aea4u: goto label_55aea4;
        case 0x55aea8u: goto label_55aea8;
        case 0x55aeacu: goto label_55aeac;
        case 0x55aeb0u: goto label_55aeb0;
        case 0x55aeb4u: goto label_55aeb4;
        case 0x55aeb8u: goto label_55aeb8;
        case 0x55aebcu: goto label_55aebc;
        case 0x55aec0u: goto label_55aec0;
        case 0x55aec4u: goto label_55aec4;
        case 0x55aec8u: goto label_55aec8;
        case 0x55aeccu: goto label_55aecc;
        case 0x55aed0u: goto label_55aed0;
        case 0x55aed4u: goto label_55aed4;
        case 0x55aed8u: goto label_55aed8;
        case 0x55aedcu: goto label_55aedc;
        case 0x55aee0u: goto label_55aee0;
        case 0x55aee4u: goto label_55aee4;
        case 0x55aee8u: goto label_55aee8;
        case 0x55aeecu: goto label_55aeec;
        case 0x55aef0u: goto label_55aef0;
        case 0x55aef4u: goto label_55aef4;
        case 0x55aef8u: goto label_55aef8;
        case 0x55aefcu: goto label_55aefc;
        case 0x55af00u: goto label_55af00;
        case 0x55af04u: goto label_55af04;
        case 0x55af08u: goto label_55af08;
        case 0x55af0cu: goto label_55af0c;
        case 0x55af10u: goto label_55af10;
        case 0x55af14u: goto label_55af14;
        case 0x55af18u: goto label_55af18;
        case 0x55af1cu: goto label_55af1c;
        case 0x55af20u: goto label_55af20;
        case 0x55af24u: goto label_55af24;
        case 0x55af28u: goto label_55af28;
        case 0x55af2cu: goto label_55af2c;
        case 0x55af30u: goto label_55af30;
        case 0x55af34u: goto label_55af34;
        case 0x55af38u: goto label_55af38;
        case 0x55af3cu: goto label_55af3c;
        case 0x55af40u: goto label_55af40;
        case 0x55af44u: goto label_55af44;
        case 0x55af48u: goto label_55af48;
        case 0x55af4cu: goto label_55af4c;
        case 0x55af50u: goto label_55af50;
        case 0x55af54u: goto label_55af54;
        case 0x55af58u: goto label_55af58;
        case 0x55af5cu: goto label_55af5c;
        case 0x55af60u: goto label_55af60;
        case 0x55af64u: goto label_55af64;
        case 0x55af68u: goto label_55af68;
        case 0x55af6cu: goto label_55af6c;
        case 0x55af70u: goto label_55af70;
        case 0x55af74u: goto label_55af74;
        case 0x55af78u: goto label_55af78;
        case 0x55af7cu: goto label_55af7c;
        case 0x55af80u: goto label_55af80;
        case 0x55af84u: goto label_55af84;
        case 0x55af88u: goto label_55af88;
        case 0x55af8cu: goto label_55af8c;
        case 0x55af90u: goto label_55af90;
        case 0x55af94u: goto label_55af94;
        case 0x55af98u: goto label_55af98;
        case 0x55af9cu: goto label_55af9c;
        case 0x55afa0u: goto label_55afa0;
        case 0x55afa4u: goto label_55afa4;
        case 0x55afa8u: goto label_55afa8;
        case 0x55afacu: goto label_55afac;
        case 0x55afb0u: goto label_55afb0;
        case 0x55afb4u: goto label_55afb4;
        case 0x55afb8u: goto label_55afb8;
        case 0x55afbcu: goto label_55afbc;
        case 0x55afc0u: goto label_55afc0;
        case 0x55afc4u: goto label_55afc4;
        case 0x55afc8u: goto label_55afc8;
        case 0x55afccu: goto label_55afcc;
        case 0x55afd0u: goto label_55afd0;
        case 0x55afd4u: goto label_55afd4;
        case 0x55afd8u: goto label_55afd8;
        case 0x55afdcu: goto label_55afdc;
        case 0x55afe0u: goto label_55afe0;
        case 0x55afe4u: goto label_55afe4;
        case 0x55afe8u: goto label_55afe8;
        case 0x55afecu: goto label_55afec;
        default: break;
    }

    ctx->pc = 0x55ac30u;

label_55ac30:
    // 0x55ac30: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x55ac30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_55ac34:
    // 0x55ac34: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x55ac34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_55ac38:
    // 0x55ac38: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x55ac38u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_55ac3c:
    // 0x55ac3c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x55ac3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_55ac40:
    // 0x55ac40: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x55ac40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_55ac44:
    // 0x55ac44: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x55ac44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
label_55ac48:
    // 0x55ac48: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x55ac48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_55ac4c:
    // 0x55ac4c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x55ac4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_55ac50:
    // 0x55ac50: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x55ac50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_55ac54:
    // 0x55ac54: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x55ac54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_55ac58:
    // 0x55ac58: 0x34454dd3  ori         $a1, $v0, 0x4DD3
    ctx->pc = 0x55ac58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
label_55ac5c:
    // 0x55ac5c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x55ac5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_55ac60:
    // 0x55ac60: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x55ac60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_55ac64:
    // 0x55ac64: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x55ac64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_55ac68:
    // 0x55ac68: 0x3c130067  lui         $s3, 0x67
    ctx->pc = 0x55ac68u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)103 << 16));
label_55ac6c:
    // 0x55ac6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x55ac6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_55ac70:
    // 0x55ac70: 0x3c120064  lui         $s2, 0x64
    ctx->pc = 0x55ac70u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)100 << 16));
label_55ac74:
    // 0x55ac74: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x55ac74u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_55ac78:
    // 0x55ac78: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x55ac78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_55ac7c:
    // 0x55ac7c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x55ac7cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_55ac80:
    // 0x55ac80: 0x26739bc0  addiu       $s3, $s3, -0x6440
    ctx->pc = 0x55ac80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941632));
label_55ac84:
    // 0x55ac84: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x55ac84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_55ac88:
    // 0x55ac88: 0x26522100  addiu       $s2, $s2, 0x2100
    ctx->pc = 0x55ac88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8448));
label_55ac8c:
    // 0x55ac8c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x55ac8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_55ac90:
    // 0x55ac90: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x55ac90u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
label_55ac94:
    // 0x55ac94: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x55ac94u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
label_55ac98:
    // 0x55ac98: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x55ac98u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
label_55ac9c:
    // 0x55ac9c: 0x46007d06  mov.s       $f20, $f15
    ctx->pc = 0x55ac9cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[15]);
label_55aca0:
    // 0x55aca0: 0x3010  mfhi        $a2
    ctx->pc = 0x55aca0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_55aca4:
    // 0x55aca4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x55aca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_55aca8:
    // 0x55aca8: 0xa40019  multu       $a1, $a0
    ctx->pc = 0x55aca8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_55acac:
    // 0x55acac: 0x30d6ffff  andi        $s6, $a2, 0xFFFF
    ctx->pc = 0x55acacu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_55acb0:
    // 0x55acb0: 0x0  nop
    ctx->pc = 0x55acb0u;
    // NOP
label_55acb4:
    // 0x55acb4: 0x2010  mfhi        $a0
    ctx->pc = 0x55acb4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_55acb8:
    // 0x55acb8: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x55acb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
label_55acbc:
    // 0x55acbc: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x55acbcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_55acc0:
    // 0x55acc0: 0x1810  mfhi        $v1
    ctx->pc = 0x55acc0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_55acc4:
    // 0x55acc4: 0x440019  multu       $v0, $a0
    ctx->pc = 0x55acc4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_55acc8:
    // 0x55acc8: 0x1010  mfhi        $v0
    ctx->pc = 0x55acc8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_55accc:
    // 0x55accc: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x55acccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_55acd0:
    // 0x55acd0: 0x28410100  slti        $at, $v0, 0x100
    ctx->pc = 0x55acd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
label_55acd4:
    // 0x55acd4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_55acd8:
    if (ctx->pc == 0x55ACD8u) {
        ctx->pc = 0x55ACD8u;
            // 0x55acd8: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x55ACDCu;
        goto label_55acdc;
    }
    ctx->pc = 0x55ACD4u;
    {
        const bool branch_taken_0x55acd4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x55ACD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55ACD4u;
            // 0x55acd8: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x55acd4) {
            ctx->pc = 0x55ACE4u;
            goto label_55ace4;
        }
    }
    ctx->pc = 0x55ACDCu;
label_55acdc:
    // 0x55acdc: 0x641603e7  daddiu      $s6, $zero, 0x3E7
    ctx->pc = 0x55acdcu;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)999);
label_55ace0:
    // 0x55ace0: 0x6410003b  daddiu      $s0, $zero, 0x3B
    ctx->pc = 0x55ace0u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)59);
label_55ace4:
    // 0x55ace4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x55ace4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_55ace8:
    // 0x55ace8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x55ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_55acec:
    // 0x55acec: 0x8c7489e0  lw          $s4, -0x7620($v1)
    ctx->pc = 0x55acecu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_55acf0:
    // 0x55acf0: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x55acf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_55acf4:
    // 0x55acf4: 0xc0506ac  jal         func_141AB0
label_55acf8:
    if (ctx->pc == 0x55ACF8u) {
        ctx->pc = 0x55ACF8u;
            // 0x55acf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55ACFCu;
        goto label_55acfc;
    }
    ctx->pc = 0x55ACF4u;
    SET_GPR_U32(ctx, 31, 0x55ACFCu);
    ctx->pc = 0x55ACF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55ACF4u;
            // 0x55acf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55ACFCu; }
        if (ctx->pc != 0x55ACFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55ACFCu; }
        if (ctx->pc != 0x55ACFCu) { return; }
    }
    ctx->pc = 0x55ACFCu;
label_55acfc:
    // 0x55acfc: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x55acfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_55ad00:
    // 0x55ad00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x55ad00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_55ad04:
    // 0x55ad04: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x55ad04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_55ad08:
    // 0x55ad08: 0x320f809  jalr        $t9
label_55ad0c:
    if (ctx->pc == 0x55AD0Cu) {
        ctx->pc = 0x55AD0Cu;
            // 0x55ad0c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x55AD10u;
        goto label_55ad10;
    }
    ctx->pc = 0x55AD08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55AD10u);
        ctx->pc = 0x55AD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55AD08u;
            // 0x55ad0c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55AD10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55AD10u; }
            if (ctx->pc != 0x55AD10u) { return; }
        }
        }
    }
    ctx->pc = 0x55AD10u;
label_55ad10:
    // 0x55ad10: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x55ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_55ad14:
    // 0x55ad14: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x55ad14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_55ad18:
    // 0x55ad18: 0x321100ff  andi        $s1, $s0, 0xFF
    ctx->pc = 0x55ad18u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_55ad1c:
    // 0x55ad1c: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x55ad1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_55ad20:
    // 0x55ad20: 0x510018  mult        $zero, $v0, $s1
    ctx->pc = 0x55ad20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_55ad24:
    // 0x55ad24: 0x112fc2  srl         $a1, $s1, 31
    ctx->pc = 0x55ad24u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
label_55ad28:
    // 0x55ad28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55ad28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55ad2c:
    // 0x55ad2c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55ad2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55ad30:
    // 0x55ad30: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55ad30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55ad34:
    // 0x55ad34: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x55ad34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_55ad38:
    // 0x55ad38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55ad38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55ad3c:
    // 0x55ad3c: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x55ad3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_55ad40:
    // 0x55ad40: 0x1810  mfhi        $v1
    ctx->pc = 0x55ad40u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_55ad44:
    // 0x55ad44: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x55ad44u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_55ad48:
    // 0x55ad48: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x55ad48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_55ad4c:
    // 0x55ad4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55ad4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55ad50:
    // 0x55ad50: 0x2463000d  addiu       $v1, $v1, 0xD
    ctx->pc = 0x55ad50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13));
label_55ad54:
    // 0x55ad54: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55ad54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55ad58:
    // 0x55ad58: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x55ad58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_55ad5c:
    // 0x55ad5c: 0x2638021  addu        $s0, $s3, $v1
    ctx->pc = 0x55ad5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_55ad60:
    // 0x55ad60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x55ad60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55ad64:
    // 0x55ad64: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x55ad64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_55ad68:
    // 0x55ad68: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x55ad68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_55ad6c:
    // 0x55ad6c: 0x46170818  adda.s      $f1, $f23
    ctx->pc = 0x55ad6cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[23]);
label_55ad70:
    // 0x55ad70: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x55ad70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55ad74:
    // 0x55ad74: 0x4615139c  madd.s      $f14, $f2, $f21
    ctx->pc = 0x55ad74u;
    ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[21]));
label_55ad78:
    // 0x55ad78: 0x46160818  adda.s      $f1, $f22
    ctx->pc = 0x55ad78u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
label_55ad7c:
    // 0x55ad7c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x55ad7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_55ad80:
    // 0x55ad80: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x55ad80u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_55ad84:
    // 0x55ad84: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x55ad84u;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
label_55ad88:
    // 0x55ad88: 0xc0bc284  jal         func_2F0A10
label_55ad8c:
    if (ctx->pc == 0x55AD8Cu) {
        ctx->pc = 0x55AD8Cu;
            // 0x55ad8c: 0x461503dc  madd.s      $f15, $f0, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->pc = 0x55AD90u;
        goto label_55ad90;
    }
    ctx->pc = 0x55AD88u;
    SET_GPR_U32(ctx, 31, 0x55AD90u);
    ctx->pc = 0x55AD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55AD88u;
            // 0x55ad8c: 0x461503dc  madd.s      $f15, $f0, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55AD90u; }
        if (ctx->pc != 0x55AD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55AD90u; }
        if (ctx->pc != 0x55AD90u) { return; }
    }
    ctx->pc = 0x55AD90u;
label_55ad90:
    // 0x55ad90: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x55ad90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_55ad94:
    // 0x55ad94: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x55ad94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_55ad98:
    // 0x55ad98: 0x222001a  div         $zero, $s1, $v0
    ctx->pc = 0x55ad98u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_55ad9c:
    // 0x55ad9c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55ad9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55ada0:
    // 0x55ada0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x55ada0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_55ada4:
    // 0x55ada4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x55ada4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_55ada8:
    // 0x55ada8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x55ada8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55adac:
    // 0x55adac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55adacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55adb0:
    // 0x55adb0: 0x46171018  adda.s      $f2, $f23
    ctx->pc = 0x55adb0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[23]);
label_55adb4:
    // 0x55adb4: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x55adb4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_55adb8:
    // 0x55adb8: 0x461505dc  madd.s      $f23, $f0, $f21
    ctx->pc = 0x55adb8u;
    ctx->f[23] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
label_55adbc:
    // 0x55adbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55adbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55adc0:
    // 0x55adc0: 0x0  nop
    ctx->pc = 0x55adc0u;
    // NOP
label_55adc4:
    // 0x55adc4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55adc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55adc8:
    // 0x55adc8: 0x46171018  adda.s      $f2, $f23
    ctx->pc = 0x55adc8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[23]);
label_55adcc:
    // 0x55adcc: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x55adccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_55add0:
    // 0x55add0: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x55add0u;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
label_55add4:
    // 0x55add4: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x55add4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_55add8:
    // 0x55add8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55add8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55addc:
    // 0x55addc: 0x1010  mfhi        $v0
    ctx->pc = 0x55addcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_55ade0:
    // 0x55ade0: 0x2442000d  addiu       $v0, $v0, 0xD
    ctx->pc = 0x55ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
label_55ade4:
    // 0x55ade4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x55ade4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_55ade8:
    // 0x55ade8: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x55ade8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_55adec:
    // 0x55adec: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55adecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55adf0:
    // 0x55adf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x55adf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55adf4:
    // 0x55adf4: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x55adf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55adf8:
    // 0x55adf8: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x55adf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55adfc:
    // 0x55adfc: 0x46150b9c  madd.s      $f14, $f1, $f21
    ctx->pc = 0x55adfcu;
    ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[21]));
label_55ae00:
    // 0x55ae00: 0x46161018  adda.s      $f2, $f22
    ctx->pc = 0x55ae00u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[22]);
label_55ae04:
    // 0x55ae04: 0xc0bc284  jal         func_2F0A10
label_55ae08:
    if (ctx->pc == 0x55AE08u) {
        ctx->pc = 0x55AE08u;
            // 0x55ae08: 0x461503dc  madd.s      $f15, $f0, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->pc = 0x55AE0Cu;
        goto label_55ae0c;
    }
    ctx->pc = 0x55AE04u;
    SET_GPR_U32(ctx, 31, 0x55AE0Cu);
    ctx->pc = 0x55AE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55AE04u;
            // 0x55ae08: 0x461503dc  madd.s      $f15, $f0, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55AE0Cu; }
        if (ctx->pc != 0x55AE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55AE0Cu; }
        if (ctx->pc != 0x55AE0Cu) { return; }
    }
    ctx->pc = 0x55AE0Cu;
label_55ae0c:
    // 0x55ae0c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x55ae0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55ae10:
    // 0x55ae10: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x55ae10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_55ae14:
    // 0x55ae14: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x55ae14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_55ae18:
    // 0x55ae18: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x55ae18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_55ae1c:
    // 0x55ae1c: 0x46171018  adda.s      $f2, $f23
    ctx->pc = 0x55ae1cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[23]);
label_55ae20:
    // 0x55ae20: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55ae20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55ae24:
    // 0x55ae24: 0x461505dc  madd.s      $f23, $f0, $f21
    ctx->pc = 0x55ae24u;
    ctx->f[23] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
label_55ae28:
    // 0x55ae28: 0x267002e0  addiu       $s0, $s3, 0x2E0
    ctx->pc = 0x55ae28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 736));
label_55ae2c:
    // 0x55ae2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55ae2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55ae30:
    // 0x55ae30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x55ae30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55ae34:
    // 0x55ae34: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55ae34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55ae38:
    // 0x55ae38: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x55ae38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_55ae3c:
    // 0x55ae3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55ae3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55ae40:
    // 0x55ae40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55ae40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55ae44:
    // 0x55ae44: 0x0  nop
    ctx->pc = 0x55ae44u;
    // NOP
label_55ae48:
    // 0x55ae48: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55ae48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55ae4c:
    // 0x55ae4c: 0xc66102e8  lwc1        $f1, 0x2E8($s3)
    ctx->pc = 0x55ae4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55ae50:
    // 0x55ae50: 0x46171018  adda.s      $f2, $f23
    ctx->pc = 0x55ae50u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[23]);
label_55ae54:
    // 0x55ae54: 0xc66002ec  lwc1        $f0, 0x2EC($s3)
    ctx->pc = 0x55ae54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55ae58:
    // 0x55ae58: 0x46150b9c  madd.s      $f14, $f1, $f21
    ctx->pc = 0x55ae58u;
    ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[21]));
label_55ae5c:
    // 0x55ae5c: 0x46161018  adda.s      $f2, $f22
    ctx->pc = 0x55ae5cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[22]);
label_55ae60:
    // 0x55ae60: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x55ae60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_55ae64:
    // 0x55ae64: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x55ae64u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_55ae68:
    // 0x55ae68: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x55ae68u;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
label_55ae6c:
    // 0x55ae6c: 0xc0bc284  jal         func_2F0A10
label_55ae70:
    if (ctx->pc == 0x55AE70u) {
        ctx->pc = 0x55AE70u;
            // 0x55ae70: 0x461503dc  madd.s      $f15, $f0, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->pc = 0x55AE74u;
        goto label_55ae74;
    }
    ctx->pc = 0x55AE6Cu;
    SET_GPR_U32(ctx, 31, 0x55AE74u);
    ctx->pc = 0x55AE70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55AE6Cu;
            // 0x55ae70: 0x461503dc  madd.s      $f15, $f0, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55AE74u; }
        if (ctx->pc != 0x55AE74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55AE74u; }
        if (ctx->pc != 0x55AE74u) { return; }
    }
    ctx->pc = 0x55AE74u;
label_55ae74:
    // 0x55ae74: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x55ae74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55ae78:
    // 0x55ae78: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x55ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_55ae7c:
    // 0x55ae7c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x55ae7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_55ae80:
    // 0x55ae80: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x55ae80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_55ae84:
    // 0x55ae84: 0x46171018  adda.s      $f2, $f23
    ctx->pc = 0x55ae84u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[23]);
label_55ae88:
    // 0x55ae88: 0x32d1ffff  andi        $s1, $s6, 0xFFFF
    ctx->pc = 0x55ae88u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
label_55ae8c:
    // 0x55ae8c: 0x461505dc  madd.s      $f23, $f0, $f21
    ctx->pc = 0x55ae8cu;
    ctx->f[23] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
label_55ae90:
    // 0x55ae90: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x55ae90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_55ae94:
    // 0x55ae94: 0x510019  multu       $v0, $s1
    ctx->pc = 0x55ae94u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_55ae98:
    // 0x55ae98: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55ae98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55ae9c:
    // 0x55ae9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55ae9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55aea0:
    // 0x55aea0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x55aea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_55aea4:
    // 0x55aea4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55aea4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55aea8:
    // 0x55aea8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55aea8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55aeac:
    // 0x55aeac: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x55aeacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_55aeb0:
    // 0x55aeb0: 0x1810  mfhi        $v1
    ctx->pc = 0x55aeb0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_55aeb4:
    // 0x55aeb4: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x55aeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_55aeb8:
    // 0x55aeb8: 0x2463000d  addiu       $v1, $v1, 0xD
    ctx->pc = 0x55aeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13));
label_55aebc:
    // 0x55aebc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55aebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55aec0:
    // 0x55aec0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x55aec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_55aec4:
    // 0x55aec4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55aec4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55aec8:
    // 0x55aec8: 0x2638021  addu        $s0, $s3, $v1
    ctx->pc = 0x55aec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_55aecc:
    // 0x55aecc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x55aeccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55aed0:
    // 0x55aed0: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x55aed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55aed4:
    // 0x55aed4: 0x46171018  adda.s      $f2, $f23
    ctx->pc = 0x55aed4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[23]);
label_55aed8:
    // 0x55aed8: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x55aed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55aedc:
    // 0x55aedc: 0x46150b9c  madd.s      $f14, $f1, $f21
    ctx->pc = 0x55aedcu;
    ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[21]));
label_55aee0:
    // 0x55aee0: 0x46161018  adda.s      $f2, $f22
    ctx->pc = 0x55aee0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[22]);
label_55aee4:
    // 0x55aee4: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x55aee4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_55aee8:
    // 0x55aee8: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x55aee8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_55aeec:
    // 0x55aeec: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x55aeecu;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
label_55aef0:
    // 0x55aef0: 0xc0bc284  jal         func_2F0A10
label_55aef4:
    if (ctx->pc == 0x55AEF4u) {
        ctx->pc = 0x55AEF4u;
            // 0x55aef4: 0x461503dc  madd.s      $f15, $f0, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->pc = 0x55AEF8u;
        goto label_55aef8;
    }
    ctx->pc = 0x55AEF0u;
    SET_GPR_U32(ctx, 31, 0x55AEF8u);
    ctx->pc = 0x55AEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55AEF0u;
            // 0x55aef4: 0x461503dc  madd.s      $f15, $f0, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55AEF8u; }
        if (ctx->pc != 0x55AEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55AEF8u; }
        if (ctx->pc != 0x55AEF8u) { return; }
    }
    ctx->pc = 0x55AEF8u;
label_55aef8:
    // 0x55aef8: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x55aef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_55aefc:
    // 0x55aefc: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x55aefcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_55af00:
    // 0x55af00: 0x222001b  divu        $zero, $s1, $v0
    ctx->pc = 0x55af00u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
label_55af04:
    // 0x55af04: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x55af04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_55af08:
    // 0x55af08: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x55af08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_55af0c:
    // 0x55af0c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x55af0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55af10:
    // 0x55af10: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x55af10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55af14:
    // 0x55af14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x55af14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55af18:
    // 0x55af18: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x55af18u;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
label_55af1c:
    // 0x55af1c: 0x46171018  adda.s      $f2, $f23
    ctx->pc = 0x55af1cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[23]);
label_55af20:
    // 0x55af20: 0x4615051c  madd.s      $f20, $f0, $f21
    ctx->pc = 0x55af20u;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
label_55af24:
    // 0x55af24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55af24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55af28:
    // 0x55af28: 0x0  nop
    ctx->pc = 0x55af28u;
    // NOP
label_55af2c:
    // 0x55af2c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55af2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_55af30:
    // 0x55af30: 0x46141018  adda.s      $f2, $f20
    ctx->pc = 0x55af30u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
label_55af34:
    // 0x55af34: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x55af34u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_55af38:
    // 0x55af38: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x55af38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_55af3c:
    // 0x55af3c: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x55af3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
label_55af40:
    // 0x55af40: 0x3445cccd  ori         $a1, $v0, 0xCCCD
    ctx->pc = 0x55af40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_55af44:
    // 0x55af44: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x55af44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_55af48:
    // 0x55af48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55af48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55af4c:
    // 0x55af4c: 0x1010  mfhi        $v0
    ctx->pc = 0x55af4cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_55af50:
    // 0x55af50: 0xa20019  multu       $a1, $v0
    ctx->pc = 0x55af50u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_55af54:
    // 0x55af54: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x55af54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_55af58:
    // 0x55af58: 0x0  nop
    ctx->pc = 0x55af58u;
    // NOP
label_55af5c:
    // 0x55af5c: 0x1010  mfhi        $v0
    ctx->pc = 0x55af5cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_55af60:
    // 0x55af60: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x55af60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_55af64:
    // 0x55af64: 0x2442000d  addiu       $v0, $v0, 0xD
    ctx->pc = 0x55af64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
label_55af68:
    // 0x55af68: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x55af68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_55af6c:
    // 0x55af6c: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x55af6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_55af70:
    // 0x55af70: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x55af70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55af74:
    // 0x55af74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x55af74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55af78:
    // 0x55af78: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x55af78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55af7c:
    // 0x55af7c: 0x46150b9c  madd.s      $f14, $f1, $f21
    ctx->pc = 0x55af7cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[21]));
label_55af80:
    // 0x55af80: 0x46161018  adda.s      $f2, $f22
    ctx->pc = 0x55af80u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[22]);
label_55af84:
    // 0x55af84: 0xc0bc284  jal         func_2F0A10
label_55af88:
    if (ctx->pc == 0x55AF88u) {
        ctx->pc = 0x55AF88u;
            // 0x55af88: 0x461503dc  madd.s      $f15, $f0, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->pc = 0x55AF8Cu;
        goto label_55af8c;
    }
    ctx->pc = 0x55AF84u;
    SET_GPR_U32(ctx, 31, 0x55AF8Cu);
    ctx->pc = 0x55AF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55AF84u;
            // 0x55af88: 0x461503dc  madd.s      $f15, $f0, $f21 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55AF8Cu; }
        if (ctx->pc != 0x55AF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55AF8Cu; }
        if (ctx->pc != 0x55AF8Cu) { return; }
    }
    ctx->pc = 0x55AF8Cu;
label_55af8c:
    // 0x55af8c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x55af8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_55af90:
    // 0x55af90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x55af90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55af94:
    // 0x55af94: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x55af94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55af98:
    // 0x55af98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x55af98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_55af9c:
    // 0x55af9c: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x55af9cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_55afa0:
    // 0x55afa0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x55afa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_55afa4:
    // 0x55afa4: 0x320f809  jalr        $t9
label_55afa8:
    if (ctx->pc == 0x55AFA8u) {
        ctx->pc = 0x55AFA8u;
            // 0x55afa8: 0x46150d1c  madd.s      $f20, $f1, $f21 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[21]));
        ctx->pc = 0x55AFACu;
        goto label_55afac;
    }
    ctx->pc = 0x55AFA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55AFACu);
        ctx->pc = 0x55AFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55AFA4u;
            // 0x55afa8: 0x46150d1c  madd.s      $f20, $f1, $f21 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[21]));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55AFACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55AFACu; }
            if (ctx->pc != 0x55AFACu) { return; }
        }
        }
    }
    ctx->pc = 0x55AFACu;
label_55afac:
    // 0x55afac: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x55afacu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_55afb0:
    // 0x55afb0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x55afb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_55afb4:
    // 0x55afb4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x55afb4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_55afb8:
    // 0x55afb8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x55afb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_55afbc:
    // 0x55afbc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x55afbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_55afc0:
    // 0x55afc0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x55afc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_55afc4:
    // 0x55afc4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x55afc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_55afc8:
    // 0x55afc8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x55afc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_55afcc:
    // 0x55afcc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x55afccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_55afd0:
    // 0x55afd0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x55afd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_55afd4:
    // 0x55afd4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x55afd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_55afd8:
    // 0x55afd8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x55afd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_55afdc:
    // 0x55afdc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x55afdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_55afe0:
    // 0x55afe0: 0x3e00008  jr          $ra
label_55afe4:
    if (ctx->pc == 0x55AFE4u) {
        ctx->pc = 0x55AFE4u;
            // 0x55afe4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x55AFE8u;
        goto label_55afe8;
    }
    ctx->pc = 0x55AFE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55AFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55AFE0u;
            // 0x55afe4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55AFE8u;
label_55afe8:
    // 0x55afe8: 0x0  nop
    ctx->pc = 0x55afe8u;
    // NOP
label_55afec:
    // 0x55afec: 0x0  nop
    ctx->pc = 0x55afecu;
    // NOP
}
