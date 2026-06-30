#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00178298
// Address: 0x178298 - 0x178400
void sub_00178298_0x178298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178298_0x178298");
#endif

    switch (ctx->pc) {
        case 0x178298u: goto label_178298;
        case 0x17829cu: goto label_17829c;
        case 0x1782a0u: goto label_1782a0;
        case 0x1782a4u: goto label_1782a4;
        case 0x1782a8u: goto label_1782a8;
        case 0x1782acu: goto label_1782ac;
        case 0x1782b0u: goto label_1782b0;
        case 0x1782b4u: goto label_1782b4;
        case 0x1782b8u: goto label_1782b8;
        case 0x1782bcu: goto label_1782bc;
        case 0x1782c0u: goto label_1782c0;
        case 0x1782c4u: goto label_1782c4;
        case 0x1782c8u: goto label_1782c8;
        case 0x1782ccu: goto label_1782cc;
        case 0x1782d0u: goto label_1782d0;
        case 0x1782d4u: goto label_1782d4;
        case 0x1782d8u: goto label_1782d8;
        case 0x1782dcu: goto label_1782dc;
        case 0x1782e0u: goto label_1782e0;
        case 0x1782e4u: goto label_1782e4;
        case 0x1782e8u: goto label_1782e8;
        case 0x1782ecu: goto label_1782ec;
        case 0x1782f0u: goto label_1782f0;
        case 0x1782f4u: goto label_1782f4;
        case 0x1782f8u: goto label_1782f8;
        case 0x1782fcu: goto label_1782fc;
        case 0x178300u: goto label_178300;
        case 0x178304u: goto label_178304;
        case 0x178308u: goto label_178308;
        case 0x17830cu: goto label_17830c;
        case 0x178310u: goto label_178310;
        case 0x178314u: goto label_178314;
        case 0x178318u: goto label_178318;
        case 0x17831cu: goto label_17831c;
        case 0x178320u: goto label_178320;
        case 0x178324u: goto label_178324;
        case 0x178328u: goto label_178328;
        case 0x17832cu: goto label_17832c;
        case 0x178330u: goto label_178330;
        case 0x178334u: goto label_178334;
        case 0x178338u: goto label_178338;
        case 0x17833cu: goto label_17833c;
        case 0x178340u: goto label_178340;
        case 0x178344u: goto label_178344;
        case 0x178348u: goto label_178348;
        case 0x17834cu: goto label_17834c;
        case 0x178350u: goto label_178350;
        case 0x178354u: goto label_178354;
        case 0x178358u: goto label_178358;
        case 0x17835cu: goto label_17835c;
        case 0x178360u: goto label_178360;
        case 0x178364u: goto label_178364;
        case 0x178368u: goto label_178368;
        case 0x17836cu: goto label_17836c;
        case 0x178370u: goto label_178370;
        case 0x178374u: goto label_178374;
        case 0x178378u: goto label_178378;
        case 0x17837cu: goto label_17837c;
        case 0x178380u: goto label_178380;
        case 0x178384u: goto label_178384;
        case 0x178388u: goto label_178388;
        case 0x17838cu: goto label_17838c;
        case 0x178390u: goto label_178390;
        case 0x178394u: goto label_178394;
        case 0x178398u: goto label_178398;
        case 0x17839cu: goto label_17839c;
        case 0x1783a0u: goto label_1783a0;
        case 0x1783a4u: goto label_1783a4;
        case 0x1783a8u: goto label_1783a8;
        case 0x1783acu: goto label_1783ac;
        case 0x1783b0u: goto label_1783b0;
        case 0x1783b4u: goto label_1783b4;
        case 0x1783b8u: goto label_1783b8;
        case 0x1783bcu: goto label_1783bc;
        case 0x1783c0u: goto label_1783c0;
        case 0x1783c4u: goto label_1783c4;
        case 0x1783c8u: goto label_1783c8;
        case 0x1783ccu: goto label_1783cc;
        case 0x1783d0u: goto label_1783d0;
        case 0x1783d4u: goto label_1783d4;
        case 0x1783d8u: goto label_1783d8;
        case 0x1783dcu: goto label_1783dc;
        case 0x1783e0u: goto label_1783e0;
        case 0x1783e4u: goto label_1783e4;
        case 0x1783e8u: goto label_1783e8;
        case 0x1783ecu: goto label_1783ec;
        case 0x1783f0u: goto label_1783f0;
        case 0x1783f4u: goto label_1783f4;
        case 0x1783f8u: goto label_1783f8;
        case 0x1783fcu: goto label_1783fc;
        default: break;
    }

    ctx->pc = 0x178298u;

