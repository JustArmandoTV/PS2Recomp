#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051D120
// Address: 0x51d120 - 0x51d3d0
void sub_0051D120_0x51d120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051D120_0x51d120");
#endif

    switch (ctx->pc) {
        case 0x51d120u: goto label_51d120;
        case 0x51d124u: goto label_51d124;
        case 0x51d128u: goto label_51d128;
        case 0x51d12cu: goto label_51d12c;
        case 0x51d130u: goto label_51d130;
        case 0x51d134u: goto label_51d134;
        case 0x51d138u: goto label_51d138;
        case 0x51d13cu: goto label_51d13c;
        case 0x51d140u: goto label_51d140;
        case 0x51d144u: goto label_51d144;
        case 0x51d148u: goto label_51d148;
        case 0x51d14cu: goto label_51d14c;
        case 0x51d150u: goto label_51d150;
        case 0x51d154u: goto label_51d154;
        case 0x51d158u: goto label_51d158;
        case 0x51d15cu: goto label_51d15c;
        case 0x51d160u: goto label_51d160;
        case 0x51d164u: goto label_51d164;
        case 0x51d168u: goto label_51d168;
        case 0x51d16cu: goto label_51d16c;
        case 0x51d170u: goto label_51d170;
        case 0x51d174u: goto label_51d174;
        case 0x51d178u: goto label_51d178;
        case 0x51d17cu: goto label_51d17c;
        case 0x51d180u: goto label_51d180;
        case 0x51d184u: goto label_51d184;
        case 0x51d188u: goto label_51d188;
        case 0x51d18cu: goto label_51d18c;
        case 0x51d190u: goto label_51d190;
        case 0x51d194u: goto label_51d194;
        case 0x51d198u: goto label_51d198;
        case 0x51d19cu: goto label_51d19c;
        case 0x51d1a0u: goto label_51d1a0;
        case 0x51d1a4u: goto label_51d1a4;
        case 0x51d1a8u: goto label_51d1a8;
        case 0x51d1acu: goto label_51d1ac;
        case 0x51d1b0u: goto label_51d1b0;
        case 0x51d1b4u: goto label_51d1b4;
        case 0x51d1b8u: goto label_51d1b8;
        case 0x51d1bcu: goto label_51d1bc;
        case 0x51d1c0u: goto label_51d1c0;
        case 0x51d1c4u: goto label_51d1c4;
        case 0x51d1c8u: goto label_51d1c8;
        case 0x51d1ccu: goto label_51d1cc;
        case 0x51d1d0u: goto label_51d1d0;
        case 0x51d1d4u: goto label_51d1d4;
        case 0x51d1d8u: goto label_51d1d8;
        case 0x51d1dcu: goto label_51d1dc;
        case 0x51d1e0u: goto label_51d1e0;
        case 0x51d1e4u: goto label_51d1e4;
        case 0x51d1e8u: goto label_51d1e8;
        case 0x51d1ecu: goto label_51d1ec;
        case 0x51d1f0u: goto label_51d1f0;
        case 0x51d1f4u: goto label_51d1f4;
        case 0x51d1f8u: goto label_51d1f8;
        case 0x51d1fcu: goto label_51d1fc;
        case 0x51d200u: goto label_51d200;
        case 0x51d204u: goto label_51d204;
        case 0x51d208u: goto label_51d208;
        case 0x51d20cu: goto label_51d20c;
        case 0x51d210u: goto label_51d210;
        case 0x51d214u: goto label_51d214;
        case 0x51d218u: goto label_51d218;
        case 0x51d21cu: goto label_51d21c;
        case 0x51d220u: goto label_51d220;
        case 0x51d224u: goto label_51d224;
        case 0x51d228u: goto label_51d228;
        case 0x51d22cu: goto label_51d22c;
        case 0x51d230u: goto label_51d230;
        case 0x51d234u: goto label_51d234;
        case 0x51d238u: goto label_51d238;
        case 0x51d23cu: goto label_51d23c;
        case 0x51d240u: goto label_51d240;
        case 0x51d244u: goto label_51d244;
        case 0x51d248u: goto label_51d248;
        case 0x51d24cu: goto label_51d24c;
        case 0x51d250u: goto label_51d250;
        case 0x51d254u: goto label_51d254;
        case 0x51d258u: goto label_51d258;
        case 0x51d25cu: goto label_51d25c;
        case 0x51d260u: goto label_51d260;
        case 0x51d264u: goto label_51d264;
        case 0x51d268u: goto label_51d268;
        case 0x51d26cu: goto label_51d26c;
        case 0x51d270u: goto label_51d270;
        case 0x51d274u: goto label_51d274;
        case 0x51d278u: goto label_51d278;
        case 0x51d27cu: goto label_51d27c;
        case 0x51d280u: goto label_51d280;
        case 0x51d284u: goto label_51d284;
        case 0x51d288u: goto label_51d288;
        case 0x51d28cu: goto label_51d28c;
        case 0x51d290u: goto label_51d290;
        case 0x51d294u: goto label_51d294;
        case 0x51d298u: goto label_51d298;
        case 0x51d29cu: goto label_51d29c;
        case 0x51d2a0u: goto label_51d2a0;
        case 0x51d2a4u: goto label_51d2a4;
        case 0x51d2a8u: goto label_51d2a8;
        case 0x51d2acu: goto label_51d2ac;
        case 0x51d2b0u: goto label_51d2b0;
        case 0x51d2b4u: goto label_51d2b4;
        case 0x51d2b8u: goto label_51d2b8;
        case 0x51d2bcu: goto label_51d2bc;
        case 0x51d2c0u: goto label_51d2c0;
        case 0x51d2c4u: goto label_51d2c4;
        case 0x51d2c8u: goto label_51d2c8;
        case 0x51d2ccu: goto label_51d2cc;
        case 0x51d2d0u: goto label_51d2d0;
        case 0x51d2d4u: goto label_51d2d4;
        case 0x51d2d8u: goto label_51d2d8;
        case 0x51d2dcu: goto label_51d2dc;
        case 0x51d2e0u: goto label_51d2e0;
        case 0x51d2e4u: goto label_51d2e4;
        case 0x51d2e8u: goto label_51d2e8;
        case 0x51d2ecu: goto label_51d2ec;
        case 0x51d2f0u: goto label_51d2f0;
        case 0x51d2f4u: goto label_51d2f4;
        case 0x51d2f8u: goto label_51d2f8;
        case 0x51d2fcu: goto label_51d2fc;
        case 0x51d300u: goto label_51d300;
        case 0x51d304u: goto label_51d304;
        case 0x51d308u: goto label_51d308;
        case 0x51d30cu: goto label_51d30c;
        case 0x51d310u: goto label_51d310;
        case 0x51d314u: goto label_51d314;
        case 0x51d318u: goto label_51d318;
        case 0x51d31cu: goto label_51d31c;
        case 0x51d320u: goto label_51d320;
        case 0x51d324u: goto label_51d324;
        case 0x51d328u: goto label_51d328;
        case 0x51d32cu: goto label_51d32c;
        case 0x51d330u: goto label_51d330;
        case 0x51d334u: goto label_51d334;
        case 0x51d338u: goto label_51d338;
        case 0x51d33cu: goto label_51d33c;
        case 0x51d340u: goto label_51d340;
        case 0x51d344u: goto label_51d344;
        case 0x51d348u: goto label_51d348;
        case 0x51d34cu: goto label_51d34c;
        case 0x51d350u: goto label_51d350;
        case 0x51d354u: goto label_51d354;
        case 0x51d358u: goto label_51d358;
        case 0x51d35cu: goto label_51d35c;
        case 0x51d360u: goto label_51d360;
        case 0x51d364u: goto label_51d364;
        case 0x51d368u: goto label_51d368;
        case 0x51d36cu: goto label_51d36c;
        case 0x51d370u: goto label_51d370;
        case 0x51d374u: goto label_51d374;
        case 0x51d378u: goto label_51d378;
        case 0x51d37cu: goto label_51d37c;
        case 0x51d380u: goto label_51d380;
        case 0x51d384u: goto label_51d384;
        case 0x51d388u: goto label_51d388;
        case 0x51d38cu: goto label_51d38c;
        case 0x51d390u: goto label_51d390;
        case 0x51d394u: goto label_51d394;
        case 0x51d398u: goto label_51d398;
        case 0x51d39cu: goto label_51d39c;
        case 0x51d3a0u: goto label_51d3a0;
        case 0x51d3a4u: goto label_51d3a4;
        case 0x51d3a8u: goto label_51d3a8;
        case 0x51d3acu: goto label_51d3ac;
        case 0x51d3b0u: goto label_51d3b0;
        case 0x51d3b4u: goto label_51d3b4;
        case 0x51d3b8u: goto label_51d3b8;
        case 0x51d3bcu: goto label_51d3bc;
        case 0x51d3c0u: goto label_51d3c0;
        case 0x51d3c4u: goto label_51d3c4;
        case 0x51d3c8u: goto label_51d3c8;
        case 0x51d3ccu: goto label_51d3cc;
        default: break;
    }

    ctx->pc = 0x51d120u;

