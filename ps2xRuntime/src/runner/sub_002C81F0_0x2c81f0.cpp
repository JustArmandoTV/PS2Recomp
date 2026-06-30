#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C81F0
// Address: 0x2c81f0 - 0x2c8370
void sub_002C81F0_0x2c81f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C81F0_0x2c81f0");
#endif

    switch (ctx->pc) {
        case 0x2c81f0u: goto label_2c81f0;
        case 0x2c81f4u: goto label_2c81f4;
        case 0x2c81f8u: goto label_2c81f8;
        case 0x2c81fcu: goto label_2c81fc;
        case 0x2c8200u: goto label_2c8200;
        case 0x2c8204u: goto label_2c8204;
        case 0x2c8208u: goto label_2c8208;
        case 0x2c820cu: goto label_2c820c;
        case 0x2c8210u: goto label_2c8210;
        case 0x2c8214u: goto label_2c8214;
        case 0x2c8218u: goto label_2c8218;
        case 0x2c821cu: goto label_2c821c;
        case 0x2c8220u: goto label_2c8220;
        case 0x2c8224u: goto label_2c8224;
        case 0x2c8228u: goto label_2c8228;
        case 0x2c822cu: goto label_2c822c;
        case 0x2c8230u: goto label_2c8230;
        case 0x2c8234u: goto label_2c8234;
        case 0x2c8238u: goto label_2c8238;
        case 0x2c823cu: goto label_2c823c;
        case 0x2c8240u: goto label_2c8240;
        case 0x2c8244u: goto label_2c8244;
        case 0x2c8248u: goto label_2c8248;
        case 0x2c824cu: goto label_2c824c;
        case 0x2c8250u: goto label_2c8250;
        case 0x2c8254u: goto label_2c8254;
        case 0x2c8258u: goto label_2c8258;
        case 0x2c825cu: goto label_2c825c;
        case 0x2c8260u: goto label_2c8260;
        case 0x2c8264u: goto label_2c8264;
        case 0x2c8268u: goto label_2c8268;
        case 0x2c826cu: goto label_2c826c;
        case 0x2c8270u: goto label_2c8270;
        case 0x2c8274u: goto label_2c8274;
        case 0x2c8278u: goto label_2c8278;
        case 0x2c827cu: goto label_2c827c;
        case 0x2c8280u: goto label_2c8280;
        case 0x2c8284u: goto label_2c8284;
        case 0x2c8288u: goto label_2c8288;
        case 0x2c828cu: goto label_2c828c;
        case 0x2c8290u: goto label_2c8290;
        case 0x2c8294u: goto label_2c8294;
        case 0x2c8298u: goto label_2c8298;
        case 0x2c829cu: goto label_2c829c;
        case 0x2c82a0u: goto label_2c82a0;
        case 0x2c82a4u: goto label_2c82a4;
        case 0x2c82a8u: goto label_2c82a8;
        case 0x2c82acu: goto label_2c82ac;
        case 0x2c82b0u: goto label_2c82b0;
        case 0x2c82b4u: goto label_2c82b4;
        case 0x2c82b8u: goto label_2c82b8;
        case 0x2c82bcu: goto label_2c82bc;
        case 0x2c82c0u: goto label_2c82c0;
        case 0x2c82c4u: goto label_2c82c4;
        case 0x2c82c8u: goto label_2c82c8;
        case 0x2c82ccu: goto label_2c82cc;
        case 0x2c82d0u: goto label_2c82d0;
        case 0x2c82d4u: goto label_2c82d4;
        case 0x2c82d8u: goto label_2c82d8;
        case 0x2c82dcu: goto label_2c82dc;
        case 0x2c82e0u: goto label_2c82e0;
        case 0x2c82e4u: goto label_2c82e4;
        case 0x2c82e8u: goto label_2c82e8;
        case 0x2c82ecu: goto label_2c82ec;
        case 0x2c82f0u: goto label_2c82f0;
        case 0x2c82f4u: goto label_2c82f4;
        case 0x2c82f8u: goto label_2c82f8;
        case 0x2c82fcu: goto label_2c82fc;
        case 0x2c8300u: goto label_2c8300;
        case 0x2c8304u: goto label_2c8304;
        case 0x2c8308u: goto label_2c8308;
        case 0x2c830cu: goto label_2c830c;
        case 0x2c8310u: goto label_2c8310;
        case 0x2c8314u: goto label_2c8314;
        case 0x2c8318u: goto label_2c8318;
        case 0x2c831cu: goto label_2c831c;
        case 0x2c8320u: goto label_2c8320;
        case 0x2c8324u: goto label_2c8324;
        case 0x2c8328u: goto label_2c8328;
        case 0x2c832cu: goto label_2c832c;
        case 0x2c8330u: goto label_2c8330;
        case 0x2c8334u: goto label_2c8334;
        case 0x2c8338u: goto label_2c8338;
        case 0x2c833cu: goto label_2c833c;
        case 0x2c8340u: goto label_2c8340;
        case 0x2c8344u: goto label_2c8344;
        case 0x2c8348u: goto label_2c8348;
        case 0x2c834cu: goto label_2c834c;
        case 0x2c8350u: goto label_2c8350;
        case 0x2c8354u: goto label_2c8354;
        case 0x2c8358u: goto label_2c8358;
        case 0x2c835cu: goto label_2c835c;
        case 0x2c8360u: goto label_2c8360;
        case 0x2c8364u: goto label_2c8364;
        case 0x2c8368u: goto label_2c8368;
        case 0x2c836cu: goto label_2c836c;
        default: break;
    }

    ctx->pc = 0x2c81f0u;

