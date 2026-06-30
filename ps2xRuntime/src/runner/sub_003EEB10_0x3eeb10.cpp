#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003EEB10
// Address: 0x3eeb10 - 0x3eee80
void sub_003EEB10_0x3eeb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EEB10_0x3eeb10");
#endif

    switch (ctx->pc) {
        case 0x3eeb10u: goto label_3eeb10;
        case 0x3eeb14u: goto label_3eeb14;
        case 0x3eeb18u: goto label_3eeb18;
        case 0x3eeb1cu: goto label_3eeb1c;
        case 0x3eeb20u: goto label_3eeb20;
        case 0x3eeb24u: goto label_3eeb24;
        case 0x3eeb28u: goto label_3eeb28;
        case 0x3eeb2cu: goto label_3eeb2c;
        case 0x3eeb30u: goto label_3eeb30;
        case 0x3eeb34u: goto label_3eeb34;
        case 0x3eeb38u: goto label_3eeb38;
        case 0x3eeb3cu: goto label_3eeb3c;
        case 0x3eeb40u: goto label_3eeb40;
        case 0x3eeb44u: goto label_3eeb44;
        case 0x3eeb48u: goto label_3eeb48;
        case 0x3eeb4cu: goto label_3eeb4c;
        case 0x3eeb50u: goto label_3eeb50;
        case 0x3eeb54u: goto label_3eeb54;
        case 0x3eeb58u: goto label_3eeb58;
        case 0x3eeb5cu: goto label_3eeb5c;
        case 0x3eeb60u: goto label_3eeb60;
        case 0x3eeb64u: goto label_3eeb64;
        case 0x3eeb68u: goto label_3eeb68;
        case 0x3eeb6cu: goto label_3eeb6c;
        case 0x3eeb70u: goto label_3eeb70;
        case 0x3eeb74u: goto label_3eeb74;
        case 0x3eeb78u: goto label_3eeb78;
        case 0x3eeb7cu: goto label_3eeb7c;
        case 0x3eeb80u: goto label_3eeb80;
        case 0x3eeb84u: goto label_3eeb84;
        case 0x3eeb88u: goto label_3eeb88;
        case 0x3eeb8cu: goto label_3eeb8c;
        case 0x3eeb90u: goto label_3eeb90;
        case 0x3eeb94u: goto label_3eeb94;
        case 0x3eeb98u: goto label_3eeb98;
        case 0x3eeb9cu: goto label_3eeb9c;
        case 0x3eeba0u: goto label_3eeba0;
        case 0x3eeba4u: goto label_3eeba4;
        case 0x3eeba8u: goto label_3eeba8;
        case 0x3eebacu: goto label_3eebac;
        case 0x3eebb0u: goto label_3eebb0;
        case 0x3eebb4u: goto label_3eebb4;
        case 0x3eebb8u: goto label_3eebb8;
        case 0x3eebbcu: goto label_3eebbc;
        case 0x3eebc0u: goto label_3eebc0;
        case 0x3eebc4u: goto label_3eebc4;
        case 0x3eebc8u: goto label_3eebc8;
        case 0x3eebccu: goto label_3eebcc;
        case 0x3eebd0u: goto label_3eebd0;
        case 0x3eebd4u: goto label_3eebd4;
        case 0x3eebd8u: goto label_3eebd8;
        case 0x3eebdcu: goto label_3eebdc;
        case 0x3eebe0u: goto label_3eebe0;
        case 0x3eebe4u: goto label_3eebe4;
        case 0x3eebe8u: goto label_3eebe8;
        case 0x3eebecu: goto label_3eebec;
        case 0x3eebf0u: goto label_3eebf0;
        case 0x3eebf4u: goto label_3eebf4;
        case 0x3eebf8u: goto label_3eebf8;
        case 0x3eebfcu: goto label_3eebfc;
        case 0x3eec00u: goto label_3eec00;
        case 0x3eec04u: goto label_3eec04;
        case 0x3eec08u: goto label_3eec08;
        case 0x3eec0cu: goto label_3eec0c;
        case 0x3eec10u: goto label_3eec10;
        case 0x3eec14u: goto label_3eec14;
        case 0x3eec18u: goto label_3eec18;
        case 0x3eec1cu: goto label_3eec1c;
        case 0x3eec20u: goto label_3eec20;
        case 0x3eec24u: goto label_3eec24;
        case 0x3eec28u: goto label_3eec28;
        case 0x3eec2cu: goto label_3eec2c;
        case 0x3eec30u: goto label_3eec30;
        case 0x3eec34u: goto label_3eec34;
        case 0x3eec38u: goto label_3eec38;
        case 0x3eec3cu: goto label_3eec3c;
        case 0x3eec40u: goto label_3eec40;
        case 0x3eec44u: goto label_3eec44;
        case 0x3eec48u: goto label_3eec48;
        case 0x3eec4cu: goto label_3eec4c;
        case 0x3eec50u: goto label_3eec50;
        case 0x3eec54u: goto label_3eec54;
        case 0x3eec58u: goto label_3eec58;
        case 0x3eec5cu: goto label_3eec5c;
        case 0x3eec60u: goto label_3eec60;
        case 0x3eec64u: goto label_3eec64;
        case 0x3eec68u: goto label_3eec68;
        case 0x3eec6cu: goto label_3eec6c;
        case 0x3eec70u: goto label_3eec70;
        case 0x3eec74u: goto label_3eec74;
        case 0x3eec78u: goto label_3eec78;
        case 0x3eec7cu: goto label_3eec7c;
        case 0x3eec80u: goto label_3eec80;
        case 0x3eec84u: goto label_3eec84;
        case 0x3eec88u: goto label_3eec88;
        case 0x3eec8cu: goto label_3eec8c;
        case 0x3eec90u: goto label_3eec90;
        case 0x3eec94u: goto label_3eec94;
        case 0x3eec98u: goto label_3eec98;
        case 0x3eec9cu: goto label_3eec9c;
        case 0x3eeca0u: goto label_3eeca0;
        case 0x3eeca4u: goto label_3eeca4;
        case 0x3eeca8u: goto label_3eeca8;
        case 0x3eecacu: goto label_3eecac;
        case 0x3eecb0u: goto label_3eecb0;
        case 0x3eecb4u: goto label_3eecb4;
        case 0x3eecb8u: goto label_3eecb8;
        case 0x3eecbcu: goto label_3eecbc;
        case 0x3eecc0u: goto label_3eecc0;
        case 0x3eecc4u: goto label_3eecc4;
        case 0x3eecc8u: goto label_3eecc8;
        case 0x3eecccu: goto label_3eeccc;
        case 0x3eecd0u: goto label_3eecd0;
        case 0x3eecd4u: goto label_3eecd4;
        case 0x3eecd8u: goto label_3eecd8;
        case 0x3eecdcu: goto label_3eecdc;
        case 0x3eece0u: goto label_3eece0;
        case 0x3eece4u: goto label_3eece4;
        case 0x3eece8u: goto label_3eece8;
        case 0x3eececu: goto label_3eecec;
        case 0x3eecf0u: goto label_3eecf0;
        case 0x3eecf4u: goto label_3eecf4;
        case 0x3eecf8u: goto label_3eecf8;
        case 0x3eecfcu: goto label_3eecfc;
        case 0x3eed00u: goto label_3eed00;
        case 0x3eed04u: goto label_3eed04;
        case 0x3eed08u: goto label_3eed08;
        case 0x3eed0cu: goto label_3eed0c;
        case 0x3eed10u: goto label_3eed10;
        case 0x3eed14u: goto label_3eed14;
        case 0x3eed18u: goto label_3eed18;
        case 0x3eed1cu: goto label_3eed1c;
        case 0x3eed20u: goto label_3eed20;
        case 0x3eed24u: goto label_3eed24;
        case 0x3eed28u: goto label_3eed28;
        case 0x3eed2cu: goto label_3eed2c;
        case 0x3eed30u: goto label_3eed30;
        case 0x3eed34u: goto label_3eed34;
        case 0x3eed38u: goto label_3eed38;
        case 0x3eed3cu: goto label_3eed3c;
        case 0x3eed40u: goto label_3eed40;
        case 0x3eed44u: goto label_3eed44;
        case 0x3eed48u: goto label_3eed48;
        case 0x3eed4cu: goto label_3eed4c;
        case 0x3eed50u: goto label_3eed50;
        case 0x3eed54u: goto label_3eed54;
        case 0x3eed58u: goto label_3eed58;
        case 0x3eed5cu: goto label_3eed5c;
        case 0x3eed60u: goto label_3eed60;
        case 0x3eed64u: goto label_3eed64;
        case 0x3eed68u: goto label_3eed68;
        case 0x3eed6cu: goto label_3eed6c;
        case 0x3eed70u: goto label_3eed70;
        case 0x3eed74u: goto label_3eed74;
        case 0x3eed78u: goto label_3eed78;
        case 0x3eed7cu: goto label_3eed7c;
        case 0x3eed80u: goto label_3eed80;
        case 0x3eed84u: goto label_3eed84;
        case 0x3eed88u: goto label_3eed88;
        case 0x3eed8cu: goto label_3eed8c;
        case 0x3eed90u: goto label_3eed90;
        case 0x3eed94u: goto label_3eed94;
        case 0x3eed98u: goto label_3eed98;
        case 0x3eed9cu: goto label_3eed9c;
        case 0x3eeda0u: goto label_3eeda0;
        case 0x3eeda4u: goto label_3eeda4;
        case 0x3eeda8u: goto label_3eeda8;
        case 0x3eedacu: goto label_3eedac;
        case 0x3eedb0u: goto label_3eedb0;
        case 0x3eedb4u: goto label_3eedb4;
        case 0x3eedb8u: goto label_3eedb8;
        case 0x3eedbcu: goto label_3eedbc;
        case 0x3eedc0u: goto label_3eedc0;
        case 0x3eedc4u: goto label_3eedc4;
        case 0x3eedc8u: goto label_3eedc8;
        case 0x3eedccu: goto label_3eedcc;
        case 0x3eedd0u: goto label_3eedd0;
        case 0x3eedd4u: goto label_3eedd4;
        case 0x3eedd8u: goto label_3eedd8;
        case 0x3eeddcu: goto label_3eeddc;
        case 0x3eede0u: goto label_3eede0;
        case 0x3eede4u: goto label_3eede4;
        case 0x3eede8u: goto label_3eede8;
        case 0x3eedecu: goto label_3eedec;
        case 0x3eedf0u: goto label_3eedf0;
        case 0x3eedf4u: goto label_3eedf4;
        case 0x3eedf8u: goto label_3eedf8;
        case 0x3eedfcu: goto label_3eedfc;
        case 0x3eee00u: goto label_3eee00;
        case 0x3eee04u: goto label_3eee04;
        case 0x3eee08u: goto label_3eee08;
        case 0x3eee0cu: goto label_3eee0c;
        case 0x3eee10u: goto label_3eee10;
        case 0x3eee14u: goto label_3eee14;
        case 0x3eee18u: goto label_3eee18;
        case 0x3eee1cu: goto label_3eee1c;
        case 0x3eee20u: goto label_3eee20;
        case 0x3eee24u: goto label_3eee24;
        case 0x3eee28u: goto label_3eee28;
        case 0x3eee2cu: goto label_3eee2c;
        case 0x3eee30u: goto label_3eee30;
        case 0x3eee34u: goto label_3eee34;
        case 0x3eee38u: goto label_3eee38;
        case 0x3eee3cu: goto label_3eee3c;
        case 0x3eee40u: goto label_3eee40;
        case 0x3eee44u: goto label_3eee44;
        case 0x3eee48u: goto label_3eee48;
        case 0x3eee4cu: goto label_3eee4c;
        case 0x3eee50u: goto label_3eee50;
        case 0x3eee54u: goto label_3eee54;
        case 0x3eee58u: goto label_3eee58;
        case 0x3eee5cu: goto label_3eee5c;
        case 0x3eee60u: goto label_3eee60;
        case 0x3eee64u: goto label_3eee64;
        case 0x3eee68u: goto label_3eee68;
        case 0x3eee6cu: goto label_3eee6c;
        case 0x3eee70u: goto label_3eee70;
        case 0x3eee74u: goto label_3eee74;
        case 0x3eee78u: goto label_3eee78;
        case 0x3eee7cu: goto label_3eee7c;
        default: break;
    }

    ctx->pc = 0x3eeb10u;