label_51d120:
    // 0x51d120: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x51d120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_51d124:
    // 0x51d124: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x51d124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_51d128:
    // 0x51d128: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x51d128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_51d12c:
    // 0x51d12c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x51d12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_51d130:
    // 0x51d130: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x51d130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_51d134:
    // 0x51d134: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x51d134u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_51d138:
    // 0x51d138: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x51d138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_51d13c:
    // 0x51d13c: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x51d13cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_51d140:
    // 0x51d140: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x51d140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_51d144:
    // 0x51d144: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x51d144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_51d148:
    // 0x51d148: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x51d148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_51d14c:
    // 0x51d14c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x51d14cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_51d150:
    // 0x51d150: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x51d150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_51d154:
    // 0x51d154: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x51d154u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_51d158:
    // 0x51d158: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51d158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_51d15c:
    // 0x51d15c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x51d15cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_51d160:
    // 0x51d160: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51d160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_51d164:
    // 0x51d164: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x51d164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_51d168:
    // 0x51d168: 0x8c840060  lw          $a0, 0x60($a0)
    ctx->pc = 0x51d168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_51d16c:
    // 0x51d16c: 0x1483008a  bne         $a0, $v1, . + 4 + (0x8A << 2)
label_51d170:
    if (ctx->pc == 0x51D170u) {
        ctx->pc = 0x51D170u;
            // 0x51d170: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51D174u;
        goto label_51d174;
    }
    ctx->pc = 0x51D16Cu;
    {
        const bool branch_taken_0x51d16c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x51D170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51D16Cu;
            // 0x51d170: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51d16c) {
            ctx->pc = 0x51D398u;
            goto label_51d398;
        }
    }
    ctx->pc = 0x51D174u;
