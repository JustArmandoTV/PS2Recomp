#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00161200
// Address: 0x161200 - 0x1613b0
void sub_00161200_0x161200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161200_0x161200");
#endif

    switch (ctx->pc) {
        case 0x161200u: goto label_161200;
        case 0x161204u: goto label_161204;
        case 0x161208u: goto label_161208;
        case 0x16120cu: goto label_16120c;
        case 0x161210u: goto label_161210;
        case 0x161214u: goto label_161214;
        case 0x161218u: goto label_161218;
        case 0x16121cu: goto label_16121c;
        case 0x161220u: goto label_161220;
        case 0x161224u: goto label_161224;
        case 0x161228u: goto label_161228;
        case 0x16122cu: goto label_16122c;
        case 0x161230u: goto label_161230;
        case 0x161234u: goto label_161234;
        case 0x161238u: goto label_161238;
        case 0x16123cu: goto label_16123c;
        case 0x161240u: goto label_161240;
        case 0x161244u: goto label_161244;
        case 0x161248u: goto label_161248;
        case 0x16124cu: goto label_16124c;
        case 0x161250u: goto label_161250;
        case 0x161254u: goto label_161254;
        case 0x161258u: goto label_161258;
        case 0x16125cu: goto label_16125c;
        case 0x161260u: goto label_161260;
        case 0x161264u: goto label_161264;
        case 0x161268u: goto label_161268;
        case 0x16126cu: goto label_16126c;
        case 0x161270u: goto label_161270;
        case 0x161274u: goto label_161274;
        case 0x161278u: goto label_161278;
        case 0x16127cu: goto label_16127c;
        case 0x161280u: goto label_161280;
        case 0x161284u: goto label_161284;
        case 0x161288u: goto label_161288;
        case 0x16128cu: goto label_16128c;
        case 0x161290u: goto label_161290;
        case 0x161294u: goto label_161294;
        case 0x161298u: goto label_161298;
        case 0x16129cu: goto label_16129c;
        case 0x1612a0u: goto label_1612a0;
        case 0x1612a4u: goto label_1612a4;
        case 0x1612a8u: goto label_1612a8;
        case 0x1612acu: goto label_1612ac;
        case 0x1612b0u: goto label_1612b0;
        case 0x1612b4u: goto label_1612b4;
        case 0x1612b8u: goto label_1612b8;
        case 0x1612bcu: goto label_1612bc;
        case 0x1612c0u: goto label_1612c0;
        case 0x1612c4u: goto label_1612c4;
        case 0x1612c8u: goto label_1612c8;
        case 0x1612ccu: goto label_1612cc;
        case 0x1612d0u: goto label_1612d0;
        case 0x1612d4u: goto label_1612d4;
        case 0x1612d8u: goto label_1612d8;
        case 0x1612dcu: goto label_1612dc;
        case 0x1612e0u: goto label_1612e0;
        case 0x1612e4u: goto label_1612e4;
        case 0x1612e8u: goto label_1612e8;
        case 0x1612ecu: goto label_1612ec;
        case 0x1612f0u: goto label_1612f0;
        case 0x1612f4u: goto label_1612f4;
        case 0x1612f8u: goto label_1612f8;
        case 0x1612fcu: goto label_1612fc;
        case 0x161300u: goto label_161300;
        case 0x161304u: goto label_161304;
        case 0x161308u: goto label_161308;
        case 0x16130cu: goto label_16130c;
        case 0x161310u: goto label_161310;
        case 0x161314u: goto label_161314;
        case 0x161318u: goto label_161318;
        case 0x16131cu: goto label_16131c;
        case 0x161320u: goto label_161320;
        case 0x161324u: goto label_161324;
        case 0x161328u: goto label_161328;
        case 0x16132cu: goto label_16132c;
        case 0x161330u: goto label_161330;
        case 0x161334u: goto label_161334;
        case 0x161338u: goto label_161338;
        case 0x16133cu: goto label_16133c;
        case 0x161340u: goto label_161340;
        case 0x161344u: goto label_161344;
        case 0x161348u: goto label_161348;
        case 0x16134cu: goto label_16134c;
        case 0x161350u: goto label_161350;
        case 0x161354u: goto label_161354;
        case 0x161358u: goto label_161358;
        case 0x16135cu: goto label_16135c;
        case 0x161360u: goto label_161360;
        case 0x161364u: goto label_161364;
        case 0x161368u: goto label_161368;
        case 0x16136cu: goto label_16136c;
        case 0x161370u: goto label_161370;
        case 0x161374u: goto label_161374;
        case 0x161378u: goto label_161378;
        case 0x16137cu: goto label_16137c;
        case 0x161380u: goto label_161380;
        case 0x161384u: goto label_161384;
        case 0x161388u: goto label_161388;
        case 0x16138cu: goto label_16138c;
        case 0x161390u: goto label_161390;
        case 0x161394u: goto label_161394;
        case 0x161398u: goto label_161398;
        case 0x16139cu: goto label_16139c;
        case 0x1613a0u: goto label_1613a0;
        case 0x1613a4u: goto label_1613a4;
        case 0x1613a8u: goto label_1613a8;
        case 0x1613acu: goto label_1613ac;
        default: break;
    }

    ctx->pc = 0x161200u;