label_3eeb10:
    // 0x3eeb10: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x3eeb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_3eeb14:
    // 0x3eeb14: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3eeb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3eeb18:
    // 0x3eeb18: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3eeb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3eeb1c:
    // 0x3eeb1c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3eeb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3eeb20:
    // 0x3eeb20: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3eeb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3eeb24:
    // 0x3eeb24: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3eeb24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eeb28:
    // 0x3eeb28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3eeb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3eeb2c:
    // 0x3eeb2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3eeb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3eeb30:
    // 0x3eeb30: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3eeb30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3eeb34:
    // 0x3eeb34: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3eeb34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3eeb38:
    // 0x3eeb38: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x3eeb38u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3eeb3c:
    // 0x3eeb3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3eeb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3eeb40:
    // 0x3eeb40: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x3eeb40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3eeb44:
    // 0x3eeb44: 0xc0fbbf8  jal         func_3EEFE0
label_3eeb48:
    if (ctx->pc == 0x3EEB48u) {
        ctx->pc = 0x3EEB48u;
            // 0x3eeb48: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x3EEB4Cu;
        goto label_3eeb4c;
    }
    ctx->pc = 0x3EEB44u;
    SET_GPR_U32(ctx, 31, 0x3EEB4Cu);
    ctx->pc = 0x3EEB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EEB44u;
            // 0x3eeb48: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EEFE0u;
    if (runtime->hasFunction(0x3EEFE0u)) {
        auto targetFn = runtime->lookupFunction(0x3EEFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEB4Cu; }
        if (ctx->pc != 0x3EEB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EEFE0_0x3eefe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEB4Cu; }
        if (ctx->pc != 0x3EEB4Cu) { return; }
    }
    ctx->pc = 0x3EEB4Cu;