label_51d174:
    // 0x51d174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x51d174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51d178:
    // 0x51d178: 0xc04f278  jal         func_13C9E0
label_51d17c:
    if (ctx->pc == 0x51D17Cu) {
        ctx->pc = 0x51D17Cu;
            // 0x51d17c: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->pc = 0x51D180u;
        goto label_51d180;
    }
    ctx->pc = 0x51D178u;
    SET_GPR_U32(ctx, 31, 0x51D180u);
    ctx->pc = 0x51D17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D178u;
            // 0x51d17c: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D180u; }
        if (ctx->pc != 0x51D180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D180u; }
        if (ctx->pc != 0x51D180u) { return; }
    }
    ctx->pc = 0x51D180u;
label_51d180:
    // 0x51d180: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x51d180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_51d184:
    // 0x51d184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x51d184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51d188:
    // 0x51d188: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x51d188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_51d18c:
    // 0x51d18c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x51d18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51d190:
    // 0x51d190: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x51d190u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_51d194:
    // 0x51d194: 0xc04ce50  jal         func_133940
label_51d198:
    if (ctx->pc == 0x51D198u) {
        ctx->pc = 0x51D198u;
            // 0x51d198: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x51D19Cu;
        goto label_51d19c;
    }
    ctx->pc = 0x51D194u;
    SET_GPR_U32(ctx, 31, 0x51D19Cu);
    ctx->pc = 0x51D198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D194u;
            // 0x51d198: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D19Cu; }
        if (ctx->pc != 0x51D19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D19Cu; }
        if (ctx->pc != 0x51D19Cu) { return; }
    }
    ctx->pc = 0x51D19Cu;
label_51d19c:
    // 0x51d19c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x51d19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51d1a0:
    // 0x51d1a0: 0xc04ce80  jal         func_133A00
label_51d1a4:
    if (ctx->pc == 0x51D1A4u) {
        ctx->pc = 0x51D1A4u;
            // 0x51d1a4: 0x268500b0  addiu       $a1, $s4, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
        ctx->pc = 0x51D1A8u;
        goto label_51d1a8;
    }
    ctx->pc = 0x51D1A0u;
    SET_GPR_U32(ctx, 31, 0x51D1A8u);
    ctx->pc = 0x51D1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D1A0u;
            // 0x51d1a4: 0x268500b0  addiu       $a1, $s4, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D1A8u; }
        if (ctx->pc != 0x51D1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D1A8u; }
        if (ctx->pc != 0x51D1A8u) { return; }
    }
    ctx->pc = 0x51D1A8u;
label_51d1a8:
    // 0x51d1a8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x51d1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_51d1ac:
    // 0x51d1ac: 0x9286004c  lbu         $a2, 0x4C($s4)
    ctx->pc = 0x51d1acu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 76)));
label_51d1b0:
    // 0x51d1b0: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x51d1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_51d1b4:
    // 0x51d1b4: 0x8e750020  lw          $s5, 0x20($s3)
    ctx->pc = 0x51d1b4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_51d1b8:
    // 0x51d1b8: 0xc07698c  jal         func_1DA630