label_161200:
    // 0x161200: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x161200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_161204:
    // 0x161204: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
label_161208:
    if (ctx->pc == 0x161208u) {
        ctx->pc = 0x161208u;
            // 0x161208: 0x8c870004  lw          $a3, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x16120Cu;
        goto label_16120c;
    }
    ctx->pc = 0x161204u;
    {
        const bool branch_taken_0x161204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x161208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161204u;
            // 0x161208: 0x8c870004  lw          $a3, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161204) {
            ctx->pc = 0x161210u;
            goto label_161210;
        }
    }
    ctx->pc = 0x16120Cu;
label_16120c:
    // 0x16120c: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x16120cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
label_161210:
    // 0x161210: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x161210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_161214:
    // 0x161214: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x161214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_161218:
    // 0x161218: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x161218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_16121c:
    // 0x16121c: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_161220:
    if (ctx->pc == 0x161220u) {
        ctx->pc = 0x161220u;
            // 0x161220: 0x8ce30008  lw          $v1, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->pc = 0x161224u;
        goto label_161224;
    }
    ctx->pc = 0x16121Cu;
    {
        const bool branch_taken_0x16121c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x16121c) {
            ctx->pc = 0x161220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16121Cu;
            // 0x161220: 0x8ce30008  lw          $v1, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x161238u;
            goto label_161238;
        }
    }
    ctx->pc = 0x161224u;
label_161224:
    // 0x161224: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x161224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_161228:
    // 0x161228: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x161228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_16122c:
    // 0x16122c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x16122cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_161230:
    // 0x161230: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x161230u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_161234:
    // 0x161234: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x161234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_161238:
    // 0x161238: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x161238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_16123c:
    // 0x16123c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x16123cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_161240:
    // 0x161240: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x161240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_161244:
    // 0x161244: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x161244u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
label_161248:
    // 0x161248: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x161248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_16124c:
    // 0x16124c: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x16124cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
label_161250:
    // 0x161250: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x161250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_161254:
    // 0x161254: 0x662824  and         $a1, $v1, $a2
    ctx->pc = 0x161254u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_161258:
    // 0x161258: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x161258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_16125c:
    // 0x16125c: 0x54830002  bnel        $a0, $v1, . + 4 + (0x2 << 2)
label_161260:
    if (ctx->pc == 0x161260u) {
        ctx->pc = 0x161260u;
            // 0x161260: 0xaca70004  sw          $a3, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
        ctx->pc = 0x161264u;
        goto label_161264;
    }
    ctx->pc = 0x16125Cu;
    {
        const bool branch_taken_0x16125c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16125c) {
            ctx->pc = 0x161260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16125Cu;
            // 0x161260: 0xaca70004  sw          $a3, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x161268u;
            goto label_161268;
        }
    }
    ctx->pc = 0x161264u;
label_161264:
    // 0x161264: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x161264u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
label_161268:
    // 0x161268: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x161268u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
label_16126c:
    // 0x16126c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x16126cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_161270:
    // 0x161270: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x161270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_161274:
    // 0x161274: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x161274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_161278:
    // 0x161278: 0x3e00008  jr          $ra