label_3eeb4c:
    // 0x3eeb4c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3eeb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eeb50:
    // 0x3eeb50: 0xc0fbba0  jal         func_3EEE80
label_3eeb54:
    if (ctx->pc == 0x3EEB54u) {
        ctx->pc = 0x3EEB54u;
            // 0x3eeb54: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3EEB58u;
        goto label_3eeb58;
    }
    ctx->pc = 0x3EEB50u;
    SET_GPR_U32(ctx, 31, 0x3EEB58u);
    ctx->pc = 0x3EEB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EEB50u;
            // 0x3eeb54: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EEE80u;
    if (runtime->hasFunction(0x3EEE80u)) {
        auto targetFn = runtime->lookupFunction(0x3EEE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEB58u; }
        if (ctx->pc != 0x3EEB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EEE80_0x3eee80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEB58u; }
        if (ctx->pc != 0x3EEB58u) { return; }
    }
    ctx->pc = 0x3EEB58u;
label_3eeb58:
    // 0x3eeb58: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3eeb58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_3eeb5c:
    // 0x3eeb5c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3eeb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3eeb60:
    // 0x3eeb60: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3eeb60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3eeb64:
    // 0x3eeb64: 0xc04cca0  jal         func_133280
label_3eeb68:
    if (ctx->pc == 0x3EEB68u) {
        ctx->pc = 0x3EEB68u;
            // 0x3eeb68: 0x24c6a260  addiu       $a2, $a2, -0x5DA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943328));
        ctx->pc = 0x3EEB6Cu;
        goto label_3eeb6c;
    }
    ctx->pc = 0x3EEB64u;
    SET_GPR_U32(ctx, 31, 0x3EEB6Cu);
    ctx->pc = 0x3EEB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EEB64u;
            // 0x3eeb68: 0x24c6a260  addiu       $a2, $a2, -0x5DA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEB6Cu; }
        if (ctx->pc != 0x3EEB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEB6Cu; }
        if (ctx->pc != 0x3EEB6Cu) { return; }
    }
    ctx->pc = 0x3EEB6Cu;
label_3eeb6c:
    // 0x3eeb6c: 0xc049514  jal         func_125450
label_3eeb70:
    if (ctx->pc == 0x3EEB70u) {
        ctx->pc = 0x3EEB70u;
            // 0x3eeb70: 0xc7ac0074  lwc1        $f12, 0x74($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x3EEB74u;
        goto label_3eeb74;
    }
    ctx->pc = 0x3EEB6Cu;
    SET_GPR_U32(ctx, 31, 0x3EEB74u);
    ctx->pc = 0x3EEB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EEB6Cu;
            // 0x3eeb70: 0xc7ac0074  lwc1        $f12, 0x74($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEB74u; }
        if (ctx->pc != 0x3EEB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEB74u; }
        if (ctx->pc != 0x3EEB74u) { return; }
    }
    ctx->pc = 0x3EEB74u;
label_3eeb74:
    // 0x3eeb74: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x3eeb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3eeb78:
    // 0x3eeb78: 0xc049514  jal         func_125450