label_51d1bc:
    if (ctx->pc == 0x51D1BCu) {
        ctx->pc = 0x51D1BCu;
            // 0x51d1bc: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51D1C0u;
        goto label_51d1c0;
    }
    ctx->pc = 0x51D1B8u;
    SET_GPR_U32(ctx, 31, 0x51D1C0u);
    ctx->pc = 0x51D1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D1B8u;
            // 0x51d1bc: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D1C0u; }
        if (ctx->pc != 0x51D1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D1C0u; }
        if (ctx->pc != 0x51D1C0u) { return; }
    }
    ctx->pc = 0x51D1C0u;
label_51d1c0:
    // 0x51d1c0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x51d1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_51d1c4:
    // 0x51d1c4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_51d1c8:
    if (ctx->pc == 0x51D1C8u) {
        ctx->pc = 0x51D1CCu;
        goto label_51d1cc;
    }
    ctx->pc = 0x51D1C4u;
    {
        const bool branch_taken_0x51d1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x51d1c4) {
            ctx->pc = 0x51D1D4u;
            goto label_51d1d4;
        }
    }
    ctx->pc = 0x51D1CCu;
label_51d1cc:
    // 0x51d1cc: 0x10000033  b           . + 4 + (0x33 << 2)
label_51d1d0:
    if (ctx->pc == 0x51D1D0u) {
        ctx->pc = 0x51D1D0u;
            // 0x51d1d0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x51D1D4u;
        goto label_51d1d4;
    }
    ctx->pc = 0x51D1CCu;
    {
        const bool branch_taken_0x51d1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51D1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51D1CCu;
            // 0x51d1d0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51d1cc) {
            ctx->pc = 0x51D29Cu;
            goto label_51d29c;
        }
    }
    ctx->pc = 0x51D1D4u;
label_51d1d4:
    // 0x51d1d4: 0xc0576f4  jal         func_15DBD0
label_51d1d8:
    if (ctx->pc == 0x51D1D8u) {
        ctx->pc = 0x51D1DCu;
        goto label_51d1dc;
    }
    ctx->pc = 0x51D1D4u;
    SET_GPR_U32(ctx, 31, 0x51D1DCu);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D1DCu; }
        if (ctx->pc != 0x51D1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D1DCu; }
        if (ctx->pc != 0x51D1DCu) { return; }
    }
    ctx->pc = 0x51D1DCu;
label_51d1dc:
    // 0x51d1dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x51d1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51d1e0:
    // 0x51d1e0: 0xc076984  jal         func_1DA610
label_51d1e4:
    if (ctx->pc == 0x51D1E4u) {
        ctx->pc = 0x51D1E4u;
            // 0x51d1e4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51D1E8u;
        goto label_51d1e8;
    }
    ctx->pc = 0x51D1E0u;
    SET_GPR_U32(ctx, 31, 0x51D1E8u);
    ctx->pc = 0x51D1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D1E0u;
            // 0x51d1e4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D1E8u; }
        if (ctx->pc != 0x51D1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D1E8u; }
        if (ctx->pc != 0x51D1E8u) { return; }
    }
    ctx->pc = 0x51D1E8u;
label_51d1e8:
    // 0x51d1e8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x51d1e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51d1ec:
    // 0x51d1ec: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x51d1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_51d1f0:
    // 0x51d1f0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x51d1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_51d1f4:
    // 0x51d1f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x51d1f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51d1f8:
    // 0x51d1f8: 0xc442ce80  lwc1        $f2, -0x3180($v0)
    ctx->pc = 0x51d1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_51d1fc:
    // 0x51d1fc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x51d1fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_51d200:
    // 0x51d200: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x51d200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_51d204:
    // 0x51d204: 0xc441ce88  lwc1        $f1, -0x3178($v0)
    ctx->pc = 0x51d204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_51d208:
    // 0x51d208: 0xe7a200e0  swc1        $f2, 0xE0($sp)
    ctx->pc = 0x51d208u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_51d20c:
    // 0x51d20c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x51d20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_51d210:
    // 0x51d210: 0xc440ce8c  lwc1        $f0, -0x3174($v0)
    ctx->pc = 0x51d210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_51d214:
    // 0x51d214: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x51d214u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_51d218:
    // 0x51d218: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x51d218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_51d21c:
    // 0x51d21c: 0x8c42ce84  lw          $v0, -0x317C($v0)
    ctx->pc = 0x51d21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954628)));
label_51d220:
    // 0x51d220: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x51d220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_51d224:
    // 0x51d224: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x51d224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