label_16127c:
    if (ctx->pc == 0x16127Cu) {
        ctx->pc = 0x16127Cu;
            // 0x16127c: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x161280u;
        goto label_161280;
    }
    ctx->pc = 0x161278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16127Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161278u;
            // 0x16127c: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161280u;
label_161280:
    // 0x161280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x161280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_161284:
    // 0x161284: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x161284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_161288:
    // 0x161288: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x161288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16128c:
    // 0x16128c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16128cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_161290:
    // 0x161290: 0x10a20016  beq         $a1, $v0, . + 4 + (0x16 << 2)
label_161294:
    if (ctx->pc == 0x161294u) {
        ctx->pc = 0x161294u;
            // 0x161294: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x161298u;
        goto label_161298;
    }
    ctx->pc = 0x161290u;
    {
        const bool branch_taken_0x161290 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x161294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161290u;
            // 0x161294: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161290) {
            ctx->pc = 0x1612ECu;
            goto label_1612ec;
        }
    }
    ctx->pc = 0x161298u;
label_161298:
    // 0x161298: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x161298u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16129c:
    // 0x16129c: 0x10a7000b  beq         $a1, $a3, . + 4 + (0xB << 2)
label_1612a0:
    if (ctx->pc == 0x1612A0u) {
        ctx->pc = 0x1612A4u;
        goto label_1612a4;
    }
    ctx->pc = 0x16129Cu;
    {
        const bool branch_taken_0x16129c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x16129c) {
            ctx->pc = 0x1612CCu;
            goto label_1612cc;
        }
    }
    ctx->pc = 0x1612A4u;
label_1612a4:
    // 0x1612a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1612a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1612a8:
    // 0x1612a8: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_1612ac:
    if (ctx->pc == 0x1612ACu) {
        ctx->pc = 0x1612B0u;
        goto label_1612b0;
    }
    ctx->pc = 0x1612A8u;
    {
        const bool branch_taken_0x1612a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1612a8) {
            ctx->pc = 0x1612B8u;
            goto label_1612b8;
        }
    }
    ctx->pc = 0x1612B0u;
label_1612b0:
    // 0x1612b0: 0x1000000f  b           . + 4 + (0xF << 2)
label_1612b4:
    if (ctx->pc == 0x1612B4u) {
        ctx->pc = 0x1612B4u;
            // 0x1612b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1612B8u;
        goto label_1612b8;
    }
    ctx->pc = 0x1612B0u;
    {
        const bool branch_taken_0x1612b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1612B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1612B0u;
            // 0x1612b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1612b0) {
            ctx->pc = 0x1612F0u;
            goto label_1612f0;
        }
    }
    ctx->pc = 0x1612B8u;
label_1612b8:
    // 0x1612b8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1612b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_1612bc:
    // 0x1612bc: 0xc0a94e4  jal         func_2A5390
label_1612c0:
    if (ctx->pc == 0x1612C0u) {
        ctx->pc = 0x1612C0u;
            // 0x1612c0: 0x8c44d120  lw          $a0, -0x2EE0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
        ctx->pc = 0x1612C4u;
        goto label_1612c4;
    }
    ctx->pc = 0x1612BCu;
    SET_GPR_U32(ctx, 31, 0x1612C4u);
    ctx->pc = 0x1612C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1612BCu;
            // 0x1612c0: 0x8c44d120  lw          $a0, -0x2EE0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5390u;
    if (runtime->hasFunction(0x2A5390u)) {
        auto targetFn = runtime->lookupFunction(0x2A5390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1612C4u; }
        if (ctx->pc != 0x1612C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A5390_0x2a5390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1612C4u; }
        if (ctx->pc != 0x1612C4u) { return; }
    }
    ctx->pc = 0x1612C4u;
label_1612c4:
    // 0x1612c4: 0x10000009  b           . + 4 + (0x9 << 2)
label_1612c8:
    if (ctx->pc == 0x1612C8u) {
        ctx->pc = 0x1612CCu;
        goto label_1612cc;
    }
    ctx->pc = 0x1612C4u;
    {
        const bool branch_taken_0x1612c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1612c4) {
            ctx->pc = 0x1612ECu;
            goto label_1612ec;
        }
    }
    ctx->pc = 0x1612CCu;