label_178298:
    // 0x178298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x178298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_17829c:
    // 0x17829c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17829cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1782a0:
    // 0x1782a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1782a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1782a4:
    // 0x1782a4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x1782a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_1782a8:
    // 0x1782a8: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x1782a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
label_1782ac:
    // 0x1782ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1782acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1782b0:
    // 0x1782b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1782b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1782b4:
    // 0x1782b4: 0x805e09a  j           func_178268
label_1782b8:
    if (ctx->pc == 0x1782B8u) {
        ctx->pc = 0x1782B8u;
            // 0x1782b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1782BCu;
        goto label_1782bc;
    }
    ctx->pc = 0x1782B4u;
    ctx->pc = 0x1782B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1782B4u;
            // 0x1782b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178268u;
    {
        auto targetFn = runtime->lookupFunction(0x178268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1782BCu;
label_1782bc:
    // 0x1782bc: 0x0  nop
    ctx->pc = 0x1782bcu;
    // NOP
label_1782c0:
    // 0x1782c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1782c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1782c4:
    // 0x1782c4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1782c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_1782c8:
    // 0x1782c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1782c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1782cc:
    // 0x1782cc: 0x24514384  addiu       $s1, $v0, 0x4384
    ctx->pc = 0x1782ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 17284));
label_1782d0:
    // 0x1782d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1782d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1782d4:
    // 0x1782d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1782d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1782d8:
    // 0x1782d8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_1782dc:
    if (ctx->pc == 0x1782DCu) {
        ctx->pc = 0x1782DCu;
            // 0x1782dc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->pc = 0x1782E0u;
        goto label_1782e0;
    }
    ctx->pc = 0x1782D8u;
    {
        const bool branch_taken_0x1782d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1782DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1782D8u;
            // 0x1782dc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1782d8) {
            ctx->pc = 0x178328u;
            goto label_178328;
        }
    }
    ctx->pc = 0x1782E0u;
label_1782e0:
    // 0x1782e0: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x1782e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_1782e4:
    // 0x1782e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1782e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1782e8:
    // 0x1782e8: 0x2484d298  addiu       $a0, $a0, -0x2D68
    ctx->pc = 0x1782e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955672));
label_1782ec:
    // 0x1782ec: 0xc04a576  jal         func_1295D8
label_1782f0:
    if (ctx->pc == 0x1782F0u) {
        ctx->pc = 0x1782F0u;
            // 0x1782f0: 0x24060140  addiu       $a2, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->pc = 0x1782F4u;
        goto label_1782f4;
    }
    ctx->pc = 0x1782ECu;
    SET_GPR_U32(ctx, 31, 0x1782F4u);
    ctx->pc = 0x1782F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1782ECu;
            // 0x1782f0: 0x24060140  addiu       $a2, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1782F4u; }
        if (ctx->pc != 0x1782F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1782F4u; }
        if (ctx->pc != 0x1782F4u) { return; }
    }
    ctx->pc = 0x1782F4u;
label_1782f4:
    // 0x1782f4: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x1782f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_1782f8:
    // 0x1782f8: 0x3c10006d  lui         $s0, 0x6D
    ctx->pc = 0x1782f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)109 << 16));
label_1782fc:
    // 0x1782fc: 0x2484d3d8  addiu       $a0, $a0, -0x2C28
    ctx->pc = 0x1782fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955992));
label_178300:
    // 0x178300: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x178300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_178304:
    // 0x178304: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x178304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_178308:
    // 0x178308: 0xc04a576  jal         func_1295D8
label_17830c:
    if (ctx->pc == 0x17830Cu) {
        ctx->pc = 0x17830Cu;
            // 0x17830c: 0x2610d5d8  addiu       $s0, $s0, -0x2A28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956504));
        ctx->pc = 0x178310u;
        goto label_178310;
    }
    ctx->pc = 0x178308u;
    SET_GPR_U32(ctx, 31, 0x178310u);
    ctx->pc = 0x17830Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178308u;
            // 0x17830c: 0x2610d5d8  addiu       $s0, $s0, -0x2A28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178310u; }
        if (ctx->pc != 0x178310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178310u; }
        if (ctx->pc != 0x178310u) { return; }
    }
    ctx->pc = 0x178310u;