label_51d228:
    // 0x51d228: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x51d228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_51d22c:
    // 0x51d22c: 0xc04cca0  jal         func_133280
label_51d230:
    if (ctx->pc == 0x51D230u) {
        ctx->pc = 0x51D230u;
            // 0x51d230: 0xe7a000e4  swc1        $f0, 0xE4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
        ctx->pc = 0x51D234u;
        goto label_51d234;
    }
    ctx->pc = 0x51D22Cu;
    SET_GPR_U32(ctx, 31, 0x51D234u);
    ctx->pc = 0x51D230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D22Cu;
            // 0x51d230: 0xe7a000e4  swc1        $f0, 0xE4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D234u; }
        if (ctx->pc != 0x51D234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D234u; }
        if (ctx->pc != 0x51D234u) { return; }
    }
    ctx->pc = 0x51D234u;
label_51d234:
    // 0x51d234: 0xc076980  jal         func_1DA600
label_51d238:
    if (ctx->pc == 0x51D238u) {
        ctx->pc = 0x51D238u;
            // 0x51d238: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51D23Cu;
        goto label_51d23c;
    }
    ctx->pc = 0x51D234u;
    SET_GPR_U32(ctx, 31, 0x51D23Cu);
    ctx->pc = 0x51D238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D234u;
            // 0x51d238: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D23Cu; }
        if (ctx->pc != 0x51D23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D23Cu; }
        if (ctx->pc != 0x51D23Cu) { return; }
    }
    ctx->pc = 0x51D23Cu;
label_51d23c:
    // 0x51d23c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x51d23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_51d240:
    // 0x51d240: 0xc04cc34  jal         func_1330D0
label_51d244:
    if (ctx->pc == 0x51D244u) {
        ctx->pc = 0x51D244u;
            // 0x51d244: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51D248u;
        goto label_51d248;
    }
    ctx->pc = 0x51D240u;
    SET_GPR_U32(ctx, 31, 0x51D248u);
    ctx->pc = 0x51D244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D240u;
            // 0x51d244: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D248u; }
        if (ctx->pc != 0x51D248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D248u; }
        if (ctx->pc != 0x51D248u) { return; }
    }
    ctx->pc = 0x51D248u;
label_51d248:
    // 0x51d248: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x51d248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_51d24c:
    // 0x51d24c: 0xc461c478  lwc1        $f1, -0x3B88($v1)
    ctx->pc = 0x51d24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_51d250:
    // 0x51d250: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x51d250u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_51d254:
    // 0x51d254: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_51d258:
    if (ctx->pc == 0x51D258u) {
        ctx->pc = 0x51D258u;
            // 0x51d258: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51D25Cu;
        goto label_51d25c;
    }
    ctx->pc = 0x51D254u;
    {
        const bool branch_taken_0x51d254 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x51d254) {
            ctx->pc = 0x51D258u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51D254u;
            // 0x51d258: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51D264u;
            goto label_51d264;
        }
    }
    ctx->pc = 0x51D25Cu;
label_51d25c:
    // 0x51d25c: 0x1000000f  b           . + 4 + (0xF << 2)
label_51d260:
    if (ctx->pc == 0x51D260u) {
        ctx->pc = 0x51D260u;
            // 0x51d260: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x51D264u;
        goto label_51d264;
    }
    ctx->pc = 0x51D25Cu;
    {
        const bool branch_taken_0x51d25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51D260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51D25Cu;
            // 0x51d260: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51d25c) {
            ctx->pc = 0x51D29Cu;
            goto label_51d29c;
        }
    }
    ctx->pc = 0x51D264u;
label_51d264:
    // 0x51d264: 0xc07697c  jal         func_1DA5F0
label_51d268:
    if (ctx->pc == 0x51D268u) {
        ctx->pc = 0x51D26Cu;
        goto label_51d26c;
    }
    ctx->pc = 0x51D264u;
    SET_GPR_U32(ctx, 31, 0x51D26Cu);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D26Cu; }
        if (ctx->pc != 0x51D26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D26Cu; }
        if (ctx->pc != 0x51D26Cu) { return; }
    }
    ctx->pc = 0x51D26Cu;
label_51d26c:
    // 0x51d26c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x51d26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51d270:
    // 0x51d270: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x51d270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_51d274:
    // 0x51d274: 0xc04cd60  jal         func_133580
label_51d278:
    if (ctx->pc == 0x51D278u) {
        ctx->pc = 0x51D278u;
            // 0x51d278: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51D27Cu;
        goto label_51d27c;
    }
    ctx->pc = 0x51D274u;
    SET_GPR_U32(ctx, 31, 0x51D27Cu);
    ctx->pc = 0x51D278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D274u;
            // 0x51d278: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D27Cu; }
        if (ctx->pc != 0x51D27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D27Cu; }
        if (ctx->pc != 0x51D27Cu) { return; }
    }
    ctx->pc = 0x51D27Cu;