label_1612cc:
    // 0x1612cc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1612ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1612d0:
    // 0x1612d0: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x1612d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1612d4:
    // 0x1612d4: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x1612d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_1612d8:
    // 0x1612d8: 0x8042007a  lb          $v0, 0x7A($v0)
    ctx->pc = 0x1612d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 122)));
label_1612dc:
    // 0x1612dc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1612dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1612e0:
    // 0x1612e0: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
label_1612e4:
    if (ctx->pc == 0x1612E4u) {
        ctx->pc = 0x1612E4u;
            // 0x1612e4: 0x30f000ff  andi        $s0, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x1612E8u;
        goto label_1612e8;
    }
    ctx->pc = 0x1612E0u;
    {
        const bool branch_taken_0x1612e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1612e0) {
            ctx->pc = 0x1612E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1612E0u;
            // 0x1612e4: 0x30f000ff  andi        $s0, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1612ECu;
            goto label_1612ec;
        }
    }
    ctx->pc = 0x1612E8u;
label_1612e8:
    // 0x1612e8: 0xac800130  sw          $zero, 0x130($a0)
    ctx->pc = 0x1612e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 0));
label_1612ec:
    // 0x1612ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1612ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1612f0:
    // 0x1612f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1612f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1612f4:
    // 0x1612f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1612f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1612f8:
    // 0x1612f8: 0x3e00008  jr          $ra
label_1612fc:
    if (ctx->pc == 0x1612FCu) {
        ctx->pc = 0x1612FCu;
            // 0x1612fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x161300u;
        goto label_161300;
    }
    ctx->pc = 0x1612F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1612FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1612F8u;
            // 0x1612fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161300u;
label_161300:
    // 0x161300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x161300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_161304:
    // 0x161304: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x161304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_161308:
    // 0x161308: 0x10a3001d  beq         $a1, $v1, . + 4 + (0x1D << 2)
label_16130c:
    if (ctx->pc == 0x16130Cu) {
        ctx->pc = 0x16130Cu;
            // 0x16130c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x161310u;
        goto label_161310;
    }
    ctx->pc = 0x161308u;
    {
        const bool branch_taken_0x161308 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x16130Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161308u;
            // 0x16130c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161308) {
            ctx->pc = 0x161380u;
            goto label_161380;
        }
    }
    ctx->pc = 0x161310u;
label_161310:
    // 0x161310: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x161310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_161314:
    // 0x161314: 0x50a30012  beql        $a1, $v1, . + 4 + (0x12 << 2)
label_161318:
    if (ctx->pc == 0x161318u) {
        ctx->pc = 0x161318u;
            // 0x161318: 0xac860130  sw          $a2, 0x130($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 6));
        ctx->pc = 0x16131Cu;
        goto label_16131c;
    }
    ctx->pc = 0x161314u;
    {
        const bool branch_taken_0x161314 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x161314) {
            ctx->pc = 0x161318u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x161314u;
            // 0x161318: 0xac860130  sw          $a2, 0x130($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x161360u;
            goto label_161360;
        }
    }
    ctx->pc = 0x16131Cu;
label_16131c:
    // 0x16131c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x16131cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_161320:
    // 0x161320: 0x10a60003  beq         $a1, $a2, . + 4 + (0x3 << 2)
label_161324:
    if (ctx->pc == 0x161324u) {
        ctx->pc = 0x161328u;
        goto label_161328;
    }
    ctx->pc = 0x161320u;
    {
        const bool branch_taken_0x161320 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x161320) {
            ctx->pc = 0x161330u;
            goto label_161330;
        }
    }
    ctx->pc = 0x161328u;
label_161328:
    // 0x161328: 0x1000001c  b           . + 4 + (0x1C << 2)
label_16132c:
    if (ctx->pc == 0x16132Cu) {
        ctx->pc = 0x16132Cu;
            // 0x16132c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x161330u;
        goto label_161330;
    }
    ctx->pc = 0x161328u;
    {
        const bool branch_taken_0x161328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16132Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161328u;
            // 0x16132c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161328) {
            ctx->pc = 0x16139Cu;
            goto label_16139c;
        }
    }
    ctx->pc = 0x161330u;
label_161330:
    // 0x161330: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x161330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_161334:
    // 0x161334: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x161334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_161338:
    // 0x161338: 0x9063007d  lbu         $v1, 0x7D($v1)
    ctx->pc = 0x161338u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 125)));