label_2c81f0:
    // 0x2c81f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c81f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c81f4:
    // 0x2c81f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c81f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c81f8:
    // 0x2c81f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c81f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c81fc:
    // 0x2c81fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c81fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c8200:
    // 0x2c8200: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c8200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c8204:
    // 0x2c8204: 0x12200051  beqz        $s1, . + 4 + (0x51 << 2)
label_2c8208:
    if (ctx->pc == 0x2C8208u) {
        ctx->pc = 0x2C8208u;
            // 0x2c8208: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C820Cu;
        goto label_2c820c;
    }
    ctx->pc = 0x2C8204u;
    {
        const bool branch_taken_0x2c8204 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8204u;
            // 0x2c8208: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8204) {
            ctx->pc = 0x2C834Cu;
            goto label_2c834c;
        }
    }
    ctx->pc = 0x2C820Cu;
label_2c820c:
    // 0x2c820c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c820cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c8210:
    // 0x2c8210: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c8210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c8214:
    // 0x2c8214: 0x246307a0  addiu       $v1, $v1, 0x7A0
    ctx->pc = 0x2c8214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1952));
label_2c8218:
    // 0x2c8218: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2c8218u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_2c821c:
    // 0x2c821c: 0x244207d8  addiu       $v0, $v0, 0x7D8
    ctx->pc = 0x2c821cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2008));
label_2c8220:
    // 0x2c8220: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c8220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2c8224:
    // 0x2c8224: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2c8224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2c8228:
    // 0x2c8228: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2c8228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2c822c:
    // 0x2c822c: 0xc0407c0  jal         func_101F00
label_2c8230:
    if (ctx->pc == 0x2C8230u) {
        ctx->pc = 0x2C8230u;
            // 0x2c8230: 0x24a58160  addiu       $a1, $a1, -0x7EA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934880));
        ctx->pc = 0x2C8234u;
        goto label_2c8234;
    }
    ctx->pc = 0x2C822Cu;
    SET_GPR_U32(ctx, 31, 0x2C8234u);
    ctx->pc = 0x2C8230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C822Cu;
            // 0x2c8230: 0x24a58160  addiu       $a1, $a1, -0x7EA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8234u; }
        if (ctx->pc != 0x2C8234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8234u; }
        if (ctx->pc != 0x2C8234u) { return; }
    }
    ctx->pc = 0x2C8234u;
label_2c8234:
    // 0x2c8234: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2c8234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2c8238:
    // 0x2c8238: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2c823c:
    if (ctx->pc == 0x2C823Cu) {
        ctx->pc = 0x2C823Cu;
            // 0x2c823c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2C8240u;
        goto label_2c8240;
    }
    ctx->pc = 0x2C8238u;
    {
        const bool branch_taken_0x2c8238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8238) {
            ctx->pc = 0x2C823Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8238u;
            // 0x2c823c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C8260u;
            goto label_2c8260;
        }
    }
    ctx->pc = 0x2C8240u;
label_2c8240:
    // 0x2c8240: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x2c8240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_2c8244:
    // 0x2c8244: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_2c8248:
    if (ctx->pc == 0x2C8248u) {
        ctx->pc = 0x2C8248u;
            // 0x2c8248: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->pc = 0x2C824Cu;
        goto label_2c824c;
    }
    ctx->pc = 0x2C8244u;
    {
        const bool branch_taken_0x2c8244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8244) {
            ctx->pc = 0x2C8248u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8244u;
            // 0x2c8248: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C825Cu;
            goto label_2c825c;
        }
    }
    ctx->pc = 0x2C824Cu;