label_51d27c:
    // 0x51d27c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x51d27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_51d280:
    // 0x51d280: 0xc04c650  jal         func_131940
label_51d284:
    if (ctx->pc == 0x51D284u) {
        ctx->pc = 0x51D284u;
            // 0x51d284: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x51D288u;
        goto label_51d288;
    }
    ctx->pc = 0x51D280u;
    SET_GPR_U32(ctx, 31, 0x51D288u);
    ctx->pc = 0x51D284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D280u;
            // 0x51d284: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D288u; }
        if (ctx->pc != 0x51D288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D288u; }
        if (ctx->pc != 0x51D288u) { return; }
    }
    ctx->pc = 0x51D288u;
label_51d288:
    // 0x51d288: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x51d288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_51d28c:
    // 0x51d28c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x51d28cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_51d290:
    // 0x51d290: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x51d290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_51d294:
    // 0x51d294: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x51d294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_51d298:
    // 0x51d298: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x51d298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_51d29c:
    // 0x51d29c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x51d29cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_51d2a0:
    // 0x51d2a0: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
label_51d2a4:
    if (ctx->pc == 0x51D2A4u) {
        ctx->pc = 0x51D2A4u;
            // 0x51d2a4: 0xae830044  sw          $v1, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x51D2A8u;
        goto label_51d2a8;
    }
    ctx->pc = 0x51D2A0u;
    {
        const bool branch_taken_0x51d2a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x51D2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51D2A0u;
            // 0x51d2a4: 0xae830044  sw          $v1, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51d2a0) {
            ctx->pc = 0x51D344u;
            goto label_51d344;
        }
    }
    ctx->pc = 0x51D2A8u;
label_51d2a8:
    // 0x51d2a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x51d2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51d2ac:
    // 0x51d2ac: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x51d2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_51d2b0:
    // 0x51d2b0: 0xc04f278  jal         func_13C9E0
label_51d2b4:
    if (ctx->pc == 0x51D2B4u) {
        ctx->pc = 0x51D2B4u;
            // 0x51d2b4: 0x26750010  addiu       $s5, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x51D2B8u;
        goto label_51d2b8;
    }
    ctx->pc = 0x51D2B0u;
    SET_GPR_U32(ctx, 31, 0x51D2B8u);
    ctx->pc = 0x51D2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D2B0u;
            // 0x51d2b4: 0x26750010  addiu       $s5, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D2B8u; }
        if (ctx->pc != 0x51D2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D2B8u; }
        if (ctx->pc != 0x51D2B8u) { return; }
    }
    ctx->pc = 0x51D2B8u;
label_51d2b8:
    // 0x51d2b8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x51d2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_51d2bc:
    // 0x51d2bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x51d2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51d2c0:
    // 0x51d2c0: 0xc04ce80  jal         func_133A00
label_51d2c4:
    if (ctx->pc == 0x51D2C4u) {
        ctx->pc = 0x51D2C4u;
            // 0x51d2c4: 0x24a5c480  addiu       $a1, $a1, -0x3B80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952064));
        ctx->pc = 0x51D2C8u;
        goto label_51d2c8;
    }
    ctx->pc = 0x51D2C0u;
    SET_GPR_U32(ctx, 31, 0x51D2C8u);
    ctx->pc = 0x51D2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D2C0u;
            // 0x51d2c4: 0x24a5c480  addiu       $a1, $a1, -0x3B80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D2C8u; }
        if (ctx->pc != 0x51D2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D2C8u; }
        if (ctx->pc != 0x51D2C8u) { return; }
    }
    ctx->pc = 0x51D2C8u;
label_51d2c8:
    // 0x51d2c8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x51d2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_51d2cc:
    // 0x51d2cc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x51d2ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_51d2d0:
    // 0x51d2d0: 0xc04cd60  jal         func_133580
label_51d2d4:
    if (ctx->pc == 0x51D2D4u) {
        ctx->pc = 0x51D2D4u;
            // 0x51d2d4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51D2D8u;
        goto label_51d2d8;
    }
    ctx->pc = 0x51D2D0u;
    SET_GPR_U32(ctx, 31, 0x51D2D8u);
    ctx->pc = 0x51D2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D2D0u;
            // 0x51d2d4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D2D8u; }
        if (ctx->pc != 0x51D2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D2D8u; }
        if (ctx->pc != 0x51D2D8u) { return; }
    }
    ctx->pc = 0x51D2D8u;
