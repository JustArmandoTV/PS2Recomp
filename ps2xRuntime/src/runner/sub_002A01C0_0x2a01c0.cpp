#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A01C0
// Address: 0x2a01c0 - 0x2a0340
void sub_002A01C0_0x2a01c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A01C0_0x2a01c0");
#endif

    switch (ctx->pc) {
        case 0x2a01c0u: goto label_2a01c0;
        case 0x2a01c4u: goto label_2a01c4;
        case 0x2a01c8u: goto label_2a01c8;
        case 0x2a01ccu: goto label_2a01cc;
        case 0x2a01d0u: goto label_2a01d0;
        case 0x2a01d4u: goto label_2a01d4;
        case 0x2a01d8u: goto label_2a01d8;
        case 0x2a01dcu: goto label_2a01dc;
        case 0x2a01e0u: goto label_2a01e0;
        case 0x2a01e4u: goto label_2a01e4;
        case 0x2a01e8u: goto label_2a01e8;
        case 0x2a01ecu: goto label_2a01ec;
        case 0x2a01f0u: goto label_2a01f0;
        case 0x2a01f4u: goto label_2a01f4;
        case 0x2a01f8u: goto label_2a01f8;
        case 0x2a01fcu: goto label_2a01fc;
        case 0x2a0200u: goto label_2a0200;
        case 0x2a0204u: goto label_2a0204;
        case 0x2a0208u: goto label_2a0208;
        case 0x2a020cu: goto label_2a020c;
        case 0x2a0210u: goto label_2a0210;
        case 0x2a0214u: goto label_2a0214;
        case 0x2a0218u: goto label_2a0218;
        case 0x2a021cu: goto label_2a021c;
        case 0x2a0220u: goto label_2a0220;
        case 0x2a0224u: goto label_2a0224;
        case 0x2a0228u: goto label_2a0228;
        case 0x2a022cu: goto label_2a022c;
        case 0x2a0230u: goto label_2a0230;
        case 0x2a0234u: goto label_2a0234;
        case 0x2a0238u: goto label_2a0238;
        case 0x2a023cu: goto label_2a023c;
        case 0x2a0240u: goto label_2a0240;
        case 0x2a0244u: goto label_2a0244;
        case 0x2a0248u: goto label_2a0248;
        case 0x2a024cu: goto label_2a024c;
        case 0x2a0250u: goto label_2a0250;
        case 0x2a0254u: goto label_2a0254;
        case 0x2a0258u: goto label_2a0258;
        case 0x2a025cu: goto label_2a025c;
        case 0x2a0260u: goto label_2a0260;
        case 0x2a0264u: goto label_2a0264;
        case 0x2a0268u: goto label_2a0268;
        case 0x2a026cu: goto label_2a026c;
        case 0x2a0270u: goto label_2a0270;
        case 0x2a0274u: goto label_2a0274;
        case 0x2a0278u: goto label_2a0278;
        case 0x2a027cu: goto label_2a027c;
        case 0x2a0280u: goto label_2a0280;
        case 0x2a0284u: goto label_2a0284;
        case 0x2a0288u: goto label_2a0288;
        case 0x2a028cu: goto label_2a028c;
        case 0x2a0290u: goto label_2a0290;
        case 0x2a0294u: goto label_2a0294;
        case 0x2a0298u: goto label_2a0298;
        case 0x2a029cu: goto label_2a029c;
        case 0x2a02a0u: goto label_2a02a0;
        case 0x2a02a4u: goto label_2a02a4;
        case 0x2a02a8u: goto label_2a02a8;
        case 0x2a02acu: goto label_2a02ac;
        case 0x2a02b0u: goto label_2a02b0;
        case 0x2a02b4u: goto label_2a02b4;
        case 0x2a02b8u: goto label_2a02b8;
        case 0x2a02bcu: goto label_2a02bc;
        case 0x2a02c0u: goto label_2a02c0;
        case 0x2a02c4u: goto label_2a02c4;
        case 0x2a02c8u: goto label_2a02c8;
        case 0x2a02ccu: goto label_2a02cc;
        case 0x2a02d0u: goto label_2a02d0;
        case 0x2a02d4u: goto label_2a02d4;
        case 0x2a02d8u: goto label_2a02d8;
        case 0x2a02dcu: goto label_2a02dc;
        case 0x2a02e0u: goto label_2a02e0;
        case 0x2a02e4u: goto label_2a02e4;
        case 0x2a02e8u: goto label_2a02e8;
        case 0x2a02ecu: goto label_2a02ec;
        case 0x2a02f0u: goto label_2a02f0;
        case 0x2a02f4u: goto label_2a02f4;
        case 0x2a02f8u: goto label_2a02f8;
        case 0x2a02fcu: goto label_2a02fc;
        case 0x2a0300u: goto label_2a0300;
        case 0x2a0304u: goto label_2a0304;
        case 0x2a0308u: goto label_2a0308;
        case 0x2a030cu: goto label_2a030c;
        case 0x2a0310u: goto label_2a0310;
        case 0x2a0314u: goto label_2a0314;
        case 0x2a0318u: goto label_2a0318;
        case 0x2a031cu: goto label_2a031c;
        case 0x2a0320u: goto label_2a0320;
        case 0x2a0324u: goto label_2a0324;
        case 0x2a0328u: goto label_2a0328;
        case 0x2a032cu: goto label_2a032c;
        case 0x2a0330u: goto label_2a0330;
        case 0x2a0334u: goto label_2a0334;
        case 0x2a0338u: goto label_2a0338;
        case 0x2a033cu: goto label_2a033c;
        default: break;
    }

    ctx->pc = 0x2a01c0u;