label_3eeb7c:
    if (ctx->pc == 0x3EEB7Cu) {
        ctx->pc = 0x3EEB7Cu;
            // 0x3eeb7c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EEB80u;
        goto label_3eeb80;
    }
    ctx->pc = 0x3EEB78u;
    SET_GPR_U32(ctx, 31, 0x3EEB80u);
    ctx->pc = 0x3EEB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EEB78u;
            // 0x3eeb7c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEB80u; }
        if (ctx->pc != 0x3EEB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEB80u; }
        if (ctx->pc != 0x3EEB80u) { return; }
    }
    ctx->pc = 0x3EEB80u;
label_3eeb80:
    // 0x3eeb80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3eeb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3eeb84:
    // 0x3eeb84: 0xc0477f2  jal         func_11DFC8
label_3eeb88:
    if (ctx->pc == 0x3EEB88u) {
        ctx->pc = 0x3EEB88u;
            // 0x3eeb88: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EEB8Cu;
        goto label_3eeb8c;
    }
    ctx->pc = 0x3EEB84u;
    SET_GPR_U32(ctx, 31, 0x3EEB8Cu);
    ctx->pc = 0x3EEB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EEB84u;
            // 0x3eeb88: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DFC8u;
    if (runtime->hasFunction(0x11DFC8u)) {
        auto targetFn = runtime->lookupFunction(0x11DFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEB8Cu; }
        if (ctx->pc != 0x3EEB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DFC8_0x11dfc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEB8Cu; }
        if (ctx->pc != 0x3EEB8Cu) { return; }
    }
    ctx->pc = 0x3EEB8Cu;
label_3eeb8c:
    // 0x3eeb8c: 0x3c04404c  lui         $a0, 0x404C
    ctx->pc = 0x3eeb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16460 << 16));
label_3eeb90:
    // 0x3eeb90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3eeb90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3eeb94:
    // 0x3eeb94: 0x3484a5dc  ori         $a0, $a0, 0xA5DC
    ctx->pc = 0x3eeb94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)42460);
label_3eeb98:
    // 0x3eeb98: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x3eeb98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_3eeb9c:
    // 0x3eeb9c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x3eeb9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
label_3eeba0:
    // 0x3eeba0: 0xc04963e  jal         func_1258F8
label_3eeba4:
    if (ctx->pc == 0x3EEBA4u) {
        ctx->pc = 0x3EEBA4u;
            // 0x3eeba4: 0x622025  or          $a0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->pc = 0x3EEBA8u;
        goto label_3eeba8;
    }
    ctx->pc = 0x3EEBA0u;
    SET_GPR_U32(ctx, 31, 0x3EEBA8u);
    ctx->pc = 0x3EEBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EEBA0u;
            // 0x3eeba4: 0x622025  or          $a0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEBA8u; }
        if (ctx->pc != 0x3EEBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEBA8u; }
        if (ctx->pc != 0x3EEBA8u) { return; }
    }
    ctx->pc = 0x3EEBA8u;
label_3eeba8:
    // 0x3eeba8: 0x3c034056  lui         $v1, 0x4056
    ctx->pc = 0x3eeba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16470 << 16));
label_3eebac:
    // 0x3eebac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3eebacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3eebb0:
    // 0x3eebb0: 0x34628000  ori         $v0, $v1, 0x8000
    ctx->pc = 0x3eebb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_3eebb4:
    // 0x3eebb4: 0xc049622  jal         func_125888
label_3eebb8:
    if (ctx->pc == 0x3EEBB8u) {
        ctx->pc = 0x3EEBB8u;
            // 0x3eebb8: 0x2283c  dsll32      $a1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
        ctx->pc = 0x3EEBBCu;
        goto label_3eebbc;
    }
    ctx->pc = 0x3EEBB4u;
    SET_GPR_U32(ctx, 31, 0x3EEBBCu);
    ctx->pc = 0x3EEBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EEBB4u;
            // 0x3eebb8: 0x2283c  dsll32      $a1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEBBCu; }
        if (ctx->pc != 0x3EEBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEBBCu; }
        if (ctx->pc != 0x3EEBBCu) { return; }
    }
    ctx->pc = 0x3EEBBCu;
label_3eebbc:
    // 0x3eebbc: 0xc0497dc  jal         func_125F70
label_3eebc0:
    if (ctx->pc == 0x3EEBC0u) {
        ctx->pc = 0x3EEBC0u;
            // 0x3eebc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EEBC4u;
        goto label_3eebc4;
    }
    ctx->pc = 0x3EEBBCu;
    SET_GPR_U32(ctx, 31, 0x3EEBC4u);
    ctx->pc = 0x3EEBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EEBBCu;
            // 0x3eebc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEBC4u; }
        if (ctx->pc != 0x3EEBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEBC4u; }
        if (ctx->pc != 0x3EEBC4u) { return; }
    }
    ctx->pc = 0x3EEBC4u;
label_3eebc4:
    // 0x3eebc4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3eebc4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3eebc8:
    // 0x3eebc8: 0xc049514  jal         func_125450
label_3eebcc:
    if (ctx->pc == 0x3EEBCCu) {
        ctx->pc = 0x3EEBCCu;
            // 0x3eebcc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3EEBD0u;
        goto label_3eebd0;
    }
    ctx->pc = 0x3EEBC8u;
    SET_GPR_U32(ctx, 31, 0x3EEBD0u);
    ctx->pc = 0x3EEBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EEBC8u;
            // 0x3eebcc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEBD0u; }
        if (ctx->pc != 0x3EEBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEBD0u; }
        if (ctx->pc != 0x3EEBD0u) { return; }
    }
    ctx->pc = 0x3EEBD0u;
label_3eebd0:
    // 0x3eebd0: 0xc0474b6  jal         func_11D2D8