label_2c824c:
    // 0x2c824c: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c824cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2c8250:
    // 0x2c8250: 0xc0407c0  jal         func_101F00
label_2c8254:
    if (ctx->pc == 0x2C8254u) {
        ctx->pc = 0x2C8254u;
            // 0x2c8254: 0x24a5ab30  addiu       $a1, $a1, -0x54D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945584));
        ctx->pc = 0x2C8258u;
        goto label_2c8258;
    }
    ctx->pc = 0x2C8250u;
    SET_GPR_U32(ctx, 31, 0x2C8258u);
    ctx->pc = 0x2C8254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8250u;
            // 0x2c8254: 0x24a5ab30  addiu       $a1, $a1, -0x54D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8258u; }
        if (ctx->pc != 0x2C8258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8258u; }
        if (ctx->pc != 0x2C8258u) { return; }
    }
    ctx->pc = 0x2C8258u;
label_2c8258:
    // 0x2c8258: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x2c8258u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
label_2c825c:
    // 0x2c825c: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2c825cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2c8260:
    // 0x2c8260: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c8264:
    if (ctx->pc == 0x2C8264u) {
        ctx->pc = 0x2C8264u;
            // 0x2c8264: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2C8268u;
        goto label_2c8268;
    }
    ctx->pc = 0x2C8260u;
    {
        const bool branch_taken_0x2c8260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8260) {
            ctx->pc = 0x2C8264u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8260u;
            // 0x2c8264: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C8290u;
            goto label_2c8290;
        }
    }
    ctx->pc = 0x2C8268u;
label_2c8268:
    // 0x2c8268: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c826c:
    if (ctx->pc == 0x2C826Cu) {
        ctx->pc = 0x2C8270u;
        goto label_2c8270;
    }
    ctx->pc = 0x2C8268u;
    {
        const bool branch_taken_0x2c8268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8268) {
            ctx->pc = 0x2C828Cu;
            goto label_2c828c;
        }
    }
    ctx->pc = 0x2C8270u;
label_2c8270:
    // 0x2c8270: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c8274:
    if (ctx->pc == 0x2C8274u) {
        ctx->pc = 0x2C8278u;
        goto label_2c8278;
    }
    ctx->pc = 0x2C8270u;
    {
        const bool branch_taken_0x2c8270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8270) {
            ctx->pc = 0x2C828Cu;
            goto label_2c828c;
        }
    }
    ctx->pc = 0x2C8278u;
label_2c8278:
    // 0x2c8278: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2c8278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2c827c:
    // 0x2c827c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c8280:
    if (ctx->pc == 0x2C8280u) {
        ctx->pc = 0x2C8284u;
        goto label_2c8284;
    }
    ctx->pc = 0x2C827Cu;
    {
        const bool branch_taken_0x2c827c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c827c) {
            ctx->pc = 0x2C828Cu;
            goto label_2c828c;
        }
    }
    ctx->pc = 0x2C8284u;
label_2c8284:
    // 0x2c8284: 0xc0400a8  jal         func_1002A0
label_2c8288:
    if (ctx->pc == 0x2C8288u) {
        ctx->pc = 0x2C828Cu;
        goto label_2c828c;
    }
    ctx->pc = 0x2C8284u;
    SET_GPR_U32(ctx, 31, 0x2C828Cu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C828Cu; }
        if (ctx->pc != 0x2C828Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C828Cu; }
        if (ctx->pc != 0x2C828Cu) { return; }
    }
    ctx->pc = 0x2C828Cu;
label_2c828c:
    // 0x2c828c: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2c828cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2c8290:
    // 0x2c8290: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c8294:
    if (ctx->pc == 0x2C8294u) {
        ctx->pc = 0x2C8294u;
            // 0x2c8294: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2C8298u;
        goto label_2c8298;
    }
    ctx->pc = 0x2C8290u;
    {
        const bool branch_taken_0x2c8290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8290) {
            ctx->pc = 0x2C8294u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8290u;
            // 0x2c8294: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C82C0u;
            goto label_2c82c0;
        }
    }
    ctx->pc = 0x2C8298u;
label_2c8298:
    // 0x2c8298: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c829c:
    if (ctx->pc == 0x2C829Cu) {
        ctx->pc = 0x2C82A0u;
        goto label_2c82a0;
    }
    ctx->pc = 0x2C8298u;
    {
        const bool branch_taken_0x2c8298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8298) {
            ctx->pc = 0x2C82BCu;
            goto label_2c82bc;
        }
    }
    ctx->pc = 0x2C82A0u;