label_2a01c0:
    // 0x2a01c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a01c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a01c4:
    // 0x2a01c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a01c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2a01c8:
    // 0x2a01c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a01c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a01cc:
    // 0x2a01cc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2a01ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2a01d0:
    // 0x2a01d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a01d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a01d4:
    // 0x2a01d4: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x2a01d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_2a01d8:
    // 0x2a01d8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2a01d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2a01dc:
    // 0x2a01dc: 0x2463d430  addiu       $v1, $v1, -0x2BD0
    ctx->pc = 0x2a01dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956080));
label_2a01e0:
    // 0x2a01e0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2a01e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2a01e4:
    // 0x2a01e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a01e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a01e8:
    // 0x2a01e8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2a01e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2a01ec:
    // 0x2a01ec: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x2a01ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_2a01f0:
    // 0x2a01f0: 0x2463f860  addiu       $v1, $v1, -0x7A0
    ctx->pc = 0x2a01f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965344));
label_2a01f4:
    // 0x2a01f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a01f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2a01f8:
    // 0x2a01f8: 0x2442f8d0  addiu       $v0, $v0, -0x730
    ctx->pc = 0x2a01f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965456));
label_2a01fc:
    // 0x2a01fc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2a01fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2a0200:
    // 0x2a0200: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2a0200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2a0204:
    // 0x2a0204: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a0204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a0208:
    // 0x2a0208: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x2a0208u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
label_2a020c:
    // 0x2a020c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2a020cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a0210:
    // 0x2a0210: 0xc0a8038  jal         func_2A00E0
label_2a0214:
    if (ctx->pc == 0x2A0214u) {
        ctx->pc = 0x2A0214u;
            // 0x2a0214: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->pc = 0x2A0218u;
        goto label_2a0218;
    }
    ctx->pc = 0x2A0210u;
    SET_GPR_U32(ctx, 31, 0x2A0218u);
    ctx->pc = 0x2A0214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0210u;
            // 0x2a0214: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A00E0u;
    if (runtime->hasFunction(0x2A00E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A00E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0218u; }
        if (ctx->pc != 0x2A0218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A00E0_0x2a00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0218u; }
        if (ctx->pc != 0x2A0218u) { return; }
    }
    ctx->pc = 0x2A0218u;
label_2a0218:
    // 0x2a0218: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2a0218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2a021c:
    // 0x2a021c: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x2a021cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_2a0220:
    // 0x2a0220: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2a0224:
    if (ctx->pc == 0x2A0224u) {
        ctx->pc = 0x2A0224u;
            // 0x2a0224: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0228u;
        goto label_2a0228;
    }
    ctx->pc = 0x2A0220u;
    {
        const bool branch_taken_0x2a0220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0220) {
            ctx->pc = 0x2A0224u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0220u;
            // 0x2a0224: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A0238u;
            goto label_2a0238;
        }
    }
    ctx->pc = 0x2A0228u;
label_2a0228:
    // 0x2a0228: 0x84620006  lh          $v0, 0x6($v1)
    ctx->pc = 0x2a0228u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_2a022c:
    // 0x2a022c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a022cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a0230:
    // 0x2a0230: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x2a0230u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
label_2a0234:
    // 0x2a0234: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a0234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a0238:
    // 0x2a0238: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a0238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a023c:
    // 0x2a023c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a023cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a0240:
    // 0x2a0240: 0x3e00008  jr          $ra
label_2a0244:
    if (ctx->pc == 0x2A0244u) {
        ctx->pc = 0x2A0244u;
            // 0x2a0244: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2A0248u;
        goto label_2a0248;
    }
    ctx->pc = 0x2A0240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0240u;
            // 0x2a0244: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A0248u;
label_2a0248:
    // 0x2a0248: 0x0  nop
    ctx->pc = 0x2a0248u;
    // NOP