label_3eebd4:
    if (ctx->pc == 0x3EEBD4u) {
        ctx->pc = 0x3EEBD4u;
            // 0x3eebd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EEBD8u;
        goto label_3eebd8;
    }
    ctx->pc = 0x3EEBD0u;
    SET_GPR_U32(ctx, 31, 0x3EEBD8u);
    ctx->pc = 0x3EEBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EEBD0u;
            // 0x3eebd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEBD8u; }
        if (ctx->pc != 0x3EEBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEBD8u; }
        if (ctx->pc != 0x3EEBD8u) { return; }
    }
    ctx->pc = 0x3EEBD8u;
label_3eebd8:
    // 0x3eebd8: 0xc0497dc  jal         func_125F70
label_3eebdc:
    if (ctx->pc == 0x3EEBDCu) {
        ctx->pc = 0x3EEBDCu;
            // 0x3eebdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EEBE0u;
        goto label_3eebe0;
    }
    ctx->pc = 0x3EEBD8u;
    SET_GPR_U32(ctx, 31, 0x3EEBE0u);
    ctx->pc = 0x3EEBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EEBD8u;
            // 0x3eebdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEBE0u; }
        if (ctx->pc != 0x3EEBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEBE0u; }
        if (ctx->pc != 0x3EEBE0u) { return; }
    }
    ctx->pc = 0x3EEBE0u;
label_3eebe0:
    // 0x3eebe0: 0x9264001c  lbu         $a0, 0x1C($s3)
    ctx->pc = 0x3eebe0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
label_3eebe4:
    // 0x3eebe4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3eebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eebe8:
    // 0x3eebe8: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x3eebe8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3eebec:
    // 0x3eebec: 0x5020004a  beql        $at, $zero, . + 4 + (0x4A << 2)
label_3eebf0:
    if (ctx->pc == 0x3EEBF0u) {
        ctx->pc = 0x3EEBF0u;
            // 0x3eebf0: 0x10863c  dsll32      $s0, $s0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 24));
        ctx->pc = 0x3EEBF4u;
        goto label_3eebf4;
    }
    ctx->pc = 0x3EEBECu;
    {
        const bool branch_taken_0x3eebec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eebec) {
            ctx->pc = 0x3EEBF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EEBECu;
            // 0x3eebf0: 0x10863c  dsll32      $s0, $s0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EED18u;
            goto label_3eed18;
        }
    }
    ctx->pc = 0x3EEBF4u;
label_3eebf4:
    // 0x3eebf4: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x3eebf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3eebf8:
    // 0x3eebf8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3eebf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3eebfc:
    // 0x3eebfc: 0x0  nop
    ctx->pc = 0x3eebfcu;
    // NOP
label_3eec00:
    // 0x3eec00: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x3eec00u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3eec04:
    // 0x3eec04: 0x45030023  bc1tl       . + 4 + (0x23 << 2)
label_3eec08:
    if (ctx->pc == 0x3EEC08u) {
        ctx->pc = 0x3EEC08u;
            // 0x3eec08: 0x10263c  dsll32      $a0, $s0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 24));
        ctx->pc = 0x3EEC0Cu;
        goto label_3eec0c;
    }
    ctx->pc = 0x3EEC04u;
    {
        const bool branch_taken_0x3eec04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3eec04) {
            ctx->pc = 0x3EEC08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EEC04u;
            // 0x3eec08: 0x10263c  dsll32      $a0, $s0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EEC94u;
            goto label_3eec94;
        }
    }
    ctx->pc = 0x3EEC0Cu;
label_3eec0c:
    // 0x3eec0c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3eec0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_3eec10:
    // 0x3eec10: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x3eec10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3eec14:
    // 0x3eec14: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_3eec18:
    if (ctx->pc == 0x3EEC18u) {
        ctx->pc = 0x3EEC1Cu;
        goto label_3eec1c;
    }
    ctx->pc = 0x3EEC14u;
    {
        const bool branch_taken_0x3eec14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3eec14) {
            ctx->pc = 0x3EEC90u;
            goto label_3eec90;
        }
    }
    ctx->pc = 0x3EEC1Cu;
label_3eec1c:
    // 0x3eec1c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3eec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_3eec20:
    // 0x3eec20: 0x9245004c  lbu         $a1, 0x4C($s2)
    ctx->pc = 0x3eec20u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 76)));
label_3eec24:
    // 0x3eec24: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3eec24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3eec28:
    // 0x3eec28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3eec28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eec2c:
    // 0x3eec2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3eec2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3eec30:
    // 0x3eec30: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3eec30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_3eec34:
    // 0x3eec34: 0x24670028  addiu       $a3, $v1, 0x28
    ctx->pc = 0x3eec34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_3eec38:
    // 0x3eec38: 0x3c033c8e  lui         $v1, 0x3C8E
    ctx->pc = 0x3eec38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15502 << 16));
label_3eec3c:
    // 0x3eec3c: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x3eec3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
label_3eec40:
    // 0x3eec40: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3eec40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3eec44:
    // 0x3eec44: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x3eec44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_3eec48:
    // 0x3eec48: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x3eec48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3eec4c:
    // 0x3eec4c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x3eec4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3eec50:
    // 0x3eec50: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x3eec50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_3eec54:
    // 0x3eec54: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3eec54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3eec58:
    // 0x3eec58: 0x46031042  mul.s       $f1, $f2, $f3
    ctx->pc = 0x3eec58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_3eec5c:
    // 0x3eec5c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3eec5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_3eec60:
    // 0x3eec60: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3eec60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3eec64:
    // 0x3eec64: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3eec64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3eec68:
    // 0x3eec68: 0xc5182b  sltu        $v1, $a2, $a1
    ctx->pc = 0x3eec68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3eec6c:
    // 0x3eec6c: 0xe4810088  swc1        $f1, 0x88($a0)
    ctx->pc = 0x3eec6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