label_16133c:
    // 0x16133c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_161340:
    if (ctx->pc == 0x161340u) {
        ctx->pc = 0x161340u;
            // 0x161340: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x161344u;
        goto label_161344;
    }
    ctx->pc = 0x16133Cu;
    {
        const bool branch_taken_0x16133c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16133c) {
            ctx->pc = 0x161340u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16133Cu;
            // 0x161340: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x161344u;
            goto label_161344;
        }
    }
    ctx->pc = 0x161344u;
label_161344:
    // 0x161344: 0x8c850124  lw          $a1, 0x124($a0)
    ctx->pc = 0x161344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
label_161348:
    // 0x161348: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x161348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_16134c:
    // 0x16134c: 0x30c60004  andi        $a2, $a2, 0x4
    ctx->pc = 0x16134cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_161350:
    // 0x161350: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x161350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_161354:
    // 0x161354: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x161354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_161358:
    // 0x161358: 0x1000000f  b           . + 4 + (0xF << 2)
label_16135c:
    if (ctx->pc == 0x16135Cu) {
        ctx->pc = 0x16135Cu;
            // 0x16135c: 0xac830124  sw          $v1, 0x124($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 3));
        ctx->pc = 0x161360u;
        goto label_161360;
    }
    ctx->pc = 0x161358u;
    {
        const bool branch_taken_0x161358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16135Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161358u;
            // 0x16135c: 0xac830124  sw          $v1, 0x124($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161358) {
            ctx->pc = 0x161398u;
            goto label_161398;
        }
    }
    ctx->pc = 0x161360u;
label_161360:
    // 0x161360: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x161360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_161364:
    // 0x161364: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x161364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_161368:
    // 0x161368: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x161368u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16136c:
    // 0x16136c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x16136cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_161370:
    // 0x161370: 0x320f809  jalr        $t9
label_161374:
    if (ctx->pc == 0x161374u) {
        ctx->pc = 0x161374u;
            // 0x161374: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x161378u;
        goto label_161378;
    }
    ctx->pc = 0x161370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x161378u);
        ctx->pc = 0x161374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161370u;
            // 0x161374: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x161378u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161378u; }
            if (ctx->pc != 0x161378u) { return; }
        }
        }
    }
    ctx->pc = 0x161378u;
label_161378:
    // 0x161378: 0x10000007  b           . + 4 + (0x7 << 2)
label_16137c:
    if (ctx->pc == 0x16137Cu) {
        ctx->pc = 0x161380u;
        goto label_161380;
    }
    ctx->pc = 0x161378u;
    {
        const bool branch_taken_0x161378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161378) {
            ctx->pc = 0x161398u;
            goto label_161398;
        }
    }
    ctx->pc = 0x161380u;
label_161380:
    // 0x161380: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x161380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_161384:
    // 0x161384: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x161384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_161388:
    // 0x161388: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x161388u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16138c:
    // 0x16138c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x16138cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_161390:
    // 0x161390: 0x320f809  jalr        $t9
label_161394:
    if (ctx->pc == 0x161394u) {
        ctx->pc = 0x161394u;
            // 0x161394: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x161398u;
        goto label_161398;
    }
    ctx->pc = 0x161390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x161398u);
        ctx->pc = 0x161394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161390u;
            // 0x161394: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x161398u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161398u; }
            if (ctx->pc != 0x161398u) { return; }
        }
        }
    }
    ctx->pc = 0x161398u;
label_161398:
    // 0x161398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16139c:
    // 0x16139c: 0x3e00008  jr          $ra
label_1613a0:
    if (ctx->pc == 0x1613A0u) {
        ctx->pc = 0x1613A0u;
            // 0x1613a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1613A4u;
        goto label_1613a4;
    }
    ctx->pc = 0x16139Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1613A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16139Cu;
            // 0x1613a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1613A4u;
label_1613a4:
    // 0x1613a4: 0x0  nop
    ctx->pc = 0x1613a4u;
    // NOP
label_1613a8:
    // 0x1613a8: 0x0  nop
    ctx->pc = 0x1613a8u;
    // NOP
label_1613ac:
    // 0x1613ac: 0x0  nop
    ctx->pc = 0x1613acu;
    // NOP
}