label_2a024c:
    // 0x2a024c: 0x0  nop
    ctx->pc = 0x2a024cu;
    // NOP
label_2a0250:
    // 0x2a0250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a0250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2a0254:
    // 0x2a0254: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a0254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2a0258:
    // 0x2a0258: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a0258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a025c:
    // 0x2a025c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a025cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a0260:
    // 0x2a0260: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a0260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a0264:
    // 0x2a0264: 0x1220002f  beqz        $s1, . + 4 + (0x2F << 2)
label_2a0268:
    if (ctx->pc == 0x2A0268u) {
        ctx->pc = 0x2A0268u;
            // 0x2a0268: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A026Cu;
        goto label_2a026c;
    }
    ctx->pc = 0x2A0264u;
    {
        const bool branch_taken_0x2a0264 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0264u;
            // 0x2a0268: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0264) {
            ctx->pc = 0x2A0324u;
            goto label_2a0324;
        }
    }
    ctx->pc = 0x2A026Cu;
label_2a026c:
    // 0x2a026c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a026cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2a0270:
    // 0x2a0270: 0x2442f8d0  addiu       $v0, $v0, -0x730
    ctx->pc = 0x2a0270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965456));
label_2a0274:
    // 0x2a0274: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2a0274u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2a0278:
    // 0x2a0278: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2a0278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2a027c:
    // 0x2a027c: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x2a027cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_2a0280:
    // 0x2a0280: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_2a0284:
    if (ctx->pc == 0x2A0284u) {
        ctx->pc = 0x2A0284u;
            // 0x2a0284: 0x2624000c  addiu       $a0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->pc = 0x2A0288u;
        goto label_2a0288;
    }
    ctx->pc = 0x2A0280u;
    {
        const bool branch_taken_0x2a0280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0280) {
            ctx->pc = 0x2A0284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0280u;
            // 0x2a0284: 0x2624000c  addiu       $a0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A02C0u;
            goto label_2a02c0;
        }
    }
    ctx->pc = 0x2A0288u;
label_2a0288:
    // 0x2a0288: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x2a0288u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_2a028c:
    // 0x2a028c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a028cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2a0290:
    // 0x2a0290: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x2a0290u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_2a0294:
    // 0x2a0294: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2a0294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_2a0298:
    // 0x2a0298: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a0298u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2a029c:
    // 0x2a029c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2a02a0:
    if (ctx->pc == 0x2A02A0u) {
        ctx->pc = 0x2A02A4u;
        goto label_2a02a4;
    }
    ctx->pc = 0x2A029Cu;
    {
        const bool branch_taken_0x2a029c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a029c) {
            ctx->pc = 0x2A02BCu;
            goto label_2a02bc;
        }
    }
    ctx->pc = 0x2A02A4u;
label_2a02a4:
    // 0x2a02a4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2a02a8:
    if (ctx->pc == 0x2A02A8u) {
        ctx->pc = 0x2A02ACu;
        goto label_2a02ac;
    }
    ctx->pc = 0x2A02A4u;
    {
        const bool branch_taken_0x2a02a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a02a4) {
            ctx->pc = 0x2A02BCu;
            goto label_2a02bc;
        }
    }
    ctx->pc = 0x2A02ACu;
label_2a02ac:
    // 0x2a02ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a02acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a02b0:
    // 0x2a02b0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2a02b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2a02b4:
    // 0x2a02b4: 0x320f809  jalr        $t9
label_2a02b8:
    if (ctx->pc == 0x2A02B8u) {
        ctx->pc = 0x2A02B8u;
            // 0x2a02b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2A02BCu;
        goto label_2a02bc;
    }
    ctx->pc = 0x2A02B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A02BCu);
        ctx->pc = 0x2A02B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A02B4u;
            // 0x2a02b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A02BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A02BCu; }
            if (ctx->pc != 0x2A02BCu) { return; }
        }
        }
    }
    ctx->pc = 0x2A02BCu;
label_2a02bc:
    // 0x2a02bc: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x2a02bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_2a02c0:
    // 0x2a02c0: 0xc0a8054  jal         func_2A0150
label_2a02c4:
    if (ctx->pc == 0x2A02C4u) {
        ctx->pc = 0x2A02C4u;
            // 0x2a02c4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2A02C8u;
        goto label_2a02c8;
    }
    ctx->pc = 0x2A02C0u;
    SET_GPR_U32(ctx, 31, 0x2A02C8u);
    ctx->pc = 0x2A02C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A02C0u;
            // 0x2a02c4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A0150u;
    if (runtime->hasFunction(0x2A0150u)) {
        auto targetFn = runtime->lookupFunction(0x2A0150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A02C8u; }
        if (ctx->pc != 0x2A02C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A0150_0x2a0150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A02C8u; }
        if (ctx->pc != 0x2A02C8u) { return; }
    }
    ctx->pc = 0x2A02C8u;