label_3eec70:
    // 0x3eec70: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x3eec70u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
label_3eec74:
    // 0x3eec74: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3eec74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3eec78:
    // 0x3eec78: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_3eec7c:
    if (ctx->pc == 0x3EEC7Cu) {
        ctx->pc = 0x3EEC7Cu;
            // 0x3eec7c: 0xe4810084  swc1        $f1, 0x84($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
        ctx->pc = 0x3EEC80u;
        goto label_3eec80;
    }
    ctx->pc = 0x3EEC78u;
    {
        const bool branch_taken_0x3eec78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EEC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EEC78u;
            // 0x3eec7c: 0xe4810084  swc1        $f1, 0x84($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eec78) {
            ctx->pc = 0x3EEC44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3eec44;
        }
    }
    ctx->pc = 0x3EEC80u;
label_3eec80:
    // 0x3eec80: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x3eec80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_3eec84:
    // 0x3eec84: 0x9263001c  lbu         $v1, 0x1C($s3)
    ctx->pc = 0x3eec84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
label_3eec88:
    // 0x3eec88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3eec88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3eec8c:
    // 0x3eec8c: 0xa263001c  sb          $v1, 0x1C($s3)
    ctx->pc = 0x3eec8cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 28), (uint8_t)GPR_U32(ctx, 3));
label_3eec90:
    // 0x3eec90: 0x10263c  dsll32      $a0, $s0, 24
    ctx->pc = 0x3eec90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 24));
label_3eec94:
    // 0x3eec94: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x3eec94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_3eec98:
    // 0x3eec98: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x3eec98u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_3eec9c:
    // 0x3eec9c: 0x1483001d  bne         $a0, $v1, . + 4 + (0x1D << 2)
label_3eeca0:
    if (ctx->pc == 0x3EECA0u) {
        ctx->pc = 0x3EECA4u;
        goto label_3eeca4;
    }
    ctx->pc = 0x3EEC9Cu;
    {
        const bool branch_taken_0x3eec9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3eec9c) {
            ctx->pc = 0x3EED14u;
            goto label_3eed14;
        }
    }
    ctx->pc = 0x3EECA4u;
label_3eeca4:
    // 0x3eeca4: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x3eeca4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3eeca8:
    // 0x3eeca8: 0x0  nop
    ctx->pc = 0x3eeca8u;
    // NOP
label_3eecac:
    // 0x3eecac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3eecacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3eecb0:
    // 0x3eecb0: 0x4601a082  mul.s       $f2, $f20, $f1
    ctx->pc = 0x3eecb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_3eecb4:
    // 0x3eecb4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3eecb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3eecb8:
    // 0x3eecb8: 0x0  nop
    ctx->pc = 0x3eecb8u;
    // NOP
label_3eecbc:
    // 0x3eecbc: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3eecbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3eecc0:
    // 0x3eecc0: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_3eecc4:
    if (ctx->pc == 0x3EECC4u) {
        ctx->pc = 0x3EECC8u;
        goto label_3eecc8;
    }
    ctx->pc = 0x3EECC0u;
    {
        const bool branch_taken_0x3eecc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3eecc0) {
            ctx->pc = 0x3EED14u;
            goto label_3eed14;
        }
    }
    ctx->pc = 0x3EECC8u;
label_3eecc8:
    // 0x3eecc8: 0x9263001c  lbu         $v1, 0x1C($s3)
    ctx->pc = 0x3eecc8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
label_3eeccc:
    // 0x3eeccc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3eecccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3eecd0:
    // 0x3eecd0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3eecd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_3eecd4:
    // 0x3eecd4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3eecd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3eecd8:
    // 0x3eecd8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3eecd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3eecdc:
    // 0x3eecdc: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_3eece0:
    if (ctx->pc == 0x3EECE0u) {
        ctx->pc = 0x3EECE0u;
            // 0x3eece0: 0xc4630018  lwc1        $f3, 0x18($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x3EECE4u;
        goto label_3eece4;
    }
    ctx->pc = 0x3EECDCu;
    {
        const bool branch_taken_0x3eecdc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EECE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EECDCu;
            // 0x3eece0: 0xc4630018  lwc1        $f3, 0x18($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eecdc) {
            ctx->pc = 0x3EED14u;
            goto label_3eed14;
        }
    }
    ctx->pc = 0x3EECE4u;
label_3eece4:
    // 0x3eece4: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x3eece4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_3eece8:
    // 0x3eece8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3eece8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3eecec:
    // 0x3eecec: 0x3c033c8e  lui         $v1, 0x3C8E
    ctx->pc = 0x3eececu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15502 << 16));
label_3eecf0:
    // 0x3eecf0: 0x3464fa35  ori         $a0, $v1, 0xFA35
    ctx->pc = 0x3eecf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
label_3eecf4:
    // 0x3eecf4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3eecf4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3eecf8:
    // 0x3eecf8: 0x0  nop
    ctx->pc = 0x3eecf8u;
    // NOP
label_3eecfc:
    // 0x3eecfc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3eecfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_3eed00:
    // 0x3eed00: 0xe6740004  swc1        $f20, 0x4($s3)
    ctx->pc = 0x3eed00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_3eed04:
    // 0x3eed04: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x3eed04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_3eed08:
    // 0x3eed08: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3eed08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3eed0c:
    // 0x3eed0c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x3eed0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3eed10:
    // 0x3eed10: 0xe4610158  swc1        $f1, 0x158($v1)
    ctx->pc = 0x3eed10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 344), bits); }
label_3eed14:
    // 0x3eed14: 0x10863c  dsll32      $s0, $s0, 24
    ctx->pc = 0x3eed14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 24));