label_51d2d8:
    // 0x51d2d8: 0xc04e738  jal         func_139CE0
label_51d2dc:
    if (ctx->pc == 0x51D2DCu) {
        ctx->pc = 0x51D2DCu;
            // 0x51d2dc: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->pc = 0x51D2E0u;
        goto label_51d2e0;
    }
    ctx->pc = 0x51D2D8u;
    SET_GPR_U32(ctx, 31, 0x51D2E0u);
    ctx->pc = 0x51D2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D2D8u;
            // 0x51d2dc: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D2E0u; }
        if (ctx->pc != 0x51D2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D2E0u; }
        if (ctx->pc != 0x51D2E0u) { return; }
    }
    ctx->pc = 0x51D2E0u;
label_51d2e0:
    // 0x51d2e0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x51d2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_51d2e4:
    // 0x51d2e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x51d2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_51d2e8:
    // 0x51d2e8: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x51d2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_51d2ec:
    // 0x51d2ec: 0xc04e4a4  jal         func_139290
label_51d2f0:
    if (ctx->pc == 0x51D2F0u) {
        ctx->pc = 0x51D2F0u;
            // 0x51d2f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51D2F4u;
        goto label_51d2f4;
    }
    ctx->pc = 0x51D2ECu;
    SET_GPR_U32(ctx, 31, 0x51D2F4u);
    ctx->pc = 0x51D2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D2ECu;
            // 0x51d2f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D2F4u; }
        if (ctx->pc != 0x51D2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D2F4u; }
        if (ctx->pc != 0x51D2F4u) { return; }
    }
    ctx->pc = 0x51D2F4u;
label_51d2f4:
    // 0x51d2f4: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x51d2f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_51d2f8:
    // 0x51d2f8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x51d2f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_51d2fc:
    // 0x51d2fc: 0x320f809  jalr        $t9
label_51d300:
    if (ctx->pc == 0x51D300u) {
        ctx->pc = 0x51D300u;
            // 0x51d300: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51D304u;
        goto label_51d304;
    }
    ctx->pc = 0x51D2FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51D304u);
        ctx->pc = 0x51D300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51D2FCu;
            // 0x51d300: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51D304u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51D304u; }
            if (ctx->pc != 0x51D304u) { return; }
        }
        }
    }
    ctx->pc = 0x51D304u;
label_51d304:
    // 0x51d304: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x51d304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_51d308:
    // 0x51d308: 0xc68c00ac  lwc1        $f12, 0xAC($s4)
    ctx->pc = 0x51d308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_51d30c:
    // 0x51d30c: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x51d30cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_51d310:
    // 0x51d310: 0x8ea70008  lw          $a3, 0x8($s5)
    ctx->pc = 0x51d310u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_51d314:
    // 0x51d314: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x51d314u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51d318:
    // 0x51d318: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x51d318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_51d31c:
    // 0x51d31c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x51d31cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_51d320:
    // 0x51d320: 0x27a800f0  addiu       $t0, $sp, 0xF0
    ctx->pc = 0x51d320u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_51d324:
    // 0x51d324: 0xc04cff4  jal         func_133FD0
label_51d328:
    if (ctx->pc == 0x51D328u) {
        ctx->pc = 0x51D328u;
            // 0x51d328: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->pc = 0x51D32Cu;
        goto label_51d32c;
    }
    ctx->pc = 0x51D324u;
    SET_GPR_U32(ctx, 31, 0x51D32Cu);
    ctx->pc = 0x51D328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D324u;
            // 0x51d328: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D32Cu; }
        if (ctx->pc != 0x51D32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D32Cu; }
        if (ctx->pc != 0x51D32Cu) { return; }
    }
    ctx->pc = 0x51D32Cu;
label_51d32c:
    // 0x51d32c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x51d32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_51d330:
    // 0x51d330: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x51d330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_51d334:
    // 0x51d334: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x51d334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_51d338:
    // 0x51d338: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x51d338u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_51d33c:
    // 0x51d33c: 0xc0538d8  jal         func_14E360
label_51d340:
    if (ctx->pc == 0x51D340u) {
        ctx->pc = 0x51D340u;
            // 0x51d340: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x51D344u;
        goto label_51d344;
    }
    ctx->pc = 0x51D33Cu;
    SET_GPR_U32(ctx, 31, 0x51D344u);
    ctx->pc = 0x51D340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D33Cu;
            // 0x51d340: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D344u; }
        if (ctx->pc != 0x51D344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D344u; }
        if (ctx->pc != 0x51D344u) { return; }
    }
    ctx->pc = 0x51D344u;
label_51d344:
    // 0x51d344: 0x8e960068  lw          $s6, 0x68($s4)
    ctx->pc = 0x51d344u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