label_178310:
    // 0x178310: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x178310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_178314:
    // 0x178314: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_178318:
    // 0x178318: 0xc04a576  jal         func_1295D8
label_17831c:
    if (ctx->pc == 0x17831Cu) {
        ctx->pc = 0x17831Cu;
            // 0x17831c: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x178320u;
        goto label_178320;
    }
    ctx->pc = 0x178318u;
    SET_GPR_U32(ctx, 31, 0x178320u);
    ctx->pc = 0x17831Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178318u;
            // 0x17831c: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178320u; }
        if (ctx->pc != 0x178320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178320u; }
        if (ctx->pc != 0x178320u) { return; }
    }
    ctx->pc = 0x178320u;
label_178320:
    // 0x178320: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x178320u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_178324:
    // 0x178324: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x178324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_178328:
    // 0x178328: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x178328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17832c:
    // 0x17832c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17832cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_178330:
    // 0x178330: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x178330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_178334:
    // 0x178334: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x178334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_178338:
    // 0x178338: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178338u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17833c:
    // 0x17833c: 0x3e00008  jr          $ra
label_178340:
    if (ctx->pc == 0x178340u) {
        ctx->pc = 0x178340u;
            // 0x178340: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x178344u;
        goto label_178344;
    }
    ctx->pc = 0x17833Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17833Cu;
            // 0x178340: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x178344u;
label_178344:
    // 0x178344: 0x0  nop
    ctx->pc = 0x178344u;
    // NOP
label_178348:
    // 0x178348: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17834c:
    // 0x17834c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17834cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_178350:
    // 0x178350: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_178354:
    // 0x178354: 0x24634384  addiu       $v1, $v1, 0x4384
    ctx->pc = 0x178354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17284));
label_178358:
    // 0x178358: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x178358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_17835c:
    // 0x17835c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17835cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_178360:
    // 0x178360: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x178360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_178364:
    // 0x178364: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x178364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_178368:
    // 0x178368: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x178368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_17836c:
    // 0x17836c: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_178370:
    if (ctx->pc == 0x178370u) {
        ctx->pc = 0x178370u;
            // 0x178370: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x178374u;
        goto label_178374;
    }
    ctx->pc = 0x17836Cu;
    {
        const bool branch_taken_0x17836c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17836Cu;
            // 0x178370: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17836c) {
            ctx->pc = 0x1783E4u;
            goto label_1783e4;
        }
    }
    ctx->pc = 0x178374u;
label_178374:
    // 0x178374: 0x3c12006d  lui         $s2, 0x6D
    ctx->pc = 0x178374u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)109 << 16));
label_178378:
    // 0x178378: 0x24110027  addiu       $s1, $zero, 0x27
    ctx->pc = 0x178378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_17837c:
    // 0x17837c: 0x2650d298  addiu       $s0, $s2, -0x2D68
    ctx->pc = 0x17837cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294955672));
label_178380:
    // 0x178380: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x178380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_178384:
    // 0x178384: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_178388:
    if (ctx->pc == 0x178388u) {
        ctx->pc = 0x178388u;
            // 0x178388: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x17838Cu;
        goto label_17838c;
    }
    ctx->pc = 0x178384u;
    {
        const bool branch_taken_0x178384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x178384) {
            ctx->pc = 0x178388u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178384u;
            // 0x178388: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17839Cu;
            goto label_17839c;
        }
    }
    ctx->pc = 0x17838Cu;
label_17838c:
    // 0x17838c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x17838cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_178390:
    // 0x178390: 0x40f809  jalr        $v0
label_178394:
    if (ctx->pc == 0x178394u) {
        ctx->pc = 0x178394u;
            // 0x178394: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x178398u;
        goto label_178398;
    }
    ctx->pc = 0x178390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x178398u);
        ctx->pc = 0x178394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178390u;
            // 0x178394: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x178398u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x178398u; }
            if (ctx->pc != 0x178398u) { return; }
        }
        }
    }
    ctx->pc = 0x178398u;
label_178398:
    // 0x178398: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x178398u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_17839c:
    // 0x17839c: 0x621fff8  bgez        $s1, . + 4 + (-0x8 << 2)