label_3eed18:
    // 0x3eed18: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x3eed18u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
label_3eed1c:
    // 0x3eed1c: 0x52000050  beql        $s0, $zero, . + 4 + (0x50 << 2)
label_3eed20:
    if (ctx->pc == 0x3EED20u) {
        ctx->pc = 0x3EED20u;
            // 0x3eed20: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x3EED24u;
        goto label_3eed24;
    }
    ctx->pc = 0x3EED1Cu;
    {
        const bool branch_taken_0x3eed1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eed1c) {
            ctx->pc = 0x3EED20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EED1Cu;
            // 0x3eed20: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EEE60u;
            goto label_3eee60;
        }
    }
    ctx->pc = 0x3EED24u;
label_3eed24:
    // 0x3eed24: 0x3c034265  lui         $v1, 0x4265
    ctx->pc = 0x3eed24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16997 << 16));
label_3eed28:
    // 0x3eed28: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x3eed28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_3eed2c:
    // 0x3eed2c: 0x34632ee1  ori         $v1, $v1, 0x2EE1
    ctx->pc = 0x3eed2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12001);
label_3eed30:
    // 0x3eed30: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3eed30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3eed34:
    // 0x3eed34: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3eed34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3eed38:
    // 0x3eed38: 0xc4620088  lwc1        $f2, 0x88($v1)
    ctx->pc = 0x3eed38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3eed3c:
    // 0x3eed3c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3eed3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3eed40:
    // 0x3eed40: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3eed40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3eed44:
    // 0x3eed44: 0x45000045  bc1f        . + 4 + (0x45 << 2)
label_3eed48:
    if (ctx->pc == 0x3EED48u) {
        ctx->pc = 0x3EED4Cu;
        goto label_3eed4c;
    }
    ctx->pc = 0x3EED44u;
    {
        const bool branch_taken_0x3eed44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3eed44) {
            ctx->pc = 0x3EEE5Cu;
            goto label_3eee5c;
        }
    }
    ctx->pc = 0x3EED4Cu;
label_3eed4c:
    // 0x3eed4c: 0x2665000c  addiu       $a1, $s3, 0xC
    ctx->pc = 0x3eed4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_3eed50:
    // 0x3eed50: 0xc04f278  jal         func_13C9E0
label_3eed54:
    if (ctx->pc == 0x3EED54u) {
        ctx->pc = 0x3EED54u;
            // 0x3eed54: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3EED58u;
        goto label_3eed58;
    }
    ctx->pc = 0x3EED50u;
    SET_GPR_U32(ctx, 31, 0x3EED58u);
    ctx->pc = 0x3EED54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EED50u;
            // 0x3eed54: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EED58u; }
        if (ctx->pc != 0x3EED58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EED58u; }
        if (ctx->pc != 0x3EED58u) { return; }
    }
    ctx->pc = 0x3EED58u;
label_3eed58:
    // 0x3eed58: 0x101823  negu        $v1, $s0
    ctx->pc = 0x3eed58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_3eed5c:
    // 0x3eed5c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3eed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_3eed60:
    // 0x3eed60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3eed60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3eed64:
    // 0x3eed64: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x3eed64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_3eed68:
    // 0x3eed68: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3eed68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3eed6c:
    // 0x3eed6c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x3eed6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3eed70:
    // 0x3eed70: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x3eed70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3eed74:
    // 0x3eed74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3eed74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3eed78:
    // 0x3eed78: 0x0  nop
    ctx->pc = 0x3eed78u;
    // NOP
label_3eed7c:
    // 0x3eed7c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3eed7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3eed80:
    // 0x3eed80: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3eed80u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_3eed84:
    // 0x3eed84: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x3eed84u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
label_3eed88:
    // 0x3eed88: 0x0  nop
    ctx->pc = 0x3eed88u;
    // NOP
label_3eed8c:
    // 0x3eed8c: 0x0  nop
    ctx->pc = 0x3eed8cu;
    // NOP
label_3eed90:
    // 0x3eed90: 0xc04cbd8  jal         func_132F60
label_3eed94:
    if (ctx->pc == 0x3EED94u) {
        ctx->pc = 0x3EED98u;
        goto label_3eed98;
    }
    ctx->pc = 0x3EED90u;
    SET_GPR_U32(ctx, 31, 0x3EED98u);
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EED98u; }
        if (ctx->pc != 0x3EED98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EED98u; }
        if (ctx->pc != 0x3EED98u) { return; }
    }
    ctx->pc = 0x3EED98u;
label_3eed98:
    // 0x3eed98: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x3eed98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_3eed9c:
    // 0x3eed9c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x3eed9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3eeda0:
    // 0x3eeda0: 0xc04cca0  jal         func_133280
label_3eeda4:
    if (ctx->pc == 0x3EEDA4u) {
        ctx->pc = 0x3EEDA4u;
            // 0x3eeda4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EEDA8u;
        goto label_3eeda8;
    }
    ctx->pc = 0x3EEDA0u;
    SET_GPR_U32(ctx, 31, 0x3EEDA8u);
    ctx->pc = 0x3EEDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EEDA0u;
            // 0x3eeda4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEDA8u; }
        if (ctx->pc != 0x3EEDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEDA8u; }
        if (ctx->pc != 0x3EEDA8u) { return; }
    }
    ctx->pc = 0x3EEDA8u;
label_3eeda8:
    // 0x3eeda8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3eeda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3eedac:
    // 0x3eedac: 0x9244004d  lbu         $a0, 0x4D($s2)
    ctx->pc = 0x3eedacu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 77)));