label_51d348:
    // 0x51d348: 0x12c00013  beqz        $s6, . + 4 + (0x13 << 2)
label_51d34c:
    if (ctx->pc == 0x51D34Cu) {
        ctx->pc = 0x51D350u;
        goto label_51d350;
    }
    ctx->pc = 0x51D348u;
    {
        const bool branch_taken_0x51d348 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x51d348) {
            ctx->pc = 0x51D398u;
            goto label_51d398;
        }
    }
    ctx->pc = 0x51D350u;
label_51d350:
    // 0x51d350: 0x8e950078  lw          $s5, 0x78($s4)
    ctx->pc = 0x51d350u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
label_51d354:
    // 0x51d354: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x51d354u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_51d358:
    // 0x51d358: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x51d358u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_51d35c:
    // 0x51d35c: 0x320f809  jalr        $t9
label_51d360:
    if (ctx->pc == 0x51D360u) {
        ctx->pc = 0x51D360u;
            // 0x51d360: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51D364u;
        goto label_51d364;
    }
    ctx->pc = 0x51D35Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51D364u);
        ctx->pc = 0x51D360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51D35Cu;
            // 0x51d360: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51D364u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51D364u; }
            if (ctx->pc != 0x51D364u) { return; }
        }
        }
    }
    ctx->pc = 0x51D364u;
label_51d364:
    // 0x51d364: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x51d364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_51d368:
    // 0x51d368: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x51d368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_51d36c:
    // 0x51d36c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x51d36cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_51d370:
    // 0x51d370: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x51d370u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_51d374:
    // 0x51d374: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x51d374u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_51d378:
    // 0x51d378: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x51d378u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51d37c:
    // 0x51d37c: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x51d37cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_51d380:
    // 0x51d380: 0xc147820  jal         func_51E080
label_51d384:
    if (ctx->pc == 0x51D384u) {
        ctx->pc = 0x51D384u;
            // 0x51d384: 0x40582d  daddu       $t3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51D388u;
        goto label_51d388;
    }
    ctx->pc = 0x51D380u;
    SET_GPR_U32(ctx, 31, 0x51D388u);
    ctx->pc = 0x51D384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D380u;
            // 0x51d384: 0x40582d  daddu       $t3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51E080u;
    if (runtime->hasFunction(0x51E080u)) {
        auto targetFn = runtime->lookupFunction(0x51E080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D388u; }
        if (ctx->pc != 0x51D388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051E080_0x51e080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D388u; }
        if (ctx->pc != 0x51D388u) { return; }
    }
    ctx->pc = 0x51D388u;
label_51d388:
    // 0x51d388: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x51d388u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_51d38c:
    // 0x51d38c: 0x16c0fff1  bnez        $s6, . + 4 + (-0xF << 2)
label_51d390:
    if (ctx->pc == 0x51D390u) {
        ctx->pc = 0x51D390u;
            // 0x51d390: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x51D394u;
        goto label_51d394;
    }
    ctx->pc = 0x51D38Cu;
    {
        const bool branch_taken_0x51d38c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x51D390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51D38Cu;
            // 0x51d390: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51d38c) {
            ctx->pc = 0x51D354u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_51d354;
        }
    }
    ctx->pc = 0x51D394u;
label_51d394:
    // 0x51d394: 0x0  nop
    ctx->pc = 0x51d394u;
    // NOP
label_51d398:
    // 0x51d398: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x51d398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_51d39c:
    // 0x51d39c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x51d39cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_51d3a0:
    // 0x51d3a0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x51d3a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_51d3a4:
    // 0x51d3a4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x51d3a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_51d3a8:
    // 0x51d3a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x51d3a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_51d3ac:
    // 0x51d3ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x51d3acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_51d3b0:
    // 0x51d3b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x51d3b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_51d3b4:
    // 0x51d3b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x51d3b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_51d3b8:
    // 0x51d3b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51d3b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_51d3bc:
    // 0x51d3bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51d3bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51d3c0:
    // 0x51d3c0: 0x3e00008  jr          $ra
label_51d3c4:
    if (ctx->pc == 0x51D3C4u) {
        ctx->pc = 0x51D3C4u;
            // 0x51d3c4: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x51D3C8u;
        goto label_51d3c8;
    }
    ctx->pc = 0x51D3C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51D3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51D3C0u;
            // 0x51d3c4: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51D3C8u;
label_51d3c8:
    // 0x51d3c8: 0x0  nop
    ctx->pc = 0x51d3c8u;
    // NOP
label_51d3cc:
    // 0x51d3cc: 0x0  nop
    ctx->pc = 0x51d3ccu;
    // NOP
}