label_2c82a0:
    // 0x2c82a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c82a4:
    if (ctx->pc == 0x2C82A4u) {
        ctx->pc = 0x2C82A8u;
        goto label_2c82a8;
    }
    ctx->pc = 0x2C82A0u;
    {
        const bool branch_taken_0x2c82a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c82a0) {
            ctx->pc = 0x2C82BCu;
            goto label_2c82bc;
        }
    }
    ctx->pc = 0x2C82A8u;
label_2c82a8:
    // 0x2c82a8: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2c82a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2c82ac:
    // 0x2c82ac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c82b0:
    if (ctx->pc == 0x2C82B0u) {
        ctx->pc = 0x2C82B4u;
        goto label_2c82b4;
    }
    ctx->pc = 0x2C82ACu;
    {
        const bool branch_taken_0x2c82ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c82ac) {
            ctx->pc = 0x2C82BCu;
            goto label_2c82bc;
        }
    }
    ctx->pc = 0x2C82B4u;
label_2c82b4:
    // 0x2c82b4: 0xc0400a8  jal         func_1002A0
label_2c82b8:
    if (ctx->pc == 0x2C82B8u) {
        ctx->pc = 0x2C82BCu;
        goto label_2c82bc;
    }
    ctx->pc = 0x2C82B4u;
    SET_GPR_U32(ctx, 31, 0x2C82BCu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C82BCu; }
        if (ctx->pc != 0x2C82BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C82BCu; }
        if (ctx->pc != 0x2C82BCu) { return; }
    }
    ctx->pc = 0x2C82BCu;
label_2c82bc:
    // 0x2c82bc: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2c82bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2c82c0:
    // 0x2c82c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c82c4:
    if (ctx->pc == 0x2C82C4u) {
        ctx->pc = 0x2C82C8u;
        goto label_2c82c8;
    }
    ctx->pc = 0x2C82C0u;
    {
        const bool branch_taken_0x2c82c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c82c0) {
            ctx->pc = 0x2C82DCu;
            goto label_2c82dc;
        }
    }
    ctx->pc = 0x2C82C8u;
label_2c82c8:
    // 0x2c82c8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c82c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c82cc:
    // 0x2c82cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c82ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2c82d0:
    // 0x2c82d0: 0x24630790  addiu       $v1, $v1, 0x790
    ctx->pc = 0x2c82d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1936));
label_2c82d4:
    // 0x2c82d4: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2c82d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2c82d8:
    // 0x2c82d8: 0xac400e08  sw          $zero, 0xE08($v0)
    ctx->pc = 0x2c82d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3592), GPR_U32(ctx, 0));
label_2c82dc:
    // 0x2c82dc: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2c82e0:
    if (ctx->pc == 0x2C82E0u) {
        ctx->pc = 0x2C82E0u;
            // 0x2c82e0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C82E4u;
        goto label_2c82e4;
    }
    ctx->pc = 0x2C82DCu;
    {
        const bool branch_taken_0x2c82dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c82dc) {
            ctx->pc = 0x2C82E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C82DCu;
            // 0x2c82e0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C8338u;
            goto label_2c8338;
        }
    }
    ctx->pc = 0x2C82E4u;
label_2c82e4:
    // 0x2c82e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c82e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c82e8:
    // 0x2c82e8: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c82e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2c82ec:
    // 0x2c82ec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c82ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c82f0:
    // 0x2c82f0: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2c82f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2c82f4:
    // 0x2c82f4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c82f8:
    if (ctx->pc == 0x2C82F8u) {
        ctx->pc = 0x2C82F8u;
            // 0x2c82f8: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2C82FCu;
        goto label_2c82fc;
    }
    ctx->pc = 0x2C82F4u;
    {
        const bool branch_taken_0x2c82f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c82f4) {
            ctx->pc = 0x2C82F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C82F4u;
            // 0x2c82f8: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C8310u;
            goto label_2c8310;
        }
    }
    ctx->pc = 0x2C82FCu;
label_2c82fc:
    // 0x2c82fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c82fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c8300:
    // 0x2c8300: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c8300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c8304:
    // 0x2c8304: 0x320f809  jalr        $t9