label_2a02c8:
    // 0x2a02c8: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
label_2a02cc:
    if (ctx->pc == 0x2A02CCu) {
        ctx->pc = 0x2A02CCu;
            // 0x2a02cc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2A02D0u;
        goto label_2a02d0;
    }
    ctx->pc = 0x2A02C8u;
    {
        const bool branch_taken_0x2a02c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a02c8) {
            ctx->pc = 0x2A02CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A02C8u;
            // 0x2a02cc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A0300u;
            goto label_2a0300;
        }
    }
    ctx->pc = 0x2A02D0u;
label_2a02d0:
    // 0x2a02d0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a02d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2a02d4:
    // 0x2a02d4: 0x2442f860  addiu       $v0, $v0, -0x7A0
    ctx->pc = 0x2a02d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965344));
label_2a02d8:
    // 0x2a02d8: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2a02dc:
    if (ctx->pc == 0x2A02DCu) {
        ctx->pc = 0x2A02DCu;
            // 0x2a02dc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2A02E0u;
        goto label_2a02e0;
    }
    ctx->pc = 0x2A02D8u;
    {
        const bool branch_taken_0x2a02d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A02DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A02D8u;
            // 0x2a02dc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a02d8) {
            ctx->pc = 0x2A02FCu;
            goto label_2a02fc;
        }
    }
    ctx->pc = 0x2A02E0u;
label_2a02e0:
    // 0x2a02e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a02e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2a02e4:
    // 0x2a02e4: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x2a02e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_2a02e8:
    // 0x2a02e8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2a02ec:
    if (ctx->pc == 0x2A02ECu) {
        ctx->pc = 0x2A02ECu;
            // 0x2a02ec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2A02F0u;
        goto label_2a02f0;
    }
    ctx->pc = 0x2A02E8u;
    {
        const bool branch_taken_0x2a02e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A02ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A02E8u;
            // 0x2a02ec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a02e8) {
            ctx->pc = 0x2A02FCu;
            goto label_2a02fc;
        }
    }
    ctx->pc = 0x2A02F0u;
label_2a02f0:
    // 0x2a02f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a02f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2a02f4:
    // 0x2a02f4: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x2a02f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_2a02f8:
    // 0x2a02f8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2a02f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2a02fc:
    // 0x2a02fc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2a02fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2a0300:
    // 0x2a0300: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a0300u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2a0304:
    // 0x2a0304: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_2a0308:
    if (ctx->pc == 0x2A0308u) {
        ctx->pc = 0x2A0308u;
            // 0x2a0308: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A030Cu;
        goto label_2a030c;
    }
    ctx->pc = 0x2A0304u;
    {
        const bool branch_taken_0x2a0304 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2a0304) {
            ctx->pc = 0x2A0308u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0304u;
            // 0x2a0308: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A0328u;
            goto label_2a0328;
        }
    }
    ctx->pc = 0x2A030Cu;
label_2a030c:
    // 0x2a030c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a030cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a0310:
    // 0x2a0310: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x2a0310u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_2a0314:
    // 0x2a0314: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2a0314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2a0318:
    // 0x2a0318: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a0318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a031c:
    // 0x2a031c: 0xc0a7ab4  jal         func_29EAD0
label_2a0320:
    if (ctx->pc == 0x2A0320u) {
        ctx->pc = 0x2A0320u;
            // 0x2a0320: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x2A0324u;
        goto label_2a0324;
    }
    ctx->pc = 0x2A031Cu;
    SET_GPR_U32(ctx, 31, 0x2A0324u);
    ctx->pc = 0x2A0320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A031Cu;
            // 0x2a0320: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0324u; }
        if (ctx->pc != 0x2A0324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0324u; }
        if (ctx->pc != 0x2A0324u) { return; }
    }
    ctx->pc = 0x2A0324u;
label_2a0324:
    // 0x2a0324: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a0324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a0328:
    // 0x2a0328: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a0328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a032c:
    // 0x2a032c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a032cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a0330:
    // 0x2a0330: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a0330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a0334:
    // 0x2a0334: 0x3e00008  jr          $ra
label_2a0338:
    if (ctx->pc == 0x2A0338u) {
        ctx->pc = 0x2A0338u;
            // 0x2a0338: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2A033Cu;
        goto label_2a033c;
    }
    ctx->pc = 0x2A0334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0334u;
            // 0x2a0338: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A033Cu;
label_2a033c:
    // 0x2a033c: 0x0  nop
    ctx->pc = 0x2a033cu;
    // NOP
}