label_3eedb0:
    // 0x3eedb0: 0x8c50e3e0  lw          $s0, -0x1C20($v0)
    ctx->pc = 0x3eedb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3eedb4:
    // 0x3eedb4: 0xc7a20110  lwc1        $f2, 0x110($sp)
    ctx->pc = 0x3eedb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3eedb8:
    // 0x3eedb8: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x3eedb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_3eedbc:
    // 0x3eedbc: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x3eedbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3eedc0:
    // 0x3eedc0: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x3eedc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3eedc4:
    // 0x3eedc4: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x3eedc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3eedc8:
    // 0x3eedc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3eedc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3eedcc:
    // 0x3eedcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3eedccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3eedd0:
    // 0x3eedd0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3eedd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3eedd4:
    // 0x3eedd4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x3eedd4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eedd8:
    // 0x3eedd8: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x3eedd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_3eeddc:
    // 0x3eeddc: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x3eeddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_3eede0:
    // 0x3eede0: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x3eede0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_3eede4:
    // 0x3eede4: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x3eede4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_3eede8:
    // 0x3eede8: 0xc6140020  lwc1        $f20, 0x20($s0)
    ctx->pc = 0x3eede8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3eedec:
    // 0x3eedec: 0xc089638  jal         func_2258E0
label_3eedf0:
    if (ctx->pc == 0x3EEDF0u) {
        ctx->pc = 0x3EEDF0u;
            // 0x3eedf0: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->pc = 0x3EEDF4u;
        goto label_3eedf4;
    }
    ctx->pc = 0x3EEDECu;
    SET_GPR_U32(ctx, 31, 0x3EEDF4u);
    ctx->pc = 0x3EEDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EEDECu;
            // 0x3eedf0: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2258E0u;
    if (runtime->hasFunction(0x2258E0u)) {
        auto targetFn = runtime->lookupFunction(0x2258E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEDF4u; }
        if (ctx->pc != 0x3EEDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002258E0_0x2258e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEDF4u; }
        if (ctx->pc != 0x3EEDF4u) { return; }
    }
    ctx->pc = 0x3EEDF4u;
label_3eedf4:
    // 0x3eedf4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3eedf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3eedf8:
    // 0x3eedf8: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3eedf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3eedfc:
    // 0x3eedfc: 0x46140102  mul.s       $f4, $f0, $f20
    ctx->pc = 0x3eedfcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3eee00:
    // 0x3eee00: 0xc4450018  lwc1        $f5, 0x18($v0)
    ctx->pc = 0x3eee00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3eee04:
    // 0x3eee04: 0xc7a300c0  lwc1        $f3, 0xC0($sp)
    ctx->pc = 0x3eee04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3eee08:
    // 0x3eee08: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x3eee08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3eee0c:
    // 0x3eee0c: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x3eee0cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_3eee10:
    // 0x3eee10: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x3eee10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3eee14:
    // 0x3eee14: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x3eee14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3eee18:
    // 0x3eee18: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x3eee18u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_3eee1c:
    // 0x3eee1c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3eee1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_3eee20:
    // 0x3eee20: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3eee20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_3eee24:
    // 0x3eee24: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3eee24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_3eee28:
    // 0x3eee28: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x3eee28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_3eee2c:
    // 0x3eee2c: 0xe7a200c4  swc1        $f2, 0xC4($sp)
    ctx->pc = 0x3eee2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_3eee30:
    // 0x3eee30: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x3eee30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_3eee34:
    // 0x3eee34: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x3eee34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_3eee38:
    // 0x3eee38: 0xc6140018  lwc1        $f20, 0x18($s0)
    ctx->pc = 0x3eee38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3eee3c:
    // 0x3eee3c: 0xc088b74  jal         func_222DD0
label_3eee40:
    if (ctx->pc == 0x3EEE40u) {
        ctx->pc = 0x3EEE40u;
            // 0x3eee40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EEE44u;
        goto label_3eee44;
    }
    ctx->pc = 0x3EEE3Cu;
    SET_GPR_U32(ctx, 31, 0x3EEE44u);
    ctx->pc = 0x3EEE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EEE3Cu;
            // 0x3eee40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEE44u; }
        if (ctx->pc != 0x3EEE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EEE44u; }
        if (ctx->pc != 0x3EEE44u) { return; }
    }
    ctx->pc = 0x3EEE44u;
label_3eee44:
    // 0x3eee44: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x3eee44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_3eee48:
    // 0x3eee48: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3eee48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3eee4c:
    // 0x3eee4c: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x3eee4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_3eee50:
    // 0x3eee50: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x3eee50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_3eee54:
    // 0x3eee54: 0x320f809  jalr        $t9
label_3eee58:
    if (ctx->pc == 0x3EEE58u) {
        ctx->pc = 0x3EEE58u;
            // 0x3eee58: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3EEE5Cu;
        goto label_3eee5c;
    }
    ctx->pc = 0x3EEE54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3EEE5Cu);
        ctx->pc = 0x3EEE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EEE54u;
            // 0x3eee58: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3EEE5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3EEE5Cu; }
            if (ctx->pc != 0x3EEE5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3EEE5Cu;
label_3eee5c:
    // 0x3eee5c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3eee5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3eee60:
    // 0x3eee60: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3eee60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3eee64:
    // 0x3eee64: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3eee64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3eee68:
    // 0x3eee68: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3eee68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3eee6c:
    // 0x3eee6c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3eee6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3eee70:
    // 0x3eee70: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3eee70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3eee74:
    // 0x3eee74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3eee74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3eee78:
    // 0x3eee78: 0x3e00008  jr          $ra
label_3eee7c:
    if (ctx->pc == 0x3EEE7Cu) {
        ctx->pc = 0x3EEE7Cu;
            // 0x3eee7c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x3EEE80u;
        goto label_fallthrough_0x3eee78;
    }
    ctx->pc = 0x3EEE78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EEE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EEE78u;
            // 0x3eee7c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3eee78:
    ctx->pc = 0x3EEE80u;
}