label_2c8308:
    if (ctx->pc == 0x2C8308u) {
        ctx->pc = 0x2C8308u;
            // 0x2c8308: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C830Cu;
        goto label_2c830c;
    }
    ctx->pc = 0x2C8304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C830Cu);
        ctx->pc = 0x2C8308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8304u;
            // 0x2c8308: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C830Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C830Cu; }
            if (ctx->pc != 0x2C830Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2C830Cu;
label_2c830c:
    // 0x2c830c: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2c830cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2c8310:
    // 0x2c8310: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c8314:
    if (ctx->pc == 0x2C8314u) {
        ctx->pc = 0x2C8314u;
            // 0x2c8314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8318u;
        goto label_2c8318;
    }
    ctx->pc = 0x2C8310u;
    {
        const bool branch_taken_0x2c8310 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8310) {
            ctx->pc = 0x2C8314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8310u;
            // 0x2c8314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C832Cu;
            goto label_2c832c;
        }
    }
    ctx->pc = 0x2C8318u;
label_2c8318:
    // 0x2c8318: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c8318u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c831c:
    // 0x2c831c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c831cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c8320:
    // 0x2c8320: 0x320f809  jalr        $t9
label_2c8324:
    if (ctx->pc == 0x2C8324u) {
        ctx->pc = 0x2C8324u;
            // 0x2c8324: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C8328u;
        goto label_2c8328;
    }
    ctx->pc = 0x2C8320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C8328u);
        ctx->pc = 0x2C8324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8320u;
            // 0x2c8324: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C8328u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C8328u; }
            if (ctx->pc != 0x2C8328u) { return; }
        }
        }
    }
    ctx->pc = 0x2C8328u;
label_2c8328:
    // 0x2c8328: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c8328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c832c:
    // 0x2c832c: 0xc075bf8  jal         func_1D6FE0
label_2c8330:
    if (ctx->pc == 0x2C8330u) {
        ctx->pc = 0x2C8330u;
            // 0x2c8330: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8334u;
        goto label_2c8334;
    }
    ctx->pc = 0x2C832Cu;
    SET_GPR_U32(ctx, 31, 0x2C8334u);
    ctx->pc = 0x2C8330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C832Cu;
            // 0x2c8330: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8334u; }
        if (ctx->pc != 0x2C8334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8334u; }
        if (ctx->pc != 0x2C8334u) { return; }
    }
    ctx->pc = 0x2C8334u;
label_2c8334:
    // 0x2c8334: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c8334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c8338:
    // 0x2c8338: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c8338u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c833c:
    // 0x2c833c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c8340:
    if (ctx->pc == 0x2C8340u) {
        ctx->pc = 0x2C8340u;
            // 0x2c8340: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8344u;
        goto label_2c8344;
    }
    ctx->pc = 0x2C833Cu;
    {
        const bool branch_taken_0x2c833c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c833c) {
            ctx->pc = 0x2C8340u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C833Cu;
            // 0x2c8340: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C8350u;
            goto label_2c8350;
        }
    }
    ctx->pc = 0x2C8344u;
label_2c8344:
    // 0x2c8344: 0xc0400a8  jal         func_1002A0
label_2c8348:
    if (ctx->pc == 0x2C8348u) {
        ctx->pc = 0x2C8348u;
            // 0x2c8348: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C834Cu;
        goto label_2c834c;
    }
    ctx->pc = 0x2C8344u;
    SET_GPR_U32(ctx, 31, 0x2C834Cu);
    ctx->pc = 0x2C8348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8344u;
            // 0x2c8348: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C834Cu; }
        if (ctx->pc != 0x2C834Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C834Cu; }
        if (ctx->pc != 0x2C834Cu) { return; }
    }
    ctx->pc = 0x2C834Cu;
label_2c834c:
    // 0x2c834c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c834cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c8350:
    // 0x2c8350: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c8350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c8354:
    // 0x2c8354: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c8354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c8358:
    // 0x2c8358: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c8358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c835c:
    // 0x2c835c: 0x3e00008  jr          $ra
label_2c8360:
    if (ctx->pc == 0x2C8360u) {
        ctx->pc = 0x2C8360u;
            // 0x2c8360: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C8364u;
        goto label_2c8364;
    }
    ctx->pc = 0x2C835Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C835Cu;
            // 0x2c8360: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8364u;
label_2c8364:
    // 0x2c8364: 0x0  nop
    ctx->pc = 0x2c8364u;
    // NOP
label_2c8368:
    // 0x2c8368: 0x0  nop
    ctx->pc = 0x2c8368u;
    // NOP
label_2c836c:
    // 0x2c836c: 0x0  nop
    ctx->pc = 0x2c836cu;
    // NOP
}