label_1783a0:
    if (ctx->pc == 0x1783A0u) {
        ctx->pc = 0x1783A0u;
            // 0x1783a0: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x1783A4u;
        goto label_1783a4;
    }
    ctx->pc = 0x17839Cu;
    {
        const bool branch_taken_0x17839c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1783A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17839Cu;
            // 0x1783a0: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17839c) {
            ctx->pc = 0x178380u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_178380;
        }
    }
    ctx->pc = 0x1783A4u;
label_1783a4:
    // 0x1783a4: 0x2644d298  addiu       $a0, $s2, -0x2D68
    ctx->pc = 0x1783a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294955672));
label_1783a8:
    // 0x1783a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1783a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1783ac:
    // 0x1783ac: 0x24060140  addiu       $a2, $zero, 0x140
    ctx->pc = 0x1783acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_1783b0:
    // 0x1783b0: 0xc04a576  jal         func_1295D8
label_1783b4:
    if (ctx->pc == 0x1783B4u) {
        ctx->pc = 0x1783B4u;
            // 0x1783b4: 0x3c10006d  lui         $s0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)109 << 16));
        ctx->pc = 0x1783B8u;
        goto label_1783b8;
    }
    ctx->pc = 0x1783B0u;
    SET_GPR_U32(ctx, 31, 0x1783B8u);
    ctx->pc = 0x1783B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1783B0u;
            // 0x1783b4: 0x3c10006d  lui         $s0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1783B8u; }
        if (ctx->pc != 0x1783B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1783B8u; }
        if (ctx->pc != 0x1783B8u) { return; }
    }
    ctx->pc = 0x1783B8u;
label_1783b8:
    // 0x1783b8: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x1783b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_1783bc:
    // 0x1783bc: 0x2484d3d8  addiu       $a0, $a0, -0x2C28
    ctx->pc = 0x1783bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955992));
label_1783c0:
    // 0x1783c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1783c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1783c4:
    // 0x1783c4: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x1783c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1783c8:
    // 0x1783c8: 0xc04a576  jal         func_1295D8
label_1783cc:
    if (ctx->pc == 0x1783CCu) {
        ctx->pc = 0x1783CCu;
            // 0x1783cc: 0x2610d5d8  addiu       $s0, $s0, -0x2A28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956504));
        ctx->pc = 0x1783D0u;
        goto label_1783d0;
    }
    ctx->pc = 0x1783C8u;
    SET_GPR_U32(ctx, 31, 0x1783D0u);
    ctx->pc = 0x1783CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1783C8u;
            // 0x1783cc: 0x2610d5d8  addiu       $s0, $s0, -0x2A28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1783D0u; }
        if (ctx->pc != 0x1783D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1783D0u; }
        if (ctx->pc != 0x1783D0u) { return; }
    }
    ctx->pc = 0x1783D0u;
label_1783d0:
    // 0x1783d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1783d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1783d4:
    // 0x1783d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1783d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1783d8:
    // 0x1783d8: 0xc04a576  jal         func_1295D8
label_1783dc:
    if (ctx->pc == 0x1783DCu) {
        ctx->pc = 0x1783DCu;
            // 0x1783dc: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x1783E0u;
        goto label_1783e0;
    }
    ctx->pc = 0x1783D8u;
    SET_GPR_U32(ctx, 31, 0x1783E0u);
    ctx->pc = 0x1783DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1783D8u;
            // 0x1783dc: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1783E0u; }
        if (ctx->pc != 0x1783E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1783E0u; }
        if (ctx->pc != 0x1783E0u) { return; }
    }
    ctx->pc = 0x1783E0u;
label_1783e0:
    // 0x1783e0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1783e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_1783e4:
    // 0x1783e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1783e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1783e8:
    // 0x1783e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1783e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1783ec:
    // 0x1783ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1783ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1783f0:
    // 0x1783f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1783f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1783f4:
    // 0x1783f4: 0x3e00008  jr          $ra
label_1783f8:
    if (ctx->pc == 0x1783F8u) {
        ctx->pc = 0x1783F8u;
            // 0x1783f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1783FCu;
        goto label_1783fc;
    }
    ctx->pc = 0x1783F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1783F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1783F4u;
            // 0x1783f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1783FCu;
label_1783fc:
    // 0x1783fc: 0x0  nop
    ctx->pc = 0x1783fcu;
    // NOP
}
